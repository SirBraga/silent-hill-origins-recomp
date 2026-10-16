#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298E18
// Address: 0x298e18 - 0x298eb8
void sub_00298E18_0x298e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298E18_0x298e18");
#endif

    switch (ctx->pc) {
        case 0x298e58u: goto label_298e58;
        case 0x298e9cu: goto label_298e9c;
        default: break;
    }

    ctx->pc = 0x298e18u;

    // 0x298e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298e1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298e28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298e30: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x298e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x298e34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298E34u;
    {
        const bool branch_taken_0x298e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E34u;
        // 0x298e38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e34) {
            ctx->pc = 0x298E44u;
            goto label_298e44;
        }
    }
    ctx->pc = 0x298E3Cu;
    // 0x298e3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298E3Cu;
    {
        const bool branch_taken_0x298e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E3Cu;
        // 0x298e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e3c) {
            ctx->pc = 0x298E5Cu;
            goto label_298e5c;
        }
    }
    ctx->pc = 0x298E44u;
label_298e44:
    // 0x298e44: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x298e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x298e48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298E48u;
    {
        const bool branch_taken_0x298e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E48u;
        // 0x298e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e48) {
            ctx->pc = 0x298E5Cu;
            goto label_298e5c;
        }
    }
    ctx->pc = 0x298E50u;
    // 0x298e50: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298E50u;
    SET_GPR_U32(ctx, 31, 0x298E58u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298E50u, 0x298E58u)) {
        return;
    }
    ctx->pc = 0x298E58u;
label_298e58:
    // 0x298e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_298e5c:
    // 0x298e5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x298E5Cu;
    {
        const bool branch_taken_0x298e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E5Cu;
        // 0x298e60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e5c) {
            ctx->pc = 0x298EA0u;
            goto label_298ea0;
        }
    }
    ctx->pc = 0x298E64u;
    // 0x298e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e68: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x298E68u;
    {
        const bool branch_taken_0x298e68 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x298E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E68u;
        // 0x298e6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e68) {
            ctx->pc = 0x298E8Cu;
            goto label_298e8c;
        }
    }
    ctx->pc = 0x298E70u;
    // 0x298e70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298e74: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x298e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x298e78: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x298e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x298e7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x298E7Cu;
    {
        const bool branch_taken_0x298e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298e7c) {
            ctx->pc = 0x298E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298E7Cu;
            // 0x298e80: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298E90u;
            goto label_298e90;
        }
    }
    ctx->pc = 0x298E84u;
    // 0x298e84: 0x52823  negu        $a1, $a1
    ctx->pc = 0x298e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x298e88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x298e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298e8c:
    // 0x298e8c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x298e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_298e90:
    // 0x298e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e94: 0xc0a629e  jal         func_298A78
    ctx->pc = 0x298E94u;
    SET_GPR_U32(ctx, 31, 0x298E9Cu);
    ctx->pc = 0x298E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E94u;
    // 0x298e98: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x298A78u, 0x298E94u, 0x298E9Cu)) {
        return;
    }
    ctx->pc = 0x298E9Cu;
label_298e9c:
    // 0x298e9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298ea0:
    // 0x298ea0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298ea4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298eac: 0x3e00008  jr          $ra
    ctx->pc = 0x298EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EACu;
        // 0x298eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298EB4u;
    // 0x298eb4: 0x0  nop
    ctx->pc = 0x298eb4u;
    // NOP
    ctx->pc = 0x298eb8u;
}

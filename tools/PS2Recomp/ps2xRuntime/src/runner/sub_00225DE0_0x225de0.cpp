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

// Function: sub_00225DE0
// Address: 0x225de0 - 0x225e78
void sub_00225DE0_0x225de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225DE0_0x225de0");
#endif

    switch (ctx->pc) {
        case 0x225e20u: goto label_225e20;
        default: break;
    }

    ctx->pc = 0x225de0u;

    // 0x225de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225de4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x225de8: 0xac253e88  sw          $a1, 0x3E88($at)
    ctx->pc = 0x225de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E88u, _value); } while (0);
    // 0x225dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225df0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x225df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x225df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225df8: 0x8f8583b0  lw          $a1, -0x7C50($gp)
    ctx->pc = 0x225df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935472)));
    // 0x225dfc: 0x8c440400  lw          $a0, 0x400($v0)
    ctx->pc = 0x225dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0400u));
    // 0x225e00: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x225e00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x225e04: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x225e04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x225e08: 0x8f8783b4  lw          $a3, -0x7C4C($gp)
    ctx->pc = 0x225e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935476)));
    // 0x225e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225e10: 0x25082d80  addiu       $t0, $t0, 0x2D80
    ctx->pc = 0x225e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11648));
    // 0x225e14: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x225e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x225e18: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x225E18u;
    SET_GPR_U32(ctx, 31, 0x225E20u);
    ctx->pc = 0x225E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E18u;
    // 0x225e1c: 0x3529000e  ori         $t1, $t1, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x225E18u, 0x225E20u)) {
        return;
    }
    ctx->pc = 0x225E20u;
label_225e20:
    // 0x225e20: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x225e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x225e24: 0x8c843e88  lw          $a0, 0x3E88($a0)
    ctx->pc = 0x225e24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3E88u));
    // 0x225e28: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x225e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x225e2c: 0x24650fc8  addiu       $a1, $v1, 0xFC8
    ctx->pc = 0x225e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x225e30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x225e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x225e34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x225E34u;
    {
        const bool branch_taken_0x225e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E34u;
        // 0x225e38: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e34) {
            ctx->pc = 0x225E64u;
            goto label_225e64;
        }
    }
    ctx->pc = 0x225E3Cu;
    // 0x225e3c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x225e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x225e40: 0x8c843e8c  lw          $a0, 0x3E8C($a0)
    ctx->pc = 0x225e40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3E8Cu));
    // 0x225e44: 0x24a300bc  addiu       $v1, $a1, 0xBC
    ctx->pc = 0x225e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x225e48: 0xaca300bc  sw          $v1, 0xBC($a1)
    ctx->pc = 0x225e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 3));
    // 0x225e4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x225e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x225e50: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x225e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x225e54: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x225e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x225e58: 0xac243e8c  sw          $a0, 0x3E8C($at)
    ctx->pc = 0x225e58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3E8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E8Cu, _value); } while (0);
    // 0x225e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x225E5Cu;
    {
        const bool branch_taken_0x225e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E5Cu;
        // 0x225e60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e5c) {
            ctx->pc = 0x225E68u;
            goto label_225e68;
        }
    }
    ctx->pc = 0x225E64u;
label_225e64:
    // 0x225e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225e68:
    // 0x225e68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225e70: 0x3e00008  jr          $ra
    ctx->pc = 0x225E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E70u;
        // 0x225e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225E78u;
}

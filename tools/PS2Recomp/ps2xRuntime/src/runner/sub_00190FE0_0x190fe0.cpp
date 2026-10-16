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

// Function: sub_00190FE0
// Address: 0x190fe0 - 0x191080
void sub_00190FE0_0x190fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190FE0_0x190fe0");
#endif

    switch (ctx->pc) {
        case 0x191018u: goto label_191018;
        case 0x191034u: goto label_191034;
        case 0x19103cu: goto label_19103c;
        case 0x19104cu: goto label_19104c;
        case 0x191058u: goto label_191058;
        default: break;
    }

    ctx->pc = 0x190fe0u;

    // 0x190fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190fe4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x190fe8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190fec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ff4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190ff8: 0x2611007c  addiu       $s1, $s0, 0x7C
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x190ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191004: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x191004u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x191008: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x191008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19100c: 0x8c520054  lw          $s2, 0x54($v0)
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x191010: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x191010u;
    SET_GPR_U32(ctx, 31, 0x191018u);
    ctx->pc = 0x191014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191010u;
    // 0x191014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x191010u, 0x191018u)) {
        return;
    }
    ctx->pc = 0x191018u;
label_191018:
    // 0x191018: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x191018u;
    {
        const bool branch_taken_0x191018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191018u;
        // 0x19101c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191018) {
            ctx->pc = 0x19105Cu;
            goto label_19105c;
        }
    }
    ctx->pc = 0x191020u;
    // 0x191020: 0x8202007c  lb          $v0, 0x7C($s0)
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x191024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191024u;
    {
        const bool branch_taken_0x191024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191024u;
        // 0x191028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191024) {
            ctx->pc = 0x191034u;
            goto label_191034;
        }
    }
    ctx->pc = 0x19102Cu;
    // 0x19102c: 0xc064420  jal         func_191080
    ctx->pc = 0x19102Cu;
    SET_GPR_U32(ctx, 31, 0x191034u);
    ctx->pc = 0x191030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19102Cu;
    // 0x191030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191080u, 0x19102Cu, 0x191034u)) {
        return;
    }
    ctx->pc = 0x191034u;
label_191034:
    // 0x191034: 0xc063c18  jal         func_18F060
    ctx->pc = 0x191034u;
    SET_GPR_U32(ctx, 31, 0x19103Cu);
    ctx->pc = 0x191038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191034u;
    // 0x191038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F060u, 0x191034u, 0x19103Cu)) {
        return;
    }
    ctx->pc = 0x19103Cu;
label_19103c:
    // 0x19103c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x191040: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191044: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x191044u;
    SET_GPR_U32(ctx, 31, 0x19104Cu);
    ctx->pc = 0x191048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191044u;
    // 0x191048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x191044u, 0x19104Cu)) {
        return;
    }
    ctx->pc = 0x19104Cu;
label_19104c:
    // 0x19104c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191050: 0xc063bb8  jal         func_18EEE0
    ctx->pc = 0x191050u;
    SET_GPR_U32(ctx, 31, 0x191058u);
    ctx->pc = 0x191054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191050u;
    // 0x191054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18EEE0u, 0x191050u, 0x191058u)) {
        return;
    }
    ctx->pc = 0x191058u;
label_191058:
    // 0x191058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19105c:
    // 0x19105c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19105cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x191060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191064: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x191064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19106c: 0x3e00008  jr          $ra
    ctx->pc = 0x19106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19106Cu;
        // 0x191070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191074u;
    // 0x191074: 0x0  nop
    ctx->pc = 0x191074u;
    // NOP
    // 0x191078: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19107c: 0x0  nop
    ctx->pc = 0x19107cu;
    // NOP
    ctx->pc = 0x191080u;
}

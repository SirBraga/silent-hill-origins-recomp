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

// Function: sub_00252EA8
// Address: 0x252ea8 - 0x252f40
void sub_00252EA8_0x252ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252EA8_0x252ea8");
#endif

    switch (ctx->pc) {
        case 0x252ea8u: goto label_252ea8;
        case 0x252eacu: goto label_252eac;
        case 0x252eb0u: goto label_252eb0;
        case 0x252eb4u: goto label_252eb4;
        case 0x252eb8u: goto label_252eb8;
        case 0x252ebcu: goto label_252ebc;
        case 0x252ec0u: goto label_252ec0;
        case 0x252ec4u: goto label_252ec4;
        case 0x252ec8u: goto label_252ec8;
        case 0x252eccu: goto label_252ecc;
        case 0x252ed0u: goto label_252ed0;
        case 0x252ed4u: goto label_252ed4;
        case 0x252ed8u: goto label_252ed8;
        case 0x252edcu: goto label_252edc;
        case 0x252ee0u: goto label_252ee0;
        case 0x252ee4u: goto label_252ee4;
        case 0x252ee8u: goto label_252ee8;
        case 0x252eecu: goto label_252eec;
        case 0x252ef0u: goto label_252ef0;
        case 0x252ef4u: goto label_252ef4;
        case 0x252ef8u: goto label_252ef8;
        case 0x252efcu: goto label_252efc;
        case 0x252f00u: goto label_252f00;
        case 0x252f04u: goto label_252f04;
        case 0x252f08u: goto label_252f08;
        case 0x252f0cu: goto label_252f0c;
        case 0x252f10u: goto label_252f10;
        case 0x252f14u: goto label_252f14;
        case 0x252f18u: goto label_252f18;
        case 0x252f1cu: goto label_252f1c;
        case 0x252f20u: goto label_252f20;
        case 0x252f24u: goto label_252f24;
        case 0x252f28u: goto label_252f28;
        case 0x252f2cu: goto label_252f2c;
        case 0x252f30u: goto label_252f30;
        case 0x252f34u: goto label_252f34;
        case 0x252f38u: goto label_252f38;
        case 0x252f3cu: goto label_252f3c;
        default: break;
    }

    ctx->pc = 0x252ea8u;

label_252ea8:
    // 0x252ea8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_252eac:
    // 0x252eac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_252eb0:
    // 0x252eb0: 0x8c435620  lw          $v1, 0x5620($v0)
    ctx->pc = 0x252eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22048)));
label_252eb4:
    // 0x252eb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_252eb8:
    // 0x252eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_252ebc:
    // 0x252ebc: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_252ec0:
    // 0x252ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_252ec4:
    // 0x252ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_252ec8:
    // 0x252ec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252ecc:
    // 0x252ecc: 0xc0927be  jal         func_249EF8
label_252ed0:
    if (ctx->pc == 0x252ED0u) {
        ctx->pc = 0x252ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ECCu;
        // 0x252ed0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252ED4u;
        goto label_252ed4;
    }
    ctx->pc = 0x252ECCu;
    SET_GPR_U32(ctx, 31, 0x252ED4u);
    ctx->pc = 0x252ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252ECCu;
    // 0x252ed0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x252ECCu, 0x252ED4u)) {
        return;
    }
    ctx->pc = 0x252ED4u;
label_252ed4:
    // 0x252ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252ed8:
    // 0x252ed8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x252ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_252edc:
    // 0x252edc: 0xc0927be  jal         func_249EF8
label_252ee0:
    if (ctx->pc == 0x252EE0u) {
        ctx->pc = 0x252EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EDCu;
        // 0x252ee0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252EE4u;
        goto label_252ee4;
    }
    ctx->pc = 0x252EDCu;
    SET_GPR_U32(ctx, 31, 0x252EE4u);
    ctx->pc = 0x252EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252EDCu;
    // 0x252ee0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x252EDCu, 0x252EE4u)) {
        return;
    }
    ctx->pc = 0x252EE4u;
label_252ee4:
    // 0x252ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252ee8:
    // 0x252ee8: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x252ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_252eec:
    // 0x252eec: 0xc0927be  jal         func_249EF8
label_252ef0:
    if (ctx->pc == 0x252EF0u) {
        ctx->pc = 0x252EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EECu;
        // 0x252ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252EF4u;
        goto label_252ef4;
    }
    ctx->pc = 0x252EECu;
    SET_GPR_U32(ctx, 31, 0x252EF4u);
    ctx->pc = 0x252EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252EECu;
    // 0x252ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x252EECu, 0x252EF4u)) {
        return;
    }
    ctx->pc = 0x252EF4u;
label_252ef4:
    // 0x252ef4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x252ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_252ef8:
    // 0x252ef8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_252efc:
    if (ctx->pc == 0x252EFCu) {
        ctx->pc = 0x252EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EF8u;
        // 0x252efc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F00u;
        goto label_252f00;
    }
    ctx->pc = 0x252EF8u;
    {
        const bool branch_taken_0x252ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EF8u;
        // 0x252efc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ef8) {
            ctx->pc = 0x252F28u;
            goto label_252f28;
        }
    }
    ctx->pc = 0x252F00u;
label_252f00:
    // 0x252f00: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x252f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_252f04:
    // 0x252f04: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x252f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_252f08:
    // 0x252f08: 0x40f809  jalr        $v0
label_252f0c:
    if (ctx->pc == 0x252F0Cu) {
        ctx->pc = 0x252F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F08u;
        // 0x252f0c: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F10u;
        goto label_252f10;
    }
    ctx->pc = 0x252F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x252F10u);
        ctx->pc = 0x252F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F08u;
        // 0x252f0c: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F08u, 0x252F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252F10u;
label_252f10:
    // 0x252f10: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x252f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_252f14:
    // 0x252f14: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_252f18:
    if (ctx->pc == 0x252F18u) {
        ctx->pc = 0x252F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F14u;
        // 0x252f18: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F1Cu;
        goto label_252f1c;
    }
    ctx->pc = 0x252F14u;
    {
        const bool branch_taken_0x252f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F14u;
        // 0x252f18: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f14) {
            ctx->pc = 0x252F28u;
            goto label_252f28;
        }
    }
    ctx->pc = 0x252F1Cu;
label_252f1c:
    // 0x252f1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x252f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252f20:
    // 0x252f20: 0xc093546  jal         func_24D518
label_252f24:
    if (ctx->pc == 0x252F24u) {
        ctx->pc = 0x252F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F20u;
        // 0x252f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F28u;
        goto label_252f28;
    }
    ctx->pc = 0x252F20u;
    SET_GPR_U32(ctx, 31, 0x252F28u);
    ctx->pc = 0x252F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F20u;
    // 0x252f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x252F20u, 0x252F28u)) {
        return;
    }
    ctx->pc = 0x252F28u;
label_252f28:
    // 0x252f28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252f2c:
    // 0x252f2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_252f30:
    // 0x252f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_252f34:
    // 0x252f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252f38:
    // 0x252f38: 0x3e00008  jr          $ra
label_252f3c:
    if (ctx->pc == 0x252F3Cu) {
        ctx->pc = 0x252F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F38u;
        // 0x252f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F40u;
        goto label_fallthrough_0x252f38;
    }
    ctx->pc = 0x252F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F38u;
        // 0x252f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252f38:
    ctx->pc = 0x252F40u;
}

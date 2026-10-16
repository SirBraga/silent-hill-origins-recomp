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

// Function: sub_00317F90
// Address: 0x317f90 - 0x318060
void sub_00317F90_0x317f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317F90_0x317f90");
#endif

    switch (ctx->pc) {
        case 0x317fb8u: goto label_317fb8;
        case 0x317fd0u: goto label_317fd0;
        case 0x31802cu: goto label_31802c;
        case 0x318050u: goto label_318050;
        default: break;
    }

    ctx->pc = 0x317f90u;

    // 0x317f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x317f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x317f94: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x317f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317f9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x317f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317fa0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x317fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317fa4: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x317fa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x317fa8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x317FA8u;
    {
        const bool branch_taken_0x317fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FA8u;
        // 0x317fac: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fa8) {
            ctx->pc = 0x318044u;
            goto label_318044;
        }
    }
    ctx->pc = 0x317FB0u;
    // 0x317fb0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x317fb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x317fb4: 0x0  nop
    ctx->pc = 0x317fb4u;
    // NOP
label_317fb8:
    // 0x317fb8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x317fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x317fbc: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x317FBCu;
    {
        const bool branch_taken_0x317fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x317fbc) {
            ctx->pc = 0x317FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317FBCu;
            // 0x317fc0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318038u;
            goto label_318038;
        }
    }
    ctx->pc = 0x317FC4u;
    // 0x317fc4: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x317fc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x317fc8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x317FC8u;
    {
        const bool branch_taken_0x317fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FC8u;
        // 0x317fcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fc8) {
            ctx->pc = 0x318038u;
            goto label_318038;
        }
    }
    ctx->pc = 0x317FD0u;
label_317fd0:
    // 0x317fd0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x317fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x317fd4: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x317fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x317fd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x317FD8u;
    {
        const bool branch_taken_0x317fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317fd8) {
            ctx->pc = 0x317FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317FD8u;
            // 0x317fdc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317FF0u;
            goto label_317ff0;
        }
    }
    ctx->pc = 0x317FE0u;
    // 0x317fe0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x317fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x317fe4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x317FE4u;
    {
        const bool branch_taken_0x317fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317fe4) {
            ctx->pc = 0x317FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317FE4u;
            // 0x317fe8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317fd0;
        }
    }
    ctx->pc = 0x317FECu;
    // 0x317fec: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x317fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_317ff0:
    // 0x317ff0: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x317ff4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x317ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x317ff8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x317ff8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x317ffc: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x317ffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x318000: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x318000u;
    {
        const bool branch_taken_0x318000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318000u;
        // 0x318004: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318000) {
            ctx->pc = 0x318034u;
            goto label_318034;
        }
    }
    ctx->pc = 0x318008u;
    // 0x318008: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x318008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31800c: 0x24421880  addiu       $v0, $v0, 0x1880
    ctx->pc = 0x31800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x318010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x318014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x318018: 0x800008  jr          $a0
    ctx->pc = 0x318018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x318020u: goto label_318020;
            case 0x318034u: goto label_318034;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x318020u;
label_318020:
    // 0x318020: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x318024: 0xc0c6018  jal         func_318060
    ctx->pc = 0x318024u;
    SET_GPR_U32(ctx, 31, 0x31802Cu);
    ctx->pc = 0x318028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318024u;
    // 0x318028: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x318060u, 0x318024u, 0x31802Cu)) {
        return;
    }
    ctx->pc = 0x31802Cu;
label_31802c:
    // 0x31802c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31802Cu;
    {
        const bool branch_taken_0x31802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31802Cu;
        // 0x318030: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31802c) {
            ctx->pc = 0x318054u;
            goto label_318054;
        }
    }
    ctx->pc = 0x318034u;
label_318034:
    // 0x318034: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x318034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_318038:
    // 0x318038: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x318038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31803c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31803Cu;
    {
        const bool branch_taken_0x31803c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31803c) {
            ctx->pc = 0x318040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31803Cu;
            // 0x318040: 0x80c30000  lb          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317fb8;
        }
    }
    ctx->pc = 0x318044u;
label_318044:
    // 0x318044: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x318044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x318048: 0xc0c64d8  jal         func_319360
    ctx->pc = 0x318048u;
    SET_GPR_U32(ctx, 31, 0x318050u);
    ctx->pc = 0x31804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318048u;
    // 0x31804c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319360u, 0x318048u, 0x318050u)) {
        return;
    }
    ctx->pc = 0x318050u;
label_318050:
    // 0x318050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_318054:
    // 0x318054: 0x3e00008  jr          $ra
    ctx->pc = 0x318054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318054u;
        // 0x318058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31805Cu;
    // 0x31805c: 0x0  nop
    ctx->pc = 0x31805cu;
    // NOP
    ctx->pc = 0x318060u;
}

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

// Function: sub_002F9010
// Address: 0x2f9010 - 0x2f91c8
void sub_002F9010_0x2f9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9010_0x2f9010");
#endif

    switch (ctx->pc) {
        case 0x2f9058u: goto label_2f9058;
        case 0x2f9074u: goto label_2f9074;
        case 0x2f907cu: goto label_2f907c;
        case 0x2f9084u: goto label_2f9084;
        case 0x2f9098u: goto label_2f9098;
        case 0x2f90a0u: goto label_2f90a0;
        case 0x2f90a8u: goto label_2f90a8;
        case 0x2f9100u: goto label_2f9100;
        case 0x2f9128u: goto label_2f9128;
        case 0x2f914cu: goto label_2f914c;
        case 0x2f9170u: goto label_2f9170;
        default: break;
    }

    ctx->pc = 0x2f9010u;

    // 0x2f9010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9014: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f9014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f9018: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f9018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f901c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f901cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9020: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f9020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f9024: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f9024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9028: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f9028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f902c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f902cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9034: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x2f9034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2f9038: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x2f9038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2f903c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x2f903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x2f9040: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9040u;
    {
        const bool branch_taken_0x2f9040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9040u;
        // 0x2f9044: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9040) {
            ctx->pc = 0x2F9060u;
            goto label_2f9060;
        }
    }
    ctx->pc = 0x2F9048u;
    // 0x2f9048: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f9048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f904c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9050: 0xc0bf772  jal         func_2FDDC8
    ctx->pc = 0x2F9050u;
    SET_GPR_U32(ctx, 31, 0x2F9058u);
    ctx->pc = 0x2F9054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9050u;
    // 0x2f9054: 0x24a505c0  addiu       $a1, $a1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDDC8u, 0x2F9050u, 0x2F9058u)) {
        return;
    }
    ctx->pc = 0x2F9058u;
label_2f9058:
    // 0x2f9058: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2F9058u;
    {
        const bool branch_taken_0x2f9058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9058u;
        // 0x2f905c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9058) {
            ctx->pc = 0x2F91A8u;
            goto label_2f91a8;
        }
    }
    ctx->pc = 0x2F9060u;
label_2f9060:
    // 0x2f9060: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x2f9060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x2f9064: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9064u;
    {
        const bool branch_taken_0x2f9064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9064u;
        // 0x2f9068: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9064) {
            ctx->pc = 0x2F908Cu;
            goto label_2f908c;
        }
    }
    ctx->pc = 0x2F906Cu;
    // 0x2f906c: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F906Cu;
    SET_GPR_U32(ctx, 31, 0x2F9074u);
    ctx->pc = 0x2F9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F906Cu;
    // 0x2f9070: 0x24840600  addiu       $a0, $a0, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F906Cu, 0x2F9074u)) {
        return;
    }
    ctx->pc = 0x2F9074u;
label_2f9074:
    // 0x2f9074: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2F9074u;
    {
        const bool branch_taken_0x2f9074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9074u;
        // 0x2f9078: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9074) {
            ctx->pc = 0x2F91A8u;
            goto label_2f91a8;
        }
    }
    ctx->pc = 0x2F907Cu;
label_2f907c:
    // 0x2f907c: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F907Cu;
    SET_GPR_U32(ctx, 31, 0x2F9084u);
    ctx->pc = 0x2F9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F907Cu;
    // 0x2f9080: 0x24840640  addiu       $a0, $a0, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F907Cu, 0x2F9084u)) {
        return;
    }
    ctx->pc = 0x2F9084u;
label_2f9084:
    // 0x2f9084: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2F9084u;
    {
        const bool branch_taken_0x2f9084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9084u;
        // 0x2f9088: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9084) {
            ctx->pc = 0x2F91A8u;
            goto label_2f91a8;
        }
    }
    ctx->pc = 0x2F908Cu;
label_2f908c:
    // 0x2f908c: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x2f908cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x2f9090: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f9090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9094: 0x0  nop
    ctx->pc = 0x2f9094u;
    // NOP
label_2f9098:
    // 0x2f9098: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9098u;
    {
        const bool branch_taken_0x2f9098 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9098u;
        // 0x2f909c: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9098) {
            ctx->pc = 0x2F90D8u;
            goto label_2f90d8;
        }
    }
    ctx->pc = 0x2F90A0u;
label_2f90a0:
    // 0x2f90a0: 0xc0c0a02  jal         func_302808
    ctx->pc = 0x2F90A0u;
    SET_GPR_U32(ctx, 31, 0x2F90A8u);
    ctx->pc = 0x2F90A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90A0u;
    // 0x2f90a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302808u, 0x2F90A0u, 0x2F90A8u)) {
        return;
    }
    ctx->pc = 0x2F90A8u;
label_2f90a8:
    // 0x2f90a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f90a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f90ac: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F90ACu;
    {
        const bool branch_taken_0x2f90ac = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2F90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90ACu;
        // 0x2f90b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90ac) {
            ctx->pc = 0x2F91A8u;
            goto label_2f91a8;
        }
    }
    ctx->pc = 0x2F90B4u;
    // 0x2f90b4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F90B4u;
    {
        const bool branch_taken_0x2f90b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90B4u;
        // 0x2f90b8: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90b4) {
            ctx->pc = 0x2F90D8u;
            goto label_2f90d8;
        }
    }
    ctx->pc = 0x2F90BCu;
    // 0x2f90bc: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x2f90bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2f90c0: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x2f90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2f90c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F90C4u;
    {
        const bool branch_taken_0x2f90c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90C4u;
        // 0x2f90c8: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90c4) {
            ctx->pc = 0x2F90D8u;
            goto label_2f90d8;
        }
    }
    ctx->pc = 0x2F90CCu;
    // 0x2f90cc: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x2f90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x2f90d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F90D0u;
    {
        const bool branch_taken_0x2f90d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90D0u;
        // 0x2f90d4: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90d0) {
            ctx->pc = 0x2F90A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f90a0;
        }
    }
    ctx->pc = 0x2F90D8u;
label_2f90d8:
    // 0x2f90d8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F90D8u;
    {
        const bool branch_taken_0x2f90d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90D8u;
        // 0x2f90dc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90d8) {
            ctx->pc = 0x2F9180u;
            goto label_2f9180;
        }
    }
    ctx->pc = 0x2F90E0u;
    // 0x2f90e0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2f90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2f90e4: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x2f90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
    // 0x2f90e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f90ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f90f0: 0x800008  jr          $a0
    ctx->pc = 0x2F90F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F90F8u: goto label_2f90f8;
            case 0x2F910Cu: goto label_2f910c;
            case 0x2F913Cu: goto label_2f913c;
            case 0x2F9160u: goto label_2f9160;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F90F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F90F8u;
label_2f90f8:
    // 0x2f90f8: 0xc0be9a6  jal         func_2FA698
    ctx->pc = 0x2F90F8u;
    SET_GPR_U32(ctx, 31, 0x2F9100u);
    ctx->pc = 0x2F90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90F8u;
    // 0x2f90fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA698u, 0x2F90F8u, 0x2F9100u)) {
        return;
    }
    ctx->pc = 0x2F9100u;
label_2f9100:
    // 0x2f9100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f9100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9104: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F9104u;
    {
        const bool branch_taken_0x2f9104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9104u;
        // 0x2f9108: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9104) {
            ctx->pc = 0x2F9180u;
            goto label_2f9180;
        }
    }
    ctx->pc = 0x2F910Cu;
label_2f910c:
    // 0x2f910c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x2f910cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x2f9110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9114: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2f9114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2f9118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f911c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2f911cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2f9120: 0xc0be6a6  jal         func_2F9A98
    ctx->pc = 0x2F9120u;
    SET_GPR_U32(ctx, 31, 0x2F9128u);
    ctx->pc = 0x2F9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9120u;
    // 0x2f9124: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A98u, 0x2F9120u, 0x2F9128u)) {
        return;
    }
    ctx->pc = 0x2F9128u;
label_2f9128:
    // 0x2f9128: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x2f9128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2f912c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f912cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9130: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f9130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f9134: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F9134u;
    {
        const bool branch_taken_0x2f9134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9134u;
        // 0x2f9138: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9134) {
            ctx->pc = 0x2F9180u;
            goto label_2f9180;
        }
    }
    ctx->pc = 0x2F913Cu;
label_2f913c:
    // 0x2f913c: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x2f913cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2f9140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9144: 0xc0be6a6  jal         func_2F9A98
    ctx->pc = 0x2F9144u;
    SET_GPR_U32(ctx, 31, 0x2F914Cu);
    ctx->pc = 0x2F9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9144u;
    // 0x2f9148: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A98u, 0x2F9144u, 0x2F914Cu)) {
        return;
    }
    ctx->pc = 0x2F914Cu;
label_2f914c:
    // 0x2f914c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2f914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2f9150: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f9150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f9154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f9158: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9158u;
    {
        const bool branch_taken_0x2f9158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9158u;
        // 0x2f915c: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9158) {
            ctx->pc = 0x2F9180u;
            goto label_2f9180;
        }
    }
    ctx->pc = 0x2F9160u;
label_2f9160:
    // 0x2f9160: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x2f9160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f9164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9168: 0xc0be6a6  jal         func_2F9A98
    ctx->pc = 0x2F9168u;
    SET_GPR_U32(ctx, 31, 0x2F9170u);
    ctx->pc = 0x2F916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9168u;
    // 0x2f916c: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A98u, 0x2F9168u, 0x2F9170u)) {
        return;
    }
    ctx->pc = 0x2F9170u;
label_2f9170:
    // 0x2f9170: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x2f9170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f9174: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f9174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f9178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f917c: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x2f917cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_2f9180:
    // 0x2f9180: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x2f9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x2f9184: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2F9184u;
    {
        const bool branch_taken_0x2f9184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9184u;
        // 0x2f9188: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9184) {
            ctx->pc = 0x2F907Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f907c;
        }
    }
    ctx->pc = 0x2F918Cu;
    // 0x2f918c: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x2f918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x2f9190: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9190u;
    {
        const bool branch_taken_0x2f9190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9190u;
        // 0x2f9194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9190) {
            ctx->pc = 0x2F91A8u;
            goto label_2f91a8;
        }
    }
    ctx->pc = 0x2F9198u;
    // 0x2f9198: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f919c: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2F919Cu;
    {
        const bool branch_taken_0x2f919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F919Cu;
        // 0x2f91a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f919c) {
            ctx->pc = 0x2F9098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9098;
        }
    }
    ctx->pc = 0x2F91A4u;
    // 0x2f91a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f91a8:
    // 0x2f91a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f91a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f91ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f91acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f91b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f91b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f91b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f91b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f91b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f91b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f91bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F91BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91BCu;
        // 0x2f91c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F91BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F91C4u;
    // 0x2f91c4: 0x0  nop
    ctx->pc = 0x2f91c4u;
    // NOP
    ctx->pc = 0x2f91c8u;
}

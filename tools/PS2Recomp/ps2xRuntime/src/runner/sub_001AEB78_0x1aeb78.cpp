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

// Function: sub_001AEB78
// Address: 0x1aeb78 - 0x1aecc8
void sub_001AEB78_0x1aeb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEB78_0x1aeb78");
#endif

    switch (ctx->pc) {
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aec78u: goto label_1aec78;
        default: break;
    }

    ctx->pc = 0x1aeb78u;

    // 0x1aeb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aeb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aeb7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aeb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aeb80: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1aeb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1aeb84: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1aeb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aeb88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1aeb8c: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x1aeb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x1aeb90: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1AEB90u;
    {
        const bool branch_taken_0x1aeb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB90u;
        // 0x1aeb94: 0x2ca2000e  sltiu       $v0, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb90) {
            ctx->pc = 0x1AECC8u;
            return;
        }
    }
    ctx->pc = 0x1AEB98u;
    // 0x1aeb98: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1AEB98u;
    {
        const bool branch_taken_0x1aeb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB98u;
        // 0x1aeb9c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb98) {
            ctx->pc = 0x1AECC8u;
            return;
        }
    }
    ctx->pc = 0x1AEBA0u;
    // 0x1aeba0: 0x2442baa0  addiu       $v0, $v0, -0x4560
    ctx->pc = 0x1aeba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949536));
    // 0x1aeba4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aeba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aeba8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aebac: 0x600008  jr          $v1
    ctx->pc = 0x1AEBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEBB4u: goto label_1aebb4;
            case 0x1AEBC8u: goto label_1aebc8;
            case 0x1AEBDCu: goto label_1aebdc;
            case 0x1AEBF0u: goto label_1aebf0;
            case 0x1AEC00u: goto label_1aec00;
            case 0x1AEC10u: goto label_1aec10;
            case 0x1AEC20u: goto label_1aec20;
            case 0x1AEC30u: goto label_1aec30;
            case 0x1AEC80u: goto label_1aec80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEBACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AEBB4u;
label_1aebb4:
    // 0x1aebb4: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1AEBB4u;
    {
        const bool branch_taken_0x1aebb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aebb4) {
            ctx->pc = 0x1AEBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEBB4u;
            // 0x1aebb8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEBE8u;
            goto label_1aebe8;
        }
    }
    ctx->pc = 0x1AEBBCu;
    // 0x1aebbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1aebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1aebc0:
    // 0x1aebc0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1AEBC0u;
    {
        const bool branch_taken_0x1aebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBC0u;
        // 0x1aebc4: 0x244243b8  addiu       $v0, $v0, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebc0) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEBC8u;
label_1aebc8:
    // 0x1aebc8: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEBC8u;
    {
        const bool branch_taken_0x1aebc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aebc8) {
            ctx->pc = 0x1AEBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEBC8u;
            // 0x1aebcc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEBE8u;
            goto label_1aebe8;
        }
    }
    ctx->pc = 0x1AEBD0u;
    // 0x1aebd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1aebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1aebd4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1AEBD4u;
    {
        const bool branch_taken_0x1aebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBD4u;
        // 0x1aebd8: 0x244243c8  addiu       $v0, $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebd4) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEBDCu;
label_1aebdc:
    // 0x1aebdc: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AEBDCu;
    {
        const bool branch_taken_0x1aebdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aebdc) {
            ctx->pc = 0x1AEBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEBDCu;
            // 0x1aebe0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aebc0;
        }
    }
    ctx->pc = 0x1AEBE4u;
    // 0x1aebe4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1aebe8:
    // 0x1aebe8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1AEBE8u;
    {
        const bool branch_taken_0x1aebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE8u;
        // 0x1aebec: 0x244243c0  addiu       $v0, $v0, 0x43C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebe8) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEBF0u;
label_1aebf0:
    // 0x1aebf0: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AEBF0u;
    {
        const bool branch_taken_0x1aebf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBF0u;
        // 0x1aebf4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebf0) {
            ctx->pc = 0x1AEC40u;
            goto label_1aec40;
        }
    }
    ctx->pc = 0x1AEBF8u;
    // 0x1aebf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AEBF8u;
    {
        const bool branch_taken_0x1aebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBF8u;
        // 0x1aebfc: 0x24424390  addiu       $v0, $v0, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebf8) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEC00u;
label_1aec00:
    // 0x1aec00: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1AEC00u;
    {
        const bool branch_taken_0x1aec00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC00u;
        // 0x1aec04: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec00) {
            ctx->pc = 0x1AEC40u;
            goto label_1aec40;
        }
    }
    ctx->pc = 0x1AEC08u;
    // 0x1aec08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AEC08u;
    {
        const bool branch_taken_0x1aec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC08u;
        // 0x1aec0c: 0x24424398  addiu       $v0, $v0, 0x4398 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec08) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEC10u;
label_1aec10:
    // 0x1aec10: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1AEC10u;
    {
        const bool branch_taken_0x1aec10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC10u;
        // 0x1aec14: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec10) {
            ctx->pc = 0x1AEC40u;
            goto label_1aec40;
        }
    }
    ctx->pc = 0x1AEC18u;
    // 0x1aec18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AEC18u;
    {
        const bool branch_taken_0x1aec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC18u;
        // 0x1aec1c: 0x244243a0  addiu       $v0, $v0, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec18) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEC20u;
label_1aec20:
    // 0x1aec20: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEC20u;
    {
        const bool branch_taken_0x1aec20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC20u;
        // 0x1aec24: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec20) {
            ctx->pc = 0x1AEC40u;
            goto label_1aec40;
        }
    }
    ctx->pc = 0x1AEC28u;
    // 0x1aec28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEC28u;
    {
        const bool branch_taken_0x1aec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC28u;
        // 0x1aec2c: 0x244243a8  addiu       $v0, $v0, 0x43A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec28) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEC30u;
label_1aec30:
    // 0x1aec30: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEC30u;
    {
        const bool branch_taken_0x1aec30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC30u;
        // 0x1aec34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec30) {
            ctx->pc = 0x1AEC40u;
            goto label_1aec40;
        }
    }
    ctx->pc = 0x1AEC38u;
    // 0x1aec38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEC38u;
    {
        const bool branch_taken_0x1aec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC38u;
        // 0x1aec3c: 0x24424400  addiu       $v0, $v0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec38) {
            ctx->pc = 0x1AEC48u;
            goto label_1aec48;
        }
    }
    ctx->pc = 0x1AEC40u;
label_1aec40:
    // 0x1aec40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1aec44: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x1aec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
label_1aec48:
    // 0x1aec48: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1aec48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1aec4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1aec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aec50: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1aec50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1aec54: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AEC54u;
    {
        const bool branch_taken_0x1aec54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC54u;
        // 0x1aec58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec54) {
            ctx->pc = 0x1AECCCu;
            return;
        }
    }
    ctx->pc = 0x1AEC5Cu;
    // 0x1aec5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aec60: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AEC60u;
    {
        const bool branch_taken_0x1aec60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec60) {
            ctx->pc = 0x1AECCCu;
            return;
        }
    }
    ctx->pc = 0x1AEC68u;
    // 0x1aec68: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1aec68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1aec6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec70: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1AEC70u;
    SET_GPR_U32(ctx, 31, 0x1AEC78u);
    ctx->pc = 0x1AEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC70u;
    // 0x1aec74: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AEC70u, 0x1AEC78u)) {
        return;
    }
    ctx->pc = 0x1AEC78u;
label_1aec78:
    // 0x1aec78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AEC78u;
    {
        const bool branch_taken_0x1aec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC78u;
        // 0x1aec7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec78) {
            ctx->pc = 0x1AECCCu;
            return;
        }
    }
    ctx->pc = 0x1AEC80u;
label_1aec80:
    // 0x1aec80: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEC80u;
    {
        const bool branch_taken_0x1aec80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC80u;
        // 0x1aec84: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec80) {
            ctx->pc = 0x1AEC90u;
            goto label_1aec90;
        }
    }
    ctx->pc = 0x1AEC88u;
    // 0x1aec88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEC88u;
    {
        const bool branch_taken_0x1aec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC88u;
        // 0x1aec8c: 0x24424400  addiu       $v0, $v0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec88) {
            ctx->pc = 0x1AEC98u;
            goto label_1aec98;
        }
    }
    ctx->pc = 0x1AEC90u;
label_1aec90:
    // 0x1aec90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1aec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1aec94: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x1aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
label_1aec98:
    // 0x1aec98: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1aec9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1aec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aeca0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1aeca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1aeca4: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AECA4u;
    {
        const bool branch_taken_0x1aeca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECA4u;
        // 0x1aeca8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeca4) {
            ctx->pc = 0x1AECCCu;
            return;
        }
    }
    ctx->pc = 0x1AECACu;
    // 0x1aecac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aecb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AECB0u;
    {
        const bool branch_taken_0x1aecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aecb0) {
            ctx->pc = 0x1AECCCu;
            return;
        }
    }
    ctx->pc = 0x1AECB8u;
    // 0x1aecb8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1aecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1aecbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aecc0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1AECC0u;
    SET_GPR_U32(ctx, 31, 0x1AECC8u);
    ctx->pc = 0x1AECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECC0u;
    // 0x1aecc4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AECC0u, 0x1AECC8u)) {
        return;
    }
    ctx->pc = 0x1AECC8u;
}

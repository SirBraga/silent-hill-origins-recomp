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

// Function: sub_001DC240
// Address: 0x1dc240 - 0x1dc350
void sub_001DC240_0x1dc240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC240_0x1dc240");
#endif

    switch (ctx->pc) {
        case 0x1dc240u: goto label_1dc240;
        case 0x1dc244u: goto label_1dc244;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc24cu: goto label_1dc24c;
        case 0x1dc250u: goto label_1dc250;
        case 0x1dc254u: goto label_1dc254;
        case 0x1dc258u: goto label_1dc258;
        case 0x1dc25cu: goto label_1dc25c;
        case 0x1dc260u: goto label_1dc260;
        case 0x1dc264u: goto label_1dc264;
        case 0x1dc268u: goto label_1dc268;
        case 0x1dc26cu: goto label_1dc26c;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc274u: goto label_1dc274;
        case 0x1dc278u: goto label_1dc278;
        case 0x1dc27cu: goto label_1dc27c;
        case 0x1dc280u: goto label_1dc280;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc288u: goto label_1dc288;
        case 0x1dc28cu: goto label_1dc28c;
        case 0x1dc290u: goto label_1dc290;
        case 0x1dc294u: goto label_1dc294;
        case 0x1dc298u: goto label_1dc298;
        case 0x1dc29cu: goto label_1dc29c;
        case 0x1dc2a0u: goto label_1dc2a0;
        case 0x1dc2a4u: goto label_1dc2a4;
        case 0x1dc2a8u: goto label_1dc2a8;
        case 0x1dc2acu: goto label_1dc2ac;
        case 0x1dc2b0u: goto label_1dc2b0;
        case 0x1dc2b4u: goto label_1dc2b4;
        case 0x1dc2b8u: goto label_1dc2b8;
        case 0x1dc2bcu: goto label_1dc2bc;
        case 0x1dc2c0u: goto label_1dc2c0;
        case 0x1dc2c4u: goto label_1dc2c4;
        case 0x1dc2c8u: goto label_1dc2c8;
        case 0x1dc2ccu: goto label_1dc2cc;
        case 0x1dc2d0u: goto label_1dc2d0;
        case 0x1dc2d4u: goto label_1dc2d4;
        case 0x1dc2d8u: goto label_1dc2d8;
        case 0x1dc2dcu: goto label_1dc2dc;
        case 0x1dc2e0u: goto label_1dc2e0;
        case 0x1dc2e4u: goto label_1dc2e4;
        case 0x1dc2e8u: goto label_1dc2e8;
        case 0x1dc2ecu: goto label_1dc2ec;
        case 0x1dc2f0u: goto label_1dc2f0;
        case 0x1dc2f4u: goto label_1dc2f4;
        case 0x1dc2f8u: goto label_1dc2f8;
        case 0x1dc2fcu: goto label_1dc2fc;
        case 0x1dc300u: goto label_1dc300;
        case 0x1dc304u: goto label_1dc304;
        case 0x1dc308u: goto label_1dc308;
        case 0x1dc30cu: goto label_1dc30c;
        case 0x1dc310u: goto label_1dc310;
        case 0x1dc314u: goto label_1dc314;
        case 0x1dc318u: goto label_1dc318;
        case 0x1dc31cu: goto label_1dc31c;
        case 0x1dc320u: goto label_1dc320;
        case 0x1dc324u: goto label_1dc324;
        case 0x1dc328u: goto label_1dc328;
        case 0x1dc32cu: goto label_1dc32c;
        case 0x1dc330u: goto label_1dc330;
        case 0x1dc334u: goto label_1dc334;
        case 0x1dc338u: goto label_1dc338;
        case 0x1dc33cu: goto label_1dc33c;
        case 0x1dc340u: goto label_1dc340;
        case 0x1dc344u: goto label_1dc344;
        case 0x1dc348u: goto label_1dc348;
        case 0x1dc34cu: goto label_1dc34c;
        default: break;
    }

    ctx->pc = 0x1dc240u;

label_1dc240:
    // 0x1dc240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dc244:
    // 0x1dc244: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dc244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dc248:
    // 0x1dc248: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dc248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dc24c:
    // 0x1dc24c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc250:
    // 0x1dc250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dc254:
    // 0x1dc254: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dc258:
    // 0x1dc258: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1dc25c:
    if (ctx->pc == 0x1DC25Cu) {
        ctx->pc = 0x1DC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC258u;
        // 0x1dc25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC260u;
        goto label_1dc260;
    }
    ctx->pc = 0x1DC258u;
    {
        const bool branch_taken_0x1dc258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC258u;
        // 0x1dc25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc258) {
            ctx->pc = 0x1DC278u;
            goto label_1dc278;
        }
    }
    ctx->pc = 0x1DC260u;
label_1dc260:
    // 0x1dc260: 0xc077e86  jal         func_1DFA18
label_1dc264:
    if (ctx->pc == 0x1DC264u) {
        ctx->pc = 0x1DC268u;
        goto label_1dc268;
    }
    ctx->pc = 0x1DC260u;
    SET_GPR_U32(ctx, 31, 0x1DC268u);
    ctx->pc = 0x1DFA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFA18u, 0x1DC260u, 0x1DC268u)) {
        return;
    }
    ctx->pc = 0x1DC268u;
label_1dc268:
    // 0x1dc268: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dc26c:
    if (ctx->pc == 0x1DC26Cu) {
        ctx->pc = 0x1DC270u;
        goto label_1dc270;
    }
    ctx->pc = 0x1DC268u;
    {
        const bool branch_taken_0x1dc268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc268) {
            ctx->pc = 0x1DC278u;
            goto label_1dc278;
        }
    }
    ctx->pc = 0x1DC270u;
label_1dc270:
    // 0x1dc270: 0x10000014  b           . + 4 + (0x14 << 2)
label_1dc274:
    if (ctx->pc == 0x1DC274u) {
        ctx->pc = 0x1DC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC270u;
        // 0x1dc274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC278u;
        goto label_1dc278;
    }
    ctx->pc = 0x1DC270u;
    {
        const bool branch_taken_0x1dc270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC270u;
        // 0x1dc274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc270) {
            ctx->pc = 0x1DC2C4u;
            goto label_1dc2c4;
        }
    }
    ctx->pc = 0x1DC278u;
label_1dc278:
    // 0x1dc278: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1dc27c:
    if (ctx->pc == 0x1DC27Cu) {
        ctx->pc = 0x1DC280u;
        goto label_1dc280;
    }
    ctx->pc = 0x1DC278u;
    {
        const bool branch_taken_0x1dc278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc278) {
            ctx->pc = 0x1DC2ECu;
            goto label_1dc2ec;
        }
    }
    ctx->pc = 0x1DC280u;
label_1dc280:
    // 0x1dc280: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1dc280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dc284:
    // 0x1dc284: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1dc288:
    if (ctx->pc == 0x1DC288u) {
        ctx->pc = 0x1DC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC284u;
        // 0x1dc288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC28Cu;
        goto label_1dc28c;
    }
    ctx->pc = 0x1DC284u;
    {
        const bool branch_taken_0x1dc284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC284u;
        // 0x1dc288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc284) {
            ctx->pc = 0x1DC2C4u;
            goto label_1dc2c4;
        }
    }
    ctx->pc = 0x1DC28Cu;
label_1dc28c:
    // 0x1dc28c: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x1dc28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1dc290:
    // 0x1dc290: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
label_1dc294:
    if (ctx->pc == 0x1DC294u) {
        ctx->pc = 0x1DC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC290u;
        // 0x1dc294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC298u;
        goto label_1dc298;
    }
    ctx->pc = 0x1DC290u;
    {
        const bool branch_taken_0x1dc290 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1DC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC290u;
        // 0x1dc294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc290) {
            ctx->pc = 0x1DC2C4u;
            goto label_1dc2c4;
        }
    }
    ctx->pc = 0x1DC298u;
label_1dc298:
    // 0x1dc298: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1dc298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1dc29c:
    // 0x1dc29c: 0x0  nop
    ctx->pc = 0x1dc29cu;
    // NOP
label_1dc2a0:
    // 0x1dc2a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dc2a4:
    // 0x1dc2a4: 0x90620007  lbu         $v0, 0x7($v1)
    ctx->pc = 0x1dc2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
label_1dc2a8:
    // 0x1dc2a8: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x1dc2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_1dc2ac:
    // 0x1dc2ac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1dc2b0:
    if (ctx->pc == 0x1DC2B0u) {
        ctx->pc = 0x1DC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2ACu;
        // 0x1dc2b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2B4u;
        goto label_1dc2b4;
    }
    ctx->pc = 0x1DC2ACu;
    {
        const bool branch_taken_0x1dc2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2ACu;
        // 0x1dc2b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2ac) {
            ctx->pc = 0x1DC270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc270;
        }
    }
    ctx->pc = 0x1DC2B4u;
label_1dc2b4:
    // 0x1dc2b4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1dc2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dc2b8:
    // 0x1dc2b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1dc2bc:
    if (ctx->pc == 0x1DC2BCu) {
        ctx->pc = 0x1DC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2B8u;
        // 0x1dc2bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2C0u;
        goto label_1dc2c0;
    }
    ctx->pc = 0x1DC2B8u;
    {
        const bool branch_taken_0x1dc2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2B8u;
        // 0x1dc2bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2b8) {
            ctx->pc = 0x1DC2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC2C0u;
label_1dc2c0:
    // 0x1dc2c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2c4:
    // 0x1dc2c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1dc2c8:
    if (ctx->pc == 0x1DC2C8u) {
        ctx->pc = 0x1DC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2C4u;
        // 0x1dc2c8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2CCu;
        goto label_1dc2cc;
    }
    ctx->pc = 0x1DC2C4u;
    {
        const bool branch_taken_0x1dc2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2C4u;
        // 0x1dc2c8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2c4) {
            ctx->pc = 0x1DC2ECu;
            goto label_1dc2ec;
        }
    }
    ctx->pc = 0x1DC2CCu;
label_1dc2cc:
    // 0x1dc2cc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1dc2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1dc2d0:
    // 0x1dc2d0: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dc2d4:
    // 0x1dc2d4: 0x8ca4e668  lw          $a0, -0x1998($a1)
    ctx->pc = 0x1dc2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960744)));
label_1dc2d8:
    // 0x1dc2d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dc2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2dc:
    // 0x1dc2dc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dc2e0:
    // 0x1dc2e0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1dc2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_1dc2e4:
    // 0x1dc2e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1dc2e8:
    if (ctx->pc == 0x1DC2E8u) {
        ctx->pc = 0x1DC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2E4u;
        // 0x1dc2e8: 0xacb1e668  sw          $s1, -0x1998($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960744), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2ECu;
        goto label_1dc2ec;
    }
    ctx->pc = 0x1DC2E4u;
    {
        const bool branch_taken_0x1dc2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2E4u;
        // 0x1dc2e8: 0xacb1e668  sw          $s1, -0x1998($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960744), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2e4) {
            ctx->pc = 0x1DC338u;
            goto label_1dc338;
        }
    }
    ctx->pc = 0x1DC2ECu;
label_1dc2ec:
    // 0x1dc2ec: 0xc076d8e  jal         func_1DB638
label_1dc2f0:
    if (ctx->pc == 0x1DC2F0u) {
        ctx->pc = 0x1DC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2ECu;
        // 0x1dc2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2F4u;
        goto label_1dc2f4;
    }
    ctx->pc = 0x1DC2ECu;
    SET_GPR_U32(ctx, 31, 0x1DC2F4u);
    ctx->pc = 0x1DC2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC2ECu;
    // 0x1dc2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB638u, 0x1DC2ECu, 0x1DC2F4u)) {
        return;
    }
    ctx->pc = 0x1DC2F4u;
label_1dc2f4:
    // 0x1dc2f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc2f8:
    if (ctx->pc == 0x1DC2F8u) {
        ctx->pc = 0x1DC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2F4u;
        // 0x1dc2f8: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2FCu;
        goto label_1dc2fc;
    }
    ctx->pc = 0x1DC2F4u;
    {
        const bool branch_taken_0x1dc2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2F4u;
        // 0x1dc2f8: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2f4) {
            ctx->pc = 0x1DC308u;
            goto label_1dc308;
        }
    }
    ctx->pc = 0x1DC2FCu;
label_1dc2fc:
    // 0x1dc2fc: 0xc077e8c  jal         func_1DFA30
label_1dc300:
    if (ctx->pc == 0x1DC300u) {
        ctx->pc = 0x1DC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2FCu;
        // 0x1dc300: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC304u;
        goto label_1dc304;
    }
    ctx->pc = 0x1DC2FCu;
    SET_GPR_U32(ctx, 31, 0x1DC304u);
    ctx->pc = 0x1DC300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC2FCu;
    // 0x1dc300: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFA30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFA30u, 0x1DC2FCu, 0x1DC304u)) {
        return;
    }
    ctx->pc = 0x1DC304u;
label_1dc304:
    // 0x1dc304: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dc304u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dc308:
    // 0x1dc308: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dc308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dc30c:
    // 0x1dc30c: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dc310:
    // 0x1dc310: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1dc314:
    // 0x1dc314: 0x40f809  jalr        $v0
label_1dc318:
    if (ctx->pc == 0x1DC318u) {
        ctx->pc = 0x1DC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC314u;
        // 0x1dc318: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC31Cu;
        goto label_1dc31c;
    }
    ctx->pc = 0x1DC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC31Cu);
        ctx->pc = 0x1DC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC314u;
        // 0x1dc318: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC314u, 0x1DC31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC31Cu;
label_1dc31c:
    // 0x1dc31c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1dc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1dc320:
    // 0x1dc320: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc324:
    // 0x1dc324: 0x8c65e640  lw          $a1, -0x19C0($v1)
    ctx->pc = 0x1dc324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960704)));
label_1dc328:
    // 0x1dc328: 0x40f809  jalr        $v0
label_1dc32c:
    if (ctx->pc == 0x1DC32Cu) {
        ctx->pc = 0x1DC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC328u;
        // 0x1dc32c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC330u;
        goto label_1dc330;
    }
    ctx->pc = 0x1DC328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC330u);
        ctx->pc = 0x1DC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC328u;
        // 0x1dc32c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC328u, 0x1DC330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC330u;
label_1dc330:
    // 0x1dc330: 0xc0773d8  jal         func_1DCF60
label_1dc334:
    if (ctx->pc == 0x1DC334u) {
        ctx->pc = 0x1DC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC330u;
        // 0x1dc334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC338u;
        goto label_1dc338;
    }
    ctx->pc = 0x1DC330u;
    SET_GPR_U32(ctx, 31, 0x1DC338u);
    ctx->pc = 0x1DC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC330u;
    // 0x1dc334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCF60u, 0x1DC330u, 0x1DC338u)) {
        return;
    }
    ctx->pc = 0x1DC338u;
label_1dc338:
    // 0x1dc338: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dc338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc33c:
    // 0x1dc33c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dc33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc340:
    // 0x1dc340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc344:
    // 0x1dc344: 0x3e00008  jr          $ra
label_1dc348:
    if (ctx->pc == 0x1DC348u) {
        ctx->pc = 0x1DC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC344u;
        // 0x1dc348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC34Cu;
        goto label_1dc34c;
    }
    ctx->pc = 0x1DC344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC344u;
        // 0x1dc348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC34Cu;
label_1dc34c:
    // 0x1dc34c: 0x0  nop
    ctx->pc = 0x1dc34cu;
    // NOP
    ctx->pc = 0x1dc350u;
}

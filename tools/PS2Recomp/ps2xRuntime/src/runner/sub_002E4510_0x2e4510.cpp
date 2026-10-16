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

// Function: sub_002E4510
// Address: 0x2e4510 - 0x2e4898
void sub_002E4510_0x2e4510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4510_0x2e4510");
#endif

    switch (ctx->pc) {
        case 0x2e4580u: goto label_2e4580;
        case 0x2e4598u: goto label_2e4598;
        case 0x2e45a8u: goto label_2e45a8;
        case 0x2e45c4u: goto label_2e45c4;
        case 0x2e45d4u: goto label_2e45d4;
        case 0x2e45f0u: goto label_2e45f0;
        case 0x2e4638u: goto label_2e4638;
        case 0x2e46a0u: goto label_2e46a0;
        case 0x2e46d0u: goto label_2e46d0;
        case 0x2e4738u: goto label_2e4738;
        case 0x2e478cu: goto label_2e478c;
        case 0x2e47ecu: goto label_2e47ec;
        case 0x2e47fcu: goto label_2e47fc;
        case 0x2e4820u: goto label_2e4820;
        default: break;
    }

    ctx->pc = 0x2e4510u;

label_2e4510:
    // 0x2e4510: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e4510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2e4514: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2e4514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2e4518: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2e4518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2e451c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2e451cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4520: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2e4520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2e4524: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2e4524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2e4528: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2e4528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e452c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e4530: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2e4530u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4534: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2e4534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2e4538: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2e4538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e453c: 0xafaa0058  sw          $t2, 0x58($sp)
    ctx->pc = 0x2e453cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 10));
    // 0x2e4540: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2e4540u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4544: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2e4544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2e4548: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2e4548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2e454c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2e454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2e4550: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e4550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e4554: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2e4554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2e4558: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x2e4558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x2e455c: 0x124a00bf  beq         $s2, $t2, . + 4 + (0xBF << 2)
    ctx->pc = 0x2E455Cu;
    {
        const bool branch_taken_0x2e455c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 10));
        ctx->pc = 0x2E4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E455Cu;
        // 0x2e4560: 0x8fb30100  lw          $s3, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e455c) {
            ctx->pc = 0x2E485Cu;
            goto label_2e485c;
        }
    }
    ctx->pc = 0x2E4564u;
    // 0x2e4564: 0x1640004a  bnez        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E4564u;
    {
        const bool branch_taken_0x2e4564 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4564u;
        // 0x2e4568: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4564) {
            ctx->pc = 0x2E4690u;
            goto label_2e4690;
        }
    }
    ctx->pc = 0x2E456Cu;
    // 0x2e456c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e456cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4570: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e4570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e4574: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e4574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4578: 0xc0b7720  jal         func_2DDC80
    ctx->pc = 0x2E4578u;
    SET_GPR_U32(ctx, 31, 0x2E4580u);
    ctx->pc = 0x2E457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4578u;
    // 0x2e457c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2E4578u, 0x2E4580u)) {
        return;
    }
    ctx->pc = 0x2E4580u;
label_2e4580:
    // 0x2e4580: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2e4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e4584: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2e4584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e4588: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e4588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e458c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e458cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4590: 0xc0b7720  jal         func_2DDC80
    ctx->pc = 0x2E4590u;
    SET_GPR_U32(ctx, 31, 0x2E4598u);
    ctx->pc = 0x2E4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4590u;
    // 0x2e4594: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2E4590u, 0x2E4598u)) {
        return;
    }
    ctx->pc = 0x2E4598u;
label_2e4598:
    // 0x2e4598: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e4598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e459c: 0xafb60030  sw          $s6, 0x30($sp)
    ctx->pc = 0x2e459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 22));
    // 0x2e45a0: 0x245483e8  addiu       $s4, $v0, -0x7C18
    ctx->pc = 0x2e45a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935528));
    // 0x2e45a4: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2e45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2e45a8:
    // 0x2e45a8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2e45a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e45ac: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2e45acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e45b0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2e45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e45b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E45B4u;
    {
        const bool branch_taken_0x2e45b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45B4u;
        // 0x2e45b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45b4) {
            ctx->pc = 0x2E4618u;
            goto label_2e4618;
        }
    }
    ctx->pc = 0x2E45BCu;
    // 0x2e45bc: 0xc0b76b0  jal         func_2DDAC0
    ctx->pc = 0x2E45BCu;
    SET_GPR_U32(ctx, 31, 0x2E45C4u);
    ctx->pc = 0x2E45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45BCu;
    // 0x2e45c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDAC0u, 0x2E45BCu, 0x2E45C4u)) {
        return;
    }
    ctx->pc = 0x2E45C4u;
label_2e45c4:
    // 0x2e45c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E45C4u;
    {
        const bool branch_taken_0x2e45c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45C4u;
        // 0x2e45c8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45c4) {
            ctx->pc = 0x2E4618u;
            goto label_2e4618;
        }
    }
    ctx->pc = 0x2E45CCu;
    // 0x2e45cc: 0xc0b76b0  jal         func_2DDAC0
    ctx->pc = 0x2E45CCu;
    SET_GPR_U32(ctx, 31, 0x2E45D4u);
    ctx->pc = 0x2E45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45CCu;
    // 0x2e45d0: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDAC0u, 0x2E45CCu, 0x2E45D4u)) {
        return;
    }
    ctx->pc = 0x2E45D4u;
label_2e45d4:
    // 0x2e45d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E45D4u;
    {
        const bool branch_taken_0x2e45d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45D4u;
        // 0x2e45d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45d4) {
            ctx->pc = 0x2E461Cu;
            goto label_2e461c;
        }
    }
    ctx->pc = 0x2E45DCu;
    // 0x2e45dc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2e45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e45e0: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2E45E0u;
    {
        const bool branch_taken_0x2e45e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45E0u;
        // 0x2e45e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45e0) {
            ctx->pc = 0x2E4860u;
            goto label_2e4860;
        }
    }
    ctx->pc = 0x2E45E8u;
    // 0x2e45e8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e45e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45ec: 0x2603003c  addiu       $v1, $s0, 0x3C
    ctx->pc = 0x2e45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_2e45f0:
    // 0x2e45f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e45f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e45f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e45f8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2e45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e45fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e4600: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2e4600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e4604: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2e4604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4608: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E4608u;
    {
        const bool branch_taken_0x2e4608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4608u;
        // 0x2e460c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4608) {
            ctx->pc = 0x2E45F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e45f0;
        }
    }
    ctx->pc = 0x2E4610u;
    // 0x2e4610: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2E4610u;
    {
        const bool branch_taken_0x2e4610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4610u;
        // 0x2e4614: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4610) {
            ctx->pc = 0x2E4860u;
            goto label_2e4860;
        }
    }
    ctx->pc = 0x2E4618u;
label_2e4618:
    // 0x2e4618: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e4618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e461c:
    // 0x2e461c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2e461cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e4620: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E4620u;
    {
        const bool branch_taken_0x2e4620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4620u;
        // 0x2e4624: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4620) {
            ctx->pc = 0x2E45A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e45a8;
        }
    }
    ctx->pc = 0x2E4628u;
    // 0x2e4628: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e4628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e462c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e462cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4630: 0x24445518  addiu       $a0, $v0, 0x5518
    ctx->pc = 0x2e4630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
    // 0x2e4634: 0x0  nop
    ctx->pc = 0x2e4634u;
    // NOP
label_2e4638:
    // 0x2e4638: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e463c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2e463cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4640: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4644: 0x54a2000e  bnel        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4644u;
    {
        const bool branch_taken_0x2e4644 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e4644) {
            ctx->pc = 0x2E4648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4644u;
            // 0x2e4648: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4680u;
            goto label_2e4680;
        }
    }
    ctx->pc = 0x2E464Cu;
    // 0x2e464c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e4650: 0x56e2000b  bnel        $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4650u;
    {
        const bool branch_taken_0x2e4650 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e4650) {
            ctx->pc = 0x2E4654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4650u;
            // 0x2e4654: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4680u;
            goto label_2e4680;
        }
    }
    ctx->pc = 0x2E4658u;
    // 0x2e4658: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2e4658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e465c: 0x50560006  beql        $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E465Cu;
    {
        const bool branch_taken_0x2e465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2e465c) {
            ctx->pc = 0x2E4660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E465Cu;
            // 0x2e4660: 0xafc40000  sw          $a0, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4678u;
            goto label_2e4678;
        }
    }
    ctx->pc = 0x2E4664u;
    // 0x2e4664: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e4664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e466c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E466Cu;
    {
        const bool branch_taken_0x2e466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E466Cu;
        // 0x2e4670: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e466c) {
            ctx->pc = 0x2E4680u;
            goto label_2e4680;
        }
    }
    ctx->pc = 0x2E4674u;
    // 0x2e4674: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x2e4674u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_2e4678:
    // 0x2e4678: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2E4678u;
    {
        const bool branch_taken_0x2e4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4678u;
        // 0x2e467c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4678) {
            ctx->pc = 0x2E4860u;
            goto label_2e4860;
        }
    }
    ctx->pc = 0x2E4680u;
label_2e4680:
    // 0x2e4680: 0x2e820033  sltiu       $v0, $s4, 0x33
    ctx->pc = 0x2e4680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x2e4684: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E4684u;
    {
        const bool branch_taken_0x2e4684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4684u;
        // 0x2e4688: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4684) {
            ctx->pc = 0x2E4638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4638;
        }
    }
    ctx->pc = 0x2E468Cu;
    // 0x2e468c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2e4690:
    // 0x2e4690: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2e4690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e4694: 0x24505518  addiu       $s0, $v0, 0x5518
    ctx->pc = 0x2e4694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
    // 0x2e4698: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x2e4698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2e469c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e469cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e46a0:
    // 0x2e46a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e46a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e46a8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2e46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e46ac: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E46ACu;
    {
        const bool branch_taken_0x2e46ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46ACu;
        // 0x2e46b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46ac) {
            ctx->pc = 0x2E46F0u;
            goto label_2e46f0;
        }
    }
    ctx->pc = 0x2E46B4u;
    // 0x2e46b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e46b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e46b8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2E46B8u;
    {
        const bool branch_taken_0x2e46b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46B8u;
        // 0x2e46bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46b8) {
            ctx->pc = 0x2E46F0u;
            goto label_2e46f0;
        }
    }
    ctx->pc = 0x2E46C0u;
    // 0x2e46c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e46c4: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E46C4u;
    {
        const bool branch_taken_0x2e46c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e46c4) {
            ctx->pc = 0x2E46C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E46C4u;
            // 0x2e46c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E46F0u;
            goto label_2e46f0;
        }
    }
    ctx->pc = 0x2E46CCu;
    // 0x2e46cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e46d0:
    // 0x2e46d0: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x2e46d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e46d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E46D4u;
    {
        const bool branch_taken_0x2e46d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46D4u;
        // 0x2e46d8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46d4) {
            ctx->pc = 0x2E46F0u;
            goto label_2e46f0;
        }
    }
    ctx->pc = 0x2E46DCu;
    // 0x2e46dc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2e46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2e46e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e46e4: 0x5470fffa  bnel        $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E46E4u;
    {
        const bool branch_taken_0x2e46e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e46e4) {
            ctx->pc = 0x2E46E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E46E4u;
            // 0x2e46e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E46D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e46d0;
        }
    }
    ctx->pc = 0x2E46ECu;
    // 0x2e46ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e46ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e46f0:
    // 0x2e46f0: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E46F0u;
    {
        const bool branch_taken_0x2e46f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e46f0) {
            ctx->pc = 0x2E46F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E46F0u;
            // 0x2e46f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E479Cu;
            goto label_2e479c;
        }
    }
    ctx->pc = 0x2E46F8u;
    // 0x2e46f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e46fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e4700: 0x16e20010  bne         $s7, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E4700u;
    {
        const bool branch_taken_0x2e4700 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4700u;
        // 0x2e4704: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4700) {
            ctx->pc = 0x2E4744u;
            goto label_2e4744;
        }
    }
    ctx->pc = 0x2E4708u;
    // 0x2e4708: 0x50b60006  beql        $a1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4708u;
    {
        const bool branch_taken_0x2e4708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        if (branch_taken_0x2e4708) {
            ctx->pc = 0x2E470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4708u;
            // 0x2e470c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4724u;
            goto label_2e4724;
        }
    }
    ctx->pc = 0x2E4710u;
    // 0x2e4710: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4714: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4718: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E4718u;
    {
        const bool branch_taken_0x2e4718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4718) {
            ctx->pc = 0x2E4744u;
            goto label_2e4744;
        }
    }
    ctx->pc = 0x2E4720u;
    // 0x2e4720: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e4720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2e4724:
    // 0x2e4724: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x2e4724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e4728: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e4728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e472c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e472cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4730: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E4730u;
    SET_GPR_U32(ctx, 31, 0x2E4738u);
    ctx->pc = 0x2E4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4730u;
    // 0x2e4734: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E4730u, 0x2E4738u)) {
        return;
    }
    ctx->pc = 0x2E4738u;
label_2e4738:
    // 0x2e4738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e473c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2E473Cu;
    {
        const bool branch_taken_0x2e473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E473Cu;
        // 0x2e4740: 0x252100b  movn        $v0, $s2, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e473c) {
            ctx->pc = 0x2E4860u;
            goto label_2e4860;
        }
    }
    ctx->pc = 0x2E4744u;
label_2e4744:
    // 0x2e4744: 0x12530045  beq         $s2, $s3, . + 4 + (0x45 << 2)
    ctx->pc = 0x2E4744u;
    {
        const bool branch_taken_0x2e4744 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4744u;
        // 0x2e4748: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4744) {
            ctx->pc = 0x2E485Cu;
            goto label_2e485c;
        }
    }
    ctx->pc = 0x2E474Cu;
    // 0x2e474c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e4750: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e4750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e4754: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2e4754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e4758: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x2e4758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e475c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4760: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e4760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4764: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2e4764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2e4768: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2e4768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e476c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4770: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x2e4770u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e4774: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2e4774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e4778: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2e4778u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e477c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2e477cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4780: 0x2c2280b  movn        $a1, $s6, $v0
    ctx->pc = 0x2e4780u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22));
    // 0x2e4784: 0xc0b9144  jal         func_2E4510
    ctx->pc = 0x2E4784u;
    SET_GPR_U32(ctx, 31, 0x2E478Cu);
    ctx->pc = 0x2E4788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4784u;
    // 0x2e4788: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4510u;
    goto label_2e4510;
    ctx->pc = 0x2E478Cu;
label_2e478c:
    // 0x2e478c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2e478cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2e4790: 0x42980b  movn        $s3, $v0, $v0
    ctx->pc = 0x2e4790u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
    // 0x2e4794: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e4794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2e4798: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e4798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e479c:
    // 0x2e479c: 0x2e820033  sltiu       $v0, $s4, 0x33
    ctx->pc = 0x2e479cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x2e47a0: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2E47A0u;
    {
        const bool branch_taken_0x2e47a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47A0u;
        // 0x2e47a4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47a0) {
            ctx->pc = 0x2E46A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e46a0;
        }
    }
    ctx->pc = 0x2E47A8u;
    // 0x2e47a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e47ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e47acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e47b0: 0x1262002b  beq         $s3, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E47B0u;
    {
        const bool branch_taken_0x2e47b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47B0u;
        // 0x2e47b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47b0) {
            ctx->pc = 0x2E4860u;
            goto label_2e4860;
        }
    }
    ctx->pc = 0x2E47B8u;
    // 0x2e47b8: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E47B8u;
    {
        const bool branch_taken_0x2e47b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47B8u;
        // 0x2e47bc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47b8) {
            ctx->pc = 0x2E4860u;
            goto label_2e4860;
        }
    }
    ctx->pc = 0x2E47C0u;
    // 0x2e47c0: 0x8f838c4c  lw          $v1, -0x73B4($gp)
    ctx->pc = 0x2e47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
    // 0x2e47c4: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2e47c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e47c8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e47cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e47ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e47d0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2e47d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e47d4: 0x244283e8  addiu       $v0, $v0, -0x7C18
    ctx->pc = 0x2e47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935528));
    // 0x2e47d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e47d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e47dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e47dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e47e0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2e47e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e47e4: 0xc0b7720  jal         func_2DDC80
    ctx->pc = 0x2E47E4u;
    SET_GPR_U32(ctx, 31, 0x2E47ECu);
    ctx->pc = 0x2E47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47E4u;
    // 0x2e47e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2E47E4u, 0x2E47ECu)) {
        return;
    }
    ctx->pc = 0x2E47ECu;
label_2e47ec:
    // 0x2e47ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e47ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e47f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e47f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47f4: 0xc0b7720  jal         func_2DDC80
    ctx->pc = 0x2E47F4u;
    SET_GPR_U32(ctx, 31, 0x2E47FCu);
    ctx->pc = 0x2E47F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47F4u;
    // 0x2e47f8: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2E47F4u, 0x2E47FCu)) {
        return;
    }
    ctx->pc = 0x2E47FCu;
label_2e47fc:
    // 0x2e47fc: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2e47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e4800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4804: 0xae16001c  sw          $s6, 0x1C($s0)
    ctx->pc = 0x2e4804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
    // 0x2e4808: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e4808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e480c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2E480Cu;
    {
        const bool branch_taken_0x2e480c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E480Cu;
        // 0x2e4810: 0xae130038  sw          $s3, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e480c) {
            ctx->pc = 0x2E483Cu;
            goto label_2e483c;
        }
    }
    ctx->pc = 0x2E4814u;
    // 0x2e4814: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x2e4814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x2e4818: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e4818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e481c: 0x0  nop
    ctx->pc = 0x2e481cu;
    // NOP
label_2e4820:
    // 0x2e4820: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e4820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e4824: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e4824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e4828: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2e4828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2e482c: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x2e482cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2e4830: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e4830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e4834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E4834u;
    {
        const bool branch_taken_0x2e4834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4834u;
        // 0x2e4838: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4834) {
            ctx->pc = 0x2E4820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4820;
        }
    }
    ctx->pc = 0x2E483Cu;
label_2e483c:
    // 0x2e483c: 0x8f828c4c  lw          $v0, -0x73B4($gp)
    ctx->pc = 0x2e483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
    // 0x2e4840: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e4840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e4844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e4844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e4848: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4848u;
    {
        const bool branch_taken_0x2e4848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4848u;
        // 0x2e484c: 0xaf828c4c  sw          $v0, -0x73B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4848) {
            ctx->pc = 0x2E4854u;
            goto label_2e4854;
        }
    }
    ctx->pc = 0x2E4850u;
    // 0x2e4850: 0xaf808c4c  sw          $zero, -0x73B4($gp)
    ctx->pc = 0x2e4850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937676), GPR_U32(ctx, 0));
label_2e4854:
    // 0x2e4854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4854u;
    {
        const bool branch_taken_0x2e4854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4854u;
        // 0x2e4858: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4854) {
            ctx->pc = 0x2E4860u;
            goto label_2e4860;
        }
    }
    ctx->pc = 0x2E485Cu;
label_2e485c:
    // 0x2e485c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e485cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4860:
    // 0x2e4860: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2e4860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e4864: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2e4864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4868: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2e4868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e486c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2e486cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e4870: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2e4870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4874: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2e4874u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e4878: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2e4878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e487c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e487cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e4880: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2e4880u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4884: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e4884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4888: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4888u;
        // 0x2e488c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4890u;
    // 0x2e4890: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2e4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4894: 0x0  nop
    ctx->pc = 0x2e4894u;
    // NOP
    ctx->pc = 0x2e4898u;
}

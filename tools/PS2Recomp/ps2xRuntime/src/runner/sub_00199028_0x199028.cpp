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

// Function: sub_00199028
// Address: 0x199028 - 0x199188
void sub_00199028_0x199028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199028_0x199028");
#endif

    switch (ctx->pc) {
        case 0x19905cu: goto label_19905c;
        case 0x199074u: goto label_199074;
        case 0x19908cu: goto label_19908c;
        case 0x1990b4u: goto label_1990b4;
        case 0x1990c0u: goto label_1990c0;
        case 0x1990dcu: goto label_1990dc;
        case 0x1990f8u: goto label_1990f8;
        case 0x199114u: goto label_199114;
        case 0x199140u: goto label_199140;
        case 0x19914cu: goto label_19914c;
        default: break;
    }

    ctx->pc = 0x199028u;

    // 0x199028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19902c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x199030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199034: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199038: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x199038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19903c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19903cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199040: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x199040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x199044: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x199044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199048: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x199048u;
    {
        const bool branch_taken_0x199048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199048u;
        // 0x19904c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199048) {
            ctx->pc = 0x19915Cu;
            goto label_19915c;
        }
    }
    ctx->pc = 0x199050u;
    // 0x199050: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x199050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x199054: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x199054u;
    SET_GPR_U32(ctx, 31, 0x19905Cu);
    ctx->pc = 0x199058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199054u;
    // 0x199058: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x199054u, 0x19905Cu)) {
        return;
    }
    ctx->pc = 0x19905Cu;
label_19905c:
    // 0x19905c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x19905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x199060: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x199060u;
    {
        const bool branch_taken_0x199060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x199064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199060u;
        // 0x199064: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199060) {
            ctx->pc = 0x1990D4u;
            goto label_1990d4;
        }
    }
    ctx->pc = 0x199068u;
    // 0x199068: 0x96300020  lhu         $s0, 0x20($s1)
    ctx->pc = 0x199068u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19906c: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x19906Cu;
    SET_GPR_U32(ctx, 31, 0x199074u);
    ctx->pc = 0x199070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19906Cu;
    // 0x199070: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x19906Cu, 0x199074u)) {
        return;
    }
    ctx->pc = 0x199074u;
label_199074:
    // 0x199074: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x199074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x199078: 0x203802b  sltu        $s0, $s0, $v1
    ctx->pc = 0x199078u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19907c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19907Cu;
    {
        const bool branch_taken_0x19907c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19907Cu;
        // 0x199080: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19907c) {
            ctx->pc = 0x1990D4u;
            goto label_1990d4;
        }
    }
    ctx->pc = 0x199084u;
    // 0x199084: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x199084u;
    SET_GPR_U32(ctx, 31, 0x19908Cu);
    ctx->pc = 0x199088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199084u;
    // 0x199088: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x199084u, 0x19908Cu)) {
        return;
    }
    ctx->pc = 0x19908Cu;
label_19908c:
    // 0x19908c: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x19908cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x199090: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x199090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x199094: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x199094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199098: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19909c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1990a0: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1990A0u;
    {
        const bool branch_taken_0x1990a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1990A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990A0u;
        // 0x1990a4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990a0) {
            ctx->pc = 0x1990D4u;
            goto label_1990d4;
        }
    }
    ctx->pc = 0x1990A8u;
    // 0x1990a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1990a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1990ac: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x1990ACu;
    SET_GPR_U32(ctx, 31, 0x1990B4u);
    ctx->pc = 0x1990B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990ACu;
    // 0x1990b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x1990ACu, 0x1990B4u)) {
        return;
    }
    ctx->pc = 0x1990B4u;
label_1990b4:
    // 0x1990b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1990b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1990b8: 0xc0ab20e  jal         func_2AC838
    ctx->pc = 0x1990B8u;
    SET_GPR_U32(ctx, 31, 0x1990C0u);
    ctx->pc = 0x1990BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990B8u;
    // 0x1990bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AC838u, 0x1990B8u, 0x1990C0u)) {
        return;
    }
    ctx->pc = 0x1990C0u;
label_1990c0:
    // 0x1990c0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1990c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1990c4: 0x8c628bcc  lw          $v0, -0x7434($v1)
    ctx->pc = 0x1990c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338BCCu));
    // 0x1990c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1990cc: 0xac628bcc  sw          $v0, -0x7434($v1)
    ctx->pc = 0x1990ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338BCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338BCCu, _value); } while (0);
    // 0x1990d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1990d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1990d4:
    // 0x1990d4: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x1990D4u;
    SET_GPR_U32(ctx, 31, 0x1990DCu);
    ctx->pc = 0x1990D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990D4u;
    // 0x1990d8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x1990D4u, 0x1990DCu)) {
        return;
    }
    ctx->pc = 0x1990DCu;
label_1990dc:
    // 0x1990dc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1990e0: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990E0u;
        // 0x1990e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x199160u;
            goto label_199160;
        }
    }
    ctx->pc = 0x1990E8u;
    // 0x1990e8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1990ec: 0x96300020  lhu         $s0, 0x20($s1)
    ctx->pc = 0x1990ecu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1990f0: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x1990F0u;
    SET_GPR_U32(ctx, 31, 0x1990F8u);
    ctx->pc = 0x1990F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990F0u;
    // 0x1990f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x1990F0u, 0x1990F8u)) {
        return;
    }
    ctx->pc = 0x1990F8u;
label_1990f8:
    // 0x1990f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1990f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1990fc: 0x203802b  sltu        $s0, $s0, $v1
    ctx->pc = 0x1990fcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x199100: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x199100u;
    {
        const bool branch_taken_0x199100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199100u;
        // 0x199104: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199100) {
            ctx->pc = 0x199160u;
            goto label_199160;
        }
    }
    ctx->pc = 0x199108u;
    // 0x199108: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x19910c: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x19910Cu;
    SET_GPR_U32(ctx, 31, 0x199114u);
    ctx->pc = 0x199110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19910Cu;
    // 0x199110: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x19910Cu, 0x199114u)) {
        return;
    }
    ctx->pc = 0x199114u;
label_199114:
    // 0x199114: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x199114u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x199118: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x19911c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19911cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199124: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199128: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x199128u;
    {
        const bool branch_taken_0x199128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x19912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199128u;
        // 0x19912c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199128) {
            ctx->pc = 0x199160u;
            goto label_199160;
        }
    }
    ctx->pc = 0x199130u;
    // 0x199130: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x199130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x199134: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x199134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199138: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x199138u;
    SET_GPR_U32(ctx, 31, 0x199140u);
    ctx->pc = 0x19913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199138u;
    // 0x19913c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x199138u, 0x199140u)) {
        return;
    }
    ctx->pc = 0x199140u;
label_199140:
    // 0x199140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199144: 0xc0ab20e  jal         func_2AC838
    ctx->pc = 0x199144u;
    SET_GPR_U32(ctx, 31, 0x19914Cu);
    ctx->pc = 0x199148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199144u;
    // 0x199148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AC838u, 0x199144u, 0x19914Cu)) {
        return;
    }
    ctx->pc = 0x19914Cu;
label_19914c:
    // 0x19914c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x19914cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x199150: 0x8c628bcc  lw          $v0, -0x7434($v1)
    ctx->pc = 0x199150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338BCCu));
    // 0x199154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199158: 0xac628bcc  sw          $v0, -0x7434($v1)
    ctx->pc = 0x199158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338BCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338BCCu, _value); } while (0);
label_19915c:
    // 0x19915c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x19915cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_199160:
    // 0x199160: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x199160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199164: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x199164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19916c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19916cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199174: 0x3e00008  jr          $ra
    ctx->pc = 0x199174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199174u;
        // 0x199178: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19917Cu;
    // 0x19917c: 0x0  nop
    ctx->pc = 0x19917cu;
    // NOP
    // 0x199180: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x199180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x199184: 0x0  nop
    ctx->pc = 0x199184u;
    // NOP
    ctx->pc = 0x199188u;
}

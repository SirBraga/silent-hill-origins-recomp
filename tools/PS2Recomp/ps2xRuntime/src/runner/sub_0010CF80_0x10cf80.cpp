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

// Function: sub_0010CF80
// Address: 0x10cf80 - 0x10d0a8
void sub_0010CF80_0x10cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF80_0x10cf80");
#endif

    switch (ctx->pc) {
        case 0x10cfb8u: goto label_10cfb8;
        case 0x10d01cu: goto label_10d01c;
        case 0x10d060u: goto label_10d060;
        case 0x10d06cu: goto label_10d06c;
        default: break;
    }

    ctx->pc = 0x10cf80u;

    // 0x10cf80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10cf84: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x10cf88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x10cf8c: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x10cf8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10cf90: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x10cf94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf98: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x10cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x10cf9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10cf9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfa0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x10cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x10cfa4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x10cfa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cfa8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x10cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x10cfac: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x10cfacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x10cfb0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x10cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x10cfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10cfb8:
    // 0x10cfb8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x10cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10cfbc: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x10CFBCu;
    {
        const bool branch_taken_0x10cfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cfbc) {
            ctx->pc = 0x10CFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFBCu;
            // 0x10cfc0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D074u;
            goto label_10d074;
        }
    }
    ctx->pc = 0x10CFC4u;
    // 0x10cfc4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10cfc8: 0x5454002a  bnel        $v0, $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x10CFC8u;
    {
        const bool branch_taken_0x10cfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x10cfc8) {
            ctx->pc = 0x10CFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFC8u;
            // 0x10cfcc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D074u;
            goto label_10d074;
        }
    }
    ctx->pc = 0x10CFD0u;
    // 0x10cfd0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x10cfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cfd4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x10CFD4u;
    {
        const bool branch_taken_0x10cfd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFD4u;
        // 0x10cfd8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfd4) {
            ctx->pc = 0x10D070u;
            goto label_10d070;
        }
    }
    ctx->pc = 0x10CFDCu;
    // 0x10cfdc: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x10cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x10cfe0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x10CFE0u;
    {
        const bool branch_taken_0x10cfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cfe0) {
            ctx->pc = 0x10CFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFE0u;
            // 0x10cfe4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D074u;
            goto label_10d074;
        }
    }
    ctx->pc = 0x10CFE8u;
    // 0x10cfe8: 0x8ec282f4  lw          $v0, -0x7D0C($s6)
    ctx->pc = 0x10cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935284)));
    // 0x10cfec: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x10CFECu;
    {
        const bool branch_taken_0x10cfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cfec) {
            ctx->pc = 0x10CFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFECu;
            // 0x10cff0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D074u;
            goto label_10d074;
        }
    }
    ctx->pc = 0x10CFF4u;
    // 0x10cff4: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x10cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x10cff8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10CFF8u;
    {
        const bool branch_taken_0x10cff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cff8) {
            ctx->pc = 0x10CFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFF8u;
            // 0x10cffc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D028u;
            goto label_10d028;
        }
    }
    ctx->pc = 0x10D000u;
    // 0x10d000: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x10d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x10d004: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x10d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x10d008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D008u;
    {
        const bool branch_taken_0x10d008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D008u;
        // 0x10d00c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d008) {
            ctx->pc = 0x10D024u;
            goto label_10d024;
        }
    }
    ctx->pc = 0x10D010u;
    // 0x10d010: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10d010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d014: 0xc0b678e  jal         func_2D9E38
    ctx->pc = 0x10D014u;
    SET_GPR_U32(ctx, 31, 0x10D01Cu);
    ctx->pc = 0x10D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D014u;
    // 0x10d018: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9E38u, 0x10D014u, 0x10D01Cu)) {
        return;
    }
    ctx->pc = 0x10D01Cu;
label_10d01c:
    // 0x10d01c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D01Cu;
    {
        const bool branch_taken_0x10d01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D01Cu;
        // 0x10d020: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d01c) {
            ctx->pc = 0x10D030u;
            goto label_10d030;
        }
    }
    ctx->pc = 0x10D024u;
label_10d024:
    // 0x10d024: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10d028:
    // 0x10d028: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x10d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x10d02c: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x10d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_10d030:
    // 0x10d030: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10d030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10d034: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d038: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x10d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d03c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x10d03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10d040: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x10d040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x10d044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d048: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10d04c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D04Cu;
    {
        const bool branch_taken_0x10d04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D04Cu;
        // 0x10d050: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d04c) {
            ctx->pc = 0x10D060u;
            goto label_10d060;
        }
    }
    ctx->pc = 0x10D054u;
    // 0x10d054: 0xc46c0058  lwc1        $f12, 0x58($v1)
    ctx->pc = 0x10d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d058: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D058u;
    SET_GPR_U32(ctx, 31, 0x10D060u);
    ctx->pc = 0x10D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D058u;
    // 0x10d05c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D058u, 0x10D060u)) {
        return;
    }
    ctx->pc = 0x10D060u;
label_10d060:
    // 0x10d060: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10d060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d064: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10D064u;
    SET_GPR_U32(ctx, 31, 0x10D06Cu);
    ctx->pc = 0x10D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D064u;
    // 0x10d068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10D064u, 0x10D06Cu)) {
        return;
    }
    ctx->pc = 0x10D06Cu;
label_10d06c:
    // 0x10d06c: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x10d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
label_10d070:
    // 0x10d070: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10d070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10d074:
    // 0x10d074: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x10d074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10d078: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x10D078u;
    {
        const bool branch_taken_0x10d078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D078u;
        // 0x10d07c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d078) {
            ctx->pc = 0x10CFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cfb8;
        }
    }
    ctx->pc = 0x10D080u;
    // 0x10d080: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x10d080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d084: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10d084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d088: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x10d088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d08c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10d08cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d090: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10d090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d094: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x10d094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d098: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x10d098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0A0u;
        // 0x10d0a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D0A8u;
}

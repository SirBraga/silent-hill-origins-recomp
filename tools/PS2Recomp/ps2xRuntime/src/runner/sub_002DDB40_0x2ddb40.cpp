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

// Function: sub_002DDB40
// Address: 0x2ddb40 - 0x2ddc80
void sub_002DDB40_0x2ddb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDB40_0x2ddb40");
#endif

    switch (ctx->pc) {
        case 0x2ddb64u: goto label_2ddb64;
        case 0x2ddb70u: goto label_2ddb70;
        case 0x2ddb84u: goto label_2ddb84;
        case 0x2ddb9cu: goto label_2ddb9c;
        default: break;
    }

    ctx->pc = 0x2ddb40u;

    // 0x2ddb40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ddb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ddb44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ddb48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ddb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ddb4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ddb4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ddb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ddb54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ddb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ddb58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddb5c: 0xc0b763e  jal         func_2DD8F8
    ctx->pc = 0x2DDB5Cu;
    SET_GPR_U32(ctx, 31, 0x2DDB64u);
    ctx->pc = 0x2DDB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB5Cu;
    // 0x2ddb60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD8F8u, 0x2DDB5Cu, 0x2DDB64u)) {
        return;
    }
    ctx->pc = 0x2DDB64u;
label_2ddb64:
    // 0x2ddb64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ddb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb68: 0xc0b751e  jal         func_2DD478
    ctx->pc = 0x2DDB68u;
    SET_GPR_U32(ctx, 31, 0x2DDB70u);
    ctx->pc = 0x2DDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB68u;
    // 0x2ddb6c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD478u, 0x2DDB68u, 0x2DDB70u)) {
        return;
    }
    ctx->pc = 0x2DDB70u;
label_2ddb70:
    // 0x2ddb70: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ddb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ddb74: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ddb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ddb78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb7c: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDB7Cu;
    SET_GPR_U32(ctx, 31, 0x2DDB84u);
    ctx->pc = 0x2DDB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB7Cu;
    // 0x2ddb80: 0x24a5f130  addiu       $a1, $a1, -0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDB7Cu, 0x2DDB84u)) {
        return;
    }
    ctx->pc = 0x2DDB84u;
label_2ddb84:
    // 0x2ddb84: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DDB84u;
    {
        const bool branch_taken_0x2ddb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb84) {
            ctx->pc = 0x2DDB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDB84u;
            // 0x2ddb88: 0x9243000d  lbu         $v1, 0xD($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDBA8u;
            goto label_2ddba8;
        }
    }
    ctx->pc = 0x2DDB8Cu;
    // 0x2ddb8c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ddb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ddb90: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ddb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ddb94: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDB94u;
    SET_GPR_U32(ctx, 31, 0x2DDB9Cu);
    ctx->pc = 0x2DDB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB94u;
    // 0x2ddb98: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDB94u, 0x2DDB9Cu)) {
        return;
    }
    ctx->pc = 0x2DDB9Cu;
label_2ddb9c:
    // 0x2ddb9c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DDB9Cu;
    {
        const bool branch_taken_0x2ddb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb9c) {
            ctx->pc = 0x2DDBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDB9Cu;
            // 0x2ddba0: 0x230001b  divu        $zero, $s1, $s0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDC28u;
            goto label_2ddc28;
        }
    }
    ctx->pc = 0x2DDBA4u;
    // 0x2ddba4: 0x9243000d  lbu         $v1, 0xD($s2)
    ctx->pc = 0x2ddba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
label_2ddba8:
    // 0x2ddba8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ddba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ddbac: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DDBACu;
    {
        const bool branch_taken_0x2ddbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ddbac) {
            ctx->pc = 0x2DDBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDBACu;
            // 0x2ddbb0: 0x230001b  divu        $zero, $s1, $s0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDC28u;
            goto label_2ddc28;
        }
    }
    ctx->pc = 0x2DDBB4u;
    // 0x2ddbb4: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDBB4u;
    {
        const bool branch_taken_0x2ddbb4 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x2DDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBB4u;
        // 0x2ddbb8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbb4) {
            ctx->pc = 0x2DDBCCu;
            goto label_2ddbcc;
        }
    }
    ctx->pc = 0x2DDBBCu;
    // 0x2ddbbc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2ddbbcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ddbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ddbc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDBC4u;
    {
        const bool branch_taken_0x2ddbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbc4) {
            ctx->pc = 0x2DDBE0u;
            goto label_2ddbe0;
        }
    }
    ctx->pc = 0x2DDBCCu;
label_2ddbcc:
    // 0x2ddbcc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2ddbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2ddbd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ddbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ddbd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ddbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddbd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ddbd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ddbdc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ddbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ddbe0:
    // 0x2ddbe0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDBE0u;
    {
        const bool branch_taken_0x2ddbe0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2DDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBE0u;
        // 0x2ddbe4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbe0) {
            ctx->pc = 0x2DDBF8u;
            goto label_2ddbf8;
        }
    }
    ctx->pc = 0x2DDBE8u;
    // 0x2ddbe8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2ddbe8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddbec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ddbecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ddbf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDBF0u;
    {
        const bool branch_taken_0x2ddbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbf0) {
            ctx->pc = 0x2DDC0Cu;
            goto label_2ddc0c;
        }
    }
    ctx->pc = 0x2DDBF8u;
label_2ddbf8:
    // 0x2ddbf8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2ddbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ddbfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ddbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ddc00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ddc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddc04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ddc04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ddc08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ddc08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ddc0c:
    // 0x2ddc0c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2ddc0cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2ddc10: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x2ddc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ddc14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ddc18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ddc18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ddc1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ddc1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ddc20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDC20u;
    {
        const bool branch_taken_0x2ddc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC20u;
        // 0x2ddc24: 0x92420018  lbu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc20) {
            ctx->pc = 0x2DDC3Cu;
            goto label_2ddc3c;
        }
    }
    ctx->pc = 0x2DDC28u;
label_2ddc28:
    // 0x2ddc28: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DDC28u;
    {
        const bool branch_taken_0x2ddc28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc28) {
            ctx->pc = 0x2DDC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDC28u;
            // 0x2ddc2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDC30u;
            goto label_2ddc30;
        }
    }
    ctx->pc = 0x2DDC30u;
label_2ddc30:
    // 0x2ddc30: 0x1012  mflo        $v0
    ctx->pc = 0x2ddc30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ddc34: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x2ddc34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ddc38: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2ddc38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_2ddc3c:
    // 0x2ddc3c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ddc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ddc40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDC40u;
    {
        const bool branch_taken_0x2ddc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC40u;
        // 0x2ddc44: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc40) {
            ctx->pc = 0x2DDC60u;
            goto label_2ddc60;
        }
    }
    ctx->pc = 0x2DDC48u;
    // 0x2ddc48: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x2ddc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x2ddc4c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2ddc4cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ddc50: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DDC50u;
    {
        const bool branch_taken_0x2ddc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc50) {
            ctx->pc = 0x2DDC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDC50u;
            // 0x2ddc54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDC58u;
            goto label_2ddc58;
        }
    }
    ctx->pc = 0x2DDC58u;
label_2ddc58:
    // 0x2ddc58: 0x1812  mflo        $v1
    ctx->pc = 0x2ddc58u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ddc5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ddc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ddc60:
    // 0x2ddc60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ddc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ddc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddc68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ddc68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddc6c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ddc6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddc70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddc74: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC74u;
        // 0x2ddc78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDC7Cu;
    // 0x2ddc7c: 0x0  nop
    ctx->pc = 0x2ddc7cu;
    // NOP
    ctx->pc = 0x2ddc80u;
}

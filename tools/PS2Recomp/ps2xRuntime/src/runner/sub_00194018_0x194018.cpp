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

// Function: sub_00194018
// Address: 0x194018 - 0x194330
void sub_00194018_0x194018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194018_0x194018");
#endif

    switch (ctx->pc) {
        case 0x19405cu: goto label_19405c;
        case 0x19407cu: goto label_19407c;
        case 0x19409cu: goto label_19409c;
        case 0x1940bcu: goto label_1940bc;
        case 0x1940dcu: goto label_1940dc;
        case 0x1940fcu: goto label_1940fc;
        case 0x19411cu: goto label_19411c;
        case 0x19413cu: goto label_19413c;
        case 0x19415cu: goto label_19415c;
        case 0x19417cu: goto label_19417c;
        case 0x19419cu: goto label_19419c;
        case 0x1941bcu: goto label_1941bc;
        case 0x194258u: goto label_194258;
        case 0x194268u: goto label_194268;
        case 0x194304u: goto label_194304;
        case 0x194314u: goto label_194314;
        default: break;
    }

    ctx->pc = 0x194018u;

    // 0x194018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19401c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x19401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x194020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194024: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x194024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x194028: 0x8c519168  lw          $s1, -0x6E98($v0)
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x339168u));
    // 0x19402c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19402cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194034: 0x122000b7  beqz        $s1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x194034u;
    {
        const bool branch_taken_0x194034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x194038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194034u;
        // 0x194038: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194034) {
            ctx->pc = 0x194314u;
            goto label_194314;
        }
    }
    ctx->pc = 0x19403Cu;
    // 0x19403c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194044: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x194044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x194048: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19404c: 0x0  nop
    ctx->pc = 0x19404cu;
    // NOP
    // 0x194050: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194054: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194054u;
    SET_GPR_U32(ctx, 31, 0x19405Cu);
    ctx->pc = 0x194058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194054u;
    // 0x194058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194054u, 0x19405Cu)) {
        return;
    }
    ctx->pc = 0x19405Cu;
label_19405c:
    // 0x19405c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194064: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x194064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x194068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19406c: 0x0  nop
    ctx->pc = 0x19406cu;
    // NOP
    // 0x194070: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194074: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194074u;
    SET_GPR_U32(ctx, 31, 0x19407Cu);
    ctx->pc = 0x194078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194074u;
    // 0x194078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194074u, 0x19407Cu)) {
        return;
    }
    ctx->pc = 0x19407Cu;
label_19407c:
    // 0x19407c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194084: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x194084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x194088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19408c: 0x0  nop
    ctx->pc = 0x19408cu;
    // NOP
    // 0x194090: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194094: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194094u;
    SET_GPR_U32(ctx, 31, 0x19409Cu);
    ctx->pc = 0x194098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194094u;
    // 0x194098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194094u, 0x19409Cu)) {
        return;
    }
    ctx->pc = 0x19409Cu;
label_19409c:
    // 0x19409c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1940a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1940a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1940a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1940a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1940a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1940ac: 0x0  nop
    ctx->pc = 0x1940acu;
    // NOP
    // 0x1940b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1940b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1940b4: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x1940B4u;
    SET_GPR_U32(ctx, 31, 0x1940BCu);
    ctx->pc = 0x1940B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940B4u;
    // 0x1940b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x1940B4u, 0x1940BCu)) {
        return;
    }
    ctx->pc = 0x1940BCu;
label_1940bc:
    // 0x1940bc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1940bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1940c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1940c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940c4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1940c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1940c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1940c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1940cc: 0x0  nop
    ctx->pc = 0x1940ccu;
    // NOP
    // 0x1940d0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1940d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1940d4: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x1940D4u;
    SET_GPR_U32(ctx, 31, 0x1940DCu);
    ctx->pc = 0x1940D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940D4u;
    // 0x1940d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x1940D4u, 0x1940DCu)) {
        return;
    }
    ctx->pc = 0x1940DCu;
label_1940dc:
    // 0x1940dc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1940dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1940e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1940e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940e4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1940e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1940e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1940e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1940ec: 0x0  nop
    ctx->pc = 0x1940ecu;
    // NOP
    // 0x1940f0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1940f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1940f4: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x1940F4u;
    SET_GPR_U32(ctx, 31, 0x1940FCu);
    ctx->pc = 0x1940F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940F4u;
    // 0x1940f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x1940F4u, 0x1940FCu)) {
        return;
    }
    ctx->pc = 0x1940FCu;
label_1940fc:
    // 0x1940fc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1940fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194104: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x194104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19410c: 0x0  nop
    ctx->pc = 0x19410cu;
    // NOP
    // 0x194110: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194114: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194114u;
    SET_GPR_U32(ctx, 31, 0x19411Cu);
    ctx->pc = 0x194118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194114u;
    // 0x194118: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194114u, 0x19411Cu)) {
        return;
    }
    ctx->pc = 0x19411Cu;
label_19411c:
    // 0x19411c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194124: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x194124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x194128: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19412c: 0x0  nop
    ctx->pc = 0x19412cu;
    // NOP
    // 0x194130: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194134: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194134u;
    SET_GPR_U32(ctx, 31, 0x19413Cu);
    ctx->pc = 0x194138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194134u;
    // 0x194138: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194134u, 0x19413Cu)) {
        return;
    }
    ctx->pc = 0x19413Cu;
label_19413c:
    // 0x19413c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194144: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x194144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x194148: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19414c: 0x0  nop
    ctx->pc = 0x19414cu;
    // NOP
    // 0x194150: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194154: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194154u;
    SET_GPR_U32(ctx, 31, 0x19415Cu);
    ctx->pc = 0x194158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194154u;
    // 0x194158: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194154u, 0x19415Cu)) {
        return;
    }
    ctx->pc = 0x19415Cu;
label_19415c:
    // 0x19415c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194164: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x194164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x194168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19416c: 0x0  nop
    ctx->pc = 0x19416cu;
    // NOP
    // 0x194170: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194174: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194174u;
    SET_GPR_U32(ctx, 31, 0x19417Cu);
    ctx->pc = 0x194178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194174u;
    // 0x194178: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194174u, 0x19417Cu)) {
        return;
    }
    ctx->pc = 0x19417Cu;
label_19417c:
    // 0x19417c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194184: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x194184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x194188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19418c: 0x0  nop
    ctx->pc = 0x19418cu;
    // NOP
    // 0x194190: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x194190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194194: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194194u;
    SET_GPR_U32(ctx, 31, 0x19419Cu);
    ctx->pc = 0x194198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194194u;
    // 0x194198: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194194u, 0x19419Cu)) {
        return;
    }
    ctx->pc = 0x19419Cu;
label_19419c:
    // 0x19419c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1941a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1941a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1941a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1941a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1941a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1941ac: 0x0  nop
    ctx->pc = 0x1941acu;
    // NOP
    // 0x1941b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1941b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1941b4: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x1941B4u;
    SET_GPR_U32(ctx, 31, 0x1941BCu);
    ctx->pc = 0x1941B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1941B4u;
    // 0x1941b8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x1941B4u, 0x1941BCu)) {
        return;
    }
    ctx->pc = 0x1941BCu;
label_1941bc:
    // 0x1941bc: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x1941bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1941c0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1941c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1941c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1941c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1941c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1941c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1941cc: 0x0  nop
    ctx->pc = 0x1941ccu;
    // NOP
    // 0x1941d0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1941d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1941d4: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1941d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x1941d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1941d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1941dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1941dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1941e0: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x1941e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x1941e4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1941e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1941e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1941e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1941ec: 0x0  nop
    ctx->pc = 0x1941ecu;
    // NOP
    // 0x1941f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1941f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1941f4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1941f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1941f8: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x1941f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1941fc: 0x0  nop
    ctx->pc = 0x1941fcu;
    // NOP
    // 0x194200: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x194200u;
    {
        const bool branch_taken_0x194200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194200) {
            ctx->pc = 0x194204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194200u;
            // 0x194204: 0x460c6002  mul.s       $f0, $f12, $f12 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x194210u;
            goto label_194210;
        }
    }
    ctx->pc = 0x194208u;
    // 0x194208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194208u;
    {
        const bool branch_taken_0x194208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194208u;
        // 0x19420c: 0x460c6302  mul.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194208) {
            ctx->pc = 0x194214u;
            goto label_194214;
        }
    }
    ctx->pc = 0x194210u;
label_194210:
    // 0x194210: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x194210u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_194214:
    // 0x194214: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x194214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x194218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19421c: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x19421cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x194220: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194224: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x194224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x194228: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x194228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19422c: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x19422cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x194230: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x194230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194234: 0x0  nop
    ctx->pc = 0x194234u;
    // NOP
    // 0x194238: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x194238u;
    {
        const bool branch_taken_0x194238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194238) {
            ctx->pc = 0x19423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194238u;
            // 0x19423c: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x194248u;
            goto label_194248;
        }
    }
    ctx->pc = 0x194240u;
    // 0x194240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194240) {
            ctx->pc = 0x19424Cu;
            goto label_19424c;
        }
    }
    ctx->pc = 0x194248u;
label_194248:
    // 0x194248: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x194248u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_19424c:
    // 0x19424c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194250: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194250u;
    SET_GPR_U32(ctx, 31, 0x194258u);
    ctx->pc = 0x194254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194250u;
    // 0x194254: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194250u, 0x194258u)) {
        return;
    }
    ctx->pc = 0x194258u;
label_194258:
    // 0x194258: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x194258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19425c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194260: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x194260u;
    SET_GPR_U32(ctx, 31, 0x194268u);
    ctx->pc = 0x194264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194260u;
    // 0x194264: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x194260u, 0x194268u)) {
        return;
    }
    ctx->pc = 0x194268u;
label_194268:
    // 0x194268: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x194268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x19426c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x194270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194274: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194278: 0x0  nop
    ctx->pc = 0x194278u;
    // NOP
    // 0x19427c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19427cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194280: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x194280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x194284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194288: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x194288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19428c: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x19428cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x194290: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x194290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x194294: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x194294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x194298: 0x0  nop
    ctx->pc = 0x194298u;
    // NOP
    // 0x19429c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19429cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1942a0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1942a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1942a4: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x1942a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1942a8: 0x0  nop
    ctx->pc = 0x1942a8u;
    // NOP
    // 0x1942ac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1942ACu;
    {
        const bool branch_taken_0x1942ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1942ac) {
            ctx->pc = 0x1942B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942ACu;
            // 0x1942b0: 0x460c6002  mul.s       $f0, $f12, $f12 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1942BCu;
            goto label_1942bc;
        }
    }
    ctx->pc = 0x1942B4u;
    // 0x1942b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1942B4u;
    {
        const bool branch_taken_0x1942b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B4u;
        // 0x1942b8: 0x460c6302  mul.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942b4) {
            ctx->pc = 0x1942C0u;
            goto label_1942c0;
        }
    }
    ctx->pc = 0x1942BCu;
label_1942bc:
    // 0x1942bc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1942bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_1942c0:
    // 0x1942c0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1942c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1942c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1942c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1942c8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1942c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x1942cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1942ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1942d0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1942d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1942d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1942d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1942d8: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x1942d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1942dc: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1942dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1942e0: 0x0  nop
    ctx->pc = 0x1942e0u;
    // NOP
    // 0x1942e4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1942E4u;
    {
        const bool branch_taken_0x1942e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1942e4) {
            ctx->pc = 0x1942E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942E4u;
            // 0x1942e8: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1942F4u;
            goto label_1942f4;
        }
    }
    ctx->pc = 0x1942ECu;
    // 0x1942ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1942ECu;
    {
        const bool branch_taken_0x1942ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942ECu;
        // 0x1942f0: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942ec) {
            ctx->pc = 0x1942F8u;
            goto label_1942f8;
        }
    }
    ctx->pc = 0x1942F4u;
label_1942f4:
    // 0x1942f4: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x1942f4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_1942f8:
    // 0x1942f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1942f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942fc: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x1942FCu;
    SET_GPR_U32(ctx, 31, 0x194304u);
    ctx->pc = 0x194300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1942FCu;
    // 0x194300: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x1942FCu, 0x194304u)) {
        return;
    }
    ctx->pc = 0x194304u;
label_194304:
    // 0x194304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194308: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x194308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19430c: 0xc06c53a  jal         func_1B14E8
    ctx->pc = 0x19430Cu;
    SET_GPR_U32(ctx, 31, 0x194314u);
    ctx->pc = 0x194310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19430Cu;
    // 0x194310: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B14E8u, 0x19430Cu, 0x194314u)) {
        return;
    }
    ctx->pc = 0x194314u;
label_194314:
    // 0x194314: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x194314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19431c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19431cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194320: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x194320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194324: 0x3e00008  jr          $ra
    ctx->pc = 0x194324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194324u;
        // 0x194328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19432Cu;
    // 0x19432c: 0x0  nop
    ctx->pc = 0x19432cu;
    // NOP
    ctx->pc = 0x194330u;
}

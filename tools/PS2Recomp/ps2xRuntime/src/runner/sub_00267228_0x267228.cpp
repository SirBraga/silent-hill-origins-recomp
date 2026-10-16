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

// Function: sub_00267228
// Address: 0x267228 - 0x2675e8
void sub_00267228_0x267228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267228_0x267228");
#endif

    switch (ctx->pc) {
        case 0x267278u: goto label_267278;
        case 0x2672a0u: goto label_2672a0;
        case 0x2672acu: goto label_2672ac;
        case 0x2672c0u: goto label_2672c0;
        case 0x2672c8u: goto label_2672c8;
        case 0x2673ccu: goto label_2673cc;
        case 0x26745cu: goto label_26745c;
        case 0x26746cu: goto label_26746c;
        case 0x267494u: goto label_267494;
        case 0x267570u: goto label_267570;
        default: break;
    }

    ctx->pc = 0x267228u;

    // 0x267228: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x267228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x26722c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x26722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x267230: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x267230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x267234: 0x2463e6e0  addiu       $v1, $v1, -0x1920
    ctx->pc = 0x267234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960864));
    // 0x267238: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x267238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x26723c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26723cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267240: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x267240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x267244: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x267244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267248: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x267248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x26724c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x26724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x267250: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x267250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x267254: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x267254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x267258: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x267258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E6E4u));
    // 0x26725c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x26725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x267260: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x267260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267264: 0x120000b8  beqz        $s0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x267264u;
    {
        const bool branch_taken_0x267264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267264u;
        // 0x267268: 0x8c75000c  lw          $s5, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267264) {
            ctx->pc = 0x267548u;
            goto label_267548;
        }
    }
    ctx->pc = 0x26726Cu;
    // 0x26726c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x26726cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x267270: 0xc0a0bc4  jal         func_282F10
    ctx->pc = 0x267270u;
    SET_GPR_U32(ctx, 31, 0x267278u);
    ctx->pc = 0x267274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267270u;
    // 0x267274: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282F10u, 0x267270u, 0x267278u)) {
        return;
    }
    ctx->pc = 0x267278u;
label_267278:
    // 0x267278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26727c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26727cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267280: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x267280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x267284: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x267284u;
    {
        const bool branch_taken_0x267284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267284u;
        // 0x267288: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267284) {
            ctx->pc = 0x2673B0u;
            goto label_2673b0;
        }
    }
    ctx->pc = 0x26728Cu;
    // 0x26728c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x26728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x267290: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x267290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x267294: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x267294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x267298: 0xc08994a  jal         func_226528
    ctx->pc = 0x267298u;
    SET_GPR_U32(ctx, 31, 0x2672A0u);
    ctx->pc = 0x26729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267298u;
    // 0x26729c: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x267298u, 0x2672A0u)) {
        return;
    }
    ctx->pc = 0x2672A0u;
label_2672a0:
    // 0x2672a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2672a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2672a4: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x2672A4u;
    SET_GPR_U32(ctx, 31, 0x2672ACu);
    ctx->pc = 0x2672A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672A4u;
    // 0x2672a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x2672A4u, 0x2672ACu)) {
        return;
    }
    ctx->pc = 0x2672ACu;
label_2672ac:
    // 0x2672ac: 0x1a6000c4  blez        $s3, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2672ACu;
    {
        const bool branch_taken_0x2672ac = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2672B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672ACu;
        // 0x2672b0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672ac) {
            ctx->pc = 0x2675C0u;
            goto label_2675c0;
        }
    }
    ctx->pc = 0x2672B4u;
    // 0x2672b4: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x2672b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2672b8: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2672b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2672bc: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2672bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2672c0:
    // 0x2672c0: 0xc08994a  jal         func_226528
    ctx->pc = 0x2672C0u;
    SET_GPR_U32(ctx, 31, 0x2672C8u);
    ctx->pc = 0x2672C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672C0u;
    // 0x2672c4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x2672C0u, 0x2672C8u)) {
        return;
    }
    ctx->pc = 0x2672C8u;
label_2672c8:
    // 0x2672c8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2672c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2672cc: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x2672ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2672d0: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x2672d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2672d4: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x2672d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2672d8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2672d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2672dc: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2672dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2672e0: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x2672e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2672e4: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x2672e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2672e8: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x2672e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2672ec: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x2672ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2672f0: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x2672f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2672f4: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x2672f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2672f8: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x2672f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2672fc: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x2672fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x267300: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x267300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267304: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x267304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267308: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x267308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x26730c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x26730cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267310: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x267310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267314: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x267314u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267318: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x267318u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x26731c: 0xfa490000  sqc2        $vf9, 0x0($s2)
    ctx->pc = 0x26731cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x267320: 0xfa4a0010  sqc2        $vf10, 0x10($s2)
    ctx->pc = 0x267320u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x267324: 0xfa4b0020  sqc2        $vf11, 0x20($s2)
    ctx->pc = 0x267324u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x267328: 0xfa4c0030  sqc2        $vf12, 0x30($s2)
    ctx->pc = 0x267328u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x26732c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26732cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267330: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x267330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x267334: 0xda430020  lqc2        $vf3, 0x20($s2)
    ctx->pc = 0x267334u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x267338: 0xda440030  lqc2        $vf4, 0x30($s2)
    ctx->pc = 0x267338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x26733c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x26733cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267340: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x267340u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267344: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x267344u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267348: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x267348u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26734c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x26734cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267350: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x267350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267354: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x267354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x267358: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x267358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x26735c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x26735cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267360: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x267360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x267364: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x267364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267368: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x267368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x26736c: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x26736cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x267370: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x267370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267374: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x267374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267378: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x267378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x26737c: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x26737cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x267380: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x267380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x267384: 0xfa0a0010  sqc2        $vf10, 0x10($s0)
    ctx->pc = 0x267384u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x267388: 0xfa0b0020  sqc2        $vf11, 0x20($s0)
    ctx->pc = 0x267388u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x26738c: 0xfa0c0030  sqc2        $vf12, 0x30($s0)
    ctx->pc = 0x26738cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x267390: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x267390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x267394: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x267394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x267398: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x267398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x26739c: 0x1660ffc8  bnez        $s3, . + 4 + (-0x38 << 2)
    ctx->pc = 0x26739Cu;
    {
        const bool branch_taken_0x26739c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2673A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26739Cu;
        // 0x2673a0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26739c) {
            ctx->pc = 0x2672C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2672c0;
        }
    }
    ctx->pc = 0x2673A4u;
    // 0x2673a4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2673A4u;
    {
        const bool branch_taken_0x2673a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673A4u;
        // 0x2673a8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673a4) {
            ctx->pc = 0x2675C4u;
            goto label_2675c4;
        }
    }
    ctx->pc = 0x2673ACu;
    // 0x2673ac: 0x0  nop
    ctx->pc = 0x2673acu;
    // NOP
label_2673b0:
    // 0x2673b0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2673B0u;
    {
        const bool branch_taken_0x2673b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673B0u;
        // 0x2673b4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673b0) {
            ctx->pc = 0x267450u;
            goto label_267450;
        }
    }
    ctx->pc = 0x2673B8u;
    // 0x2673b8: 0x2620818  mult        $at, $s3, $v0
    ctx->pc = 0x2673b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x2673bc: 0x2402820  add         $a1, $s2, $zero
    ctx->pc = 0x2673bcu;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x2673c0: 0x2202020  add         $a0, $s1, $zero
    ctx->pc = 0x2673c0u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x2673c4: 0x2a01820  add         $v1, $s5, $zero
    ctx->pc = 0x2673c4u;
    {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x2673c8: 0x610820  add         $at, $v1, $at
    ctx->pc = 0x2673c8u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2673cc:
    // 0x2673cc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2673ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2673d0: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x2673d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2673d4: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x2673d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2673d8: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x2673d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2673dc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2673dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2673e0: 0xd8860010  lqc2        $vf6, 0x10($a0)
    ctx->pc = 0x2673e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2673e4: 0xd8870020  lqc2        $vf7, 0x20($a0)
    ctx->pc = 0x2673e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2673e8: 0xd8880030  lqc2        $vf8, 0x30($a0)
    ctx->pc = 0x2673e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2673ec: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x2673ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2673f0: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x2673f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2673f4: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x2673f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2673f8: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x2673f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2673fc: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x2673fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267400: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x267400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x267404: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x267404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267408: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x267408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x26740c: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x26740cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x267410: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x267410u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267414: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x267414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267418: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x267418u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x26741c: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x26741cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x267420: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x267420u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x267424: 0xf86a0010  sqc2        $vf10, 0x10($v1)
    ctx->pc = 0x267424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x267428: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x267428u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x26742c: 0xf86c0030  sqc2        $vf12, 0x30($v1)
    ctx->pc = 0x26742cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x267430: 0x20630040  addi        $v1, $v1, 0x40
    ctx->pc = 0x267430u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x267434: 0xa22820  add         $a1, $a1, $v0
    ctx->pc = 0x267434u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x267438: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x267438u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x26743c: 0x1423ffe3  bne         $at, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x26743Cu;
    {
        const bool branch_taken_0x26743c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 3));
        if (branch_taken_0x26743c) {
            ctx->pc = 0x2673CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2673cc;
        }
    }
    ctx->pc = 0x267444u;
    // 0x267444: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x267444u;
    {
        const bool branch_taken_0x267444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267444u;
        // 0x267448: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267444) {
            ctx->pc = 0x2675C4u;
            goto label_2675c4;
        }
    }
    ctx->pc = 0x26744Cu;
    // 0x26744c: 0x0  nop
    ctx->pc = 0x26744cu;
    // NOP
label_267450:
    // 0x267450: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x267450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x267454: 0xc08994a  jal         func_226528
    ctx->pc = 0x267454u;
    SET_GPR_U32(ctx, 31, 0x26745Cu);
    ctx->pc = 0x267458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267454u;
    // 0x267458: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x267454u, 0x26745Cu)) {
        return;
    }
    ctx->pc = 0x26745Cu;
label_26745c:
    // 0x26745c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x26745cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x267460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267464: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x267464u;
    SET_GPR_U32(ctx, 31, 0x26746Cu);
    ctx->pc = 0x267468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267464u;
    // 0x267468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x267464u, 0x26746Cu)) {
        return;
    }
    ctx->pc = 0x26746Cu;
label_26746c:
    // 0x26746c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x26746cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x267470: 0x2630818  mult        $at, $s3, $v1
    ctx->pc = 0x267470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x267474: 0x2402820  add         $a1, $s2, $zero
    ctx->pc = 0x267474u;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x267478: 0x2202020  add         $a0, $s1, $zero
    ctx->pc = 0x267478u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x26747c: 0x2a01020  add         $v0, $s5, $zero
    ctx->pc = 0x26747cu;
    {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x267480: 0xda0d0000  lqc2        $vf13, 0x0($s0)
    ctx->pc = 0x267480u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x267484: 0xda0e0010  lqc2        $vf14, 0x10($s0)
    ctx->pc = 0x267484u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x267488: 0xda0f0020  lqc2        $vf15, 0x20($s0)
    ctx->pc = 0x267488u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26748c: 0xda100030  lqc2        $vf16, 0x30($s0)
    ctx->pc = 0x26748cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x267490: 0x410820  add         $at, $v0, $at
    ctx->pc = 0x267490u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_267494:
    // 0x267494: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x267494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x267498: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x267498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26749c: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x26749cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2674a0: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x2674a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2674a4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2674a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2674a8: 0xd8860010  lqc2        $vf6, 0x10($a0)
    ctx->pc = 0x2674a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2674ac: 0xd8870020  lqc2        $vf7, 0x20($a0)
    ctx->pc = 0x2674acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2674b0: 0xd8880030  lqc2        $vf8, 0x30($a0)
    ctx->pc = 0x2674b0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2674b4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x2674b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674b8: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x2674b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674bc: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x2674bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2674c0: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x2674c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674c4: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x2674c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674c8: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x2674c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x2674cc: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x2674ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674d0: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x2674d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674d4: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x2674d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x2674d8: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x2674d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674dc: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x2674dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674e0: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x2674e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674e4: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x2674e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x2674e8: 0x4be969bc  vmulax.xyzw $ACC, $vf13, $vf9x
    ctx->pc = 0x2674e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674ec: 0x4be970bd  vmadday.xyzw $ACC, $vf14, $vf9y
    ctx->pc = 0x2674ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674f0: 0x4be9784a  vmaddz.xyzw $vf1, $vf15, $vf9z
    ctx->pc = 0x2674f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2674f4: 0x4bea69bc  vmulax.xyzw $ACC, $vf13, $vf10x
    ctx->pc = 0x2674f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674f8: 0x4bea70bd  vmadday.xyzw $ACC, $vf14, $vf10y
    ctx->pc = 0x2674f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2674fc: 0x4bea788a  vmaddz.xyzw $vf2, $vf15, $vf10z
    ctx->pc = 0x2674fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x267500: 0x4beb69bc  vmulax.xyzw $ACC, $vf13, $vf11x
    ctx->pc = 0x267500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267504: 0x4beb70bd  vmadday.xyzw $ACC, $vf14, $vf11y
    ctx->pc = 0x267504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267508: 0x4beb78ca  vmaddz.xyzw $vf3, $vf15, $vf11z
    ctx->pc = 0x267508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x26750c: 0x4bec69bc  vmulax.xyzw $ACC, $vf13, $vf12x
    ctx->pc = 0x26750cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267510: 0x4bec70bd  vmadday.xyzw $ACC, $vf14, $vf12y
    ctx->pc = 0x267510u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267514: 0x4bec78be  vmaddaz.xyzw $ACC, $vf15, $vf12z
    ctx->pc = 0x267514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x267518: 0x4be0810b  vmaddw.xyzw $vf4, $vf16, $vf0w
    ctx->pc = 0x267518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26751c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26751cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x267520: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x267520u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x267524: 0xf8430020  sqc2        $vf3, 0x20($v0)
    ctx->pc = 0x267524u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x267528: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x267528u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26752c: 0x20420040  addi        $v0, $v0, 0x40
    ctx->pc = 0x26752cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x267530: 0xa32820  add         $a1, $a1, $v1
    ctx->pc = 0x267530u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x267534: 0x832020  add         $a0, $a0, $v1
    ctx->pc = 0x267534u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x267538: 0x1422ffd6  bne         $at, $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x267538u;
    {
        const bool branch_taken_0x267538 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 2));
        if (branch_taken_0x267538) {
            ctx->pc = 0x267494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267494;
        }
    }
    ctx->pc = 0x267540u;
    // 0x267540: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x267540u;
    {
        const bool branch_taken_0x267540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267540u;
        // 0x267544: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267540) {
            ctx->pc = 0x2675C4u;
            goto label_2675c4;
        }
    }
    ctx->pc = 0x267548u;
label_267548:
    // 0x267548: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x267548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26754c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26754Cu;
    {
        const bool branch_taken_0x26754c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x267550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26754Cu;
        // 0x267550: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26754c) {
            ctx->pc = 0x2675C0u;
            goto label_2675c0;
        }
    }
    ctx->pc = 0x267554u;
    // 0x267554: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x267554u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x267558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x267558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26755c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26755cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267560: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x267560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267564: 0x34e70003  ori         $a3, $a3, 0x3
    ctx->pc = 0x267564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x267568: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x267568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26756c: 0x0  nop
    ctx->pc = 0x26756cu;
    // NOP
label_267570:
    // 0x267570: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x267570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x267574: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x267574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x267578: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x267578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x26757c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x26757cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x267580: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x267580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x267584: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x267584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x267588: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x267588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x26758c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26758cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x267590: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x267590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x267594: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x267594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x267598: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x267598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x26759c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x26759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2675a0: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2675a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2675a4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2675a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2675a8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2675a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2675ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2675acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2675b0: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x2675b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2675b4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2675B4u;
    {
        const bool branch_taken_0x2675b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2675B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675B4u;
        // 0x2675b8: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675b4) {
            ctx->pc = 0x267570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267570;
        }
    }
    ctx->pc = 0x2675BCu;
    // 0x2675bc: 0x0  nop
    ctx->pc = 0x2675bcu;
    // NOP
label_2675c0:
    // 0x2675c0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2675c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2675c4:
    // 0x2675c4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2675c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2675c8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2675c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2675cc: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2675ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2675d0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2675d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2675d4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2675d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2675d8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2675d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2675dc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2675dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2675e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2675E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675E0u;
        // 0x2675e4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2675E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2675E8u;
}

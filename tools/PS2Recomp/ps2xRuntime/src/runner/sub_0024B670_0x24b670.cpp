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

// Function: sub_0024B670
// Address: 0x24b670 - 0x24b6f0
void sub_0024B670_0x24b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B670_0x24b670");
#endif

    ctx->pc = 0x24b670u;

    // 0x24b670: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24b670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b674: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x24b674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24b678: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x24b678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24b67c: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x24b67cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24b680: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x24b680u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24b684: 0x9ca4000c  lwu         $a0, 0xC($a1)
    ctx->pc = 0x24b684u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24b688: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x24b688u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b68c: 0xd8c60010  lqc2        $vf6, 0x10($a2)
    ctx->pc = 0x24b68cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24b690: 0xd8c70020  lqc2        $vf7, 0x20($a2)
    ctx->pc = 0x24b690u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x24b694: 0xd8c80030  lqc2        $vf8, 0x30($a2)
    ctx->pc = 0x24b694u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x24b698: 0x9cc3000c  lwu         $v1, 0xC($a2)
    ctx->pc = 0x24b698u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24b69c: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x24b69cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6a0: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x24b6a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6a4: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x24b6a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x24b6a8: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x24b6a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6ac: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x24b6acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6b0: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x24b6b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x24b6b4: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x24b6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6b8: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x24b6b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6bc: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x24b6bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x24b6c0: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x24b6c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6c4: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x24b6c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6c8: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x24b6c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24b6cc: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x24b6ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x24b6d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x24b6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24b6d4: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x24b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x24b6d8: 0xf84a0010  sqc2        $vf10, 0x10($v0)
    ctx->pc = 0x24b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x24b6dc: 0xf84b0020  sqc2        $vf11, 0x20($v0)
    ctx->pc = 0x24b6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x24b6e0: 0xf84c0030  sqc2        $vf12, 0x30($v0)
    ctx->pc = 0x24b6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x24b6e4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24b6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B6F0u;
}

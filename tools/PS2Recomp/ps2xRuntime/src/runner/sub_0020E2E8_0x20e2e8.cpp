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

// Function: sub_0020E2E8
// Address: 0x20e2e8 - 0x20e608
void sub_0020E2E8_0x20e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E2E8_0x20e2e8");
#endif

    switch (ctx->pc) {
        case 0x20e328u: goto label_20e328;
        case 0x20e398u: goto label_20e398;
        case 0x20e418u: goto label_20e418;
        case 0x20e440u: goto label_20e440;
        case 0x20e460u: goto label_20e460;
        case 0x20e480u: goto label_20e480;
        case 0x20e4a0u: goto label_20e4a0;
        case 0x20e4d8u: goto label_20e4d8;
        case 0x20e4f0u: goto label_20e4f0;
        case 0x20e528u: goto label_20e528;
        case 0x20e548u: goto label_20e548;
        case 0x20e568u: goto label_20e568;
        case 0x20e5a4u: goto label_20e5a4;
        case 0x20e5bcu: goto label_20e5bc;
        default: break;
    }

    ctx->pc = 0x20e2e8u;

    // 0x20e2e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20e2ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x20e2f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x20e2f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20e2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20e2fc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x20e300: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20e300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e304: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x20e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x20e308: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x20e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x20e30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e310: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x20e310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x20e314: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x20e314u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x20e318: 0x8e900050  lw          $s0, 0x50($s4)
    ctx->pc = 0x20e318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x20e31c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20E31Cu;
    {
        const bool branch_taken_0x20e31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E31Cu;
        // 0x20e320: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e31c) {
            ctx->pc = 0x20E388u;
            goto label_20e388;
        }
    }
    ctx->pc = 0x20E324u;
    // 0x20e324: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e328:
    // 0x20e328: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20E328u;
    {
        const bool branch_taken_0x20e328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e328) {
            ctx->pc = 0x20E32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E328u;
            // 0x20e32c: 0x8e10002c  lw          $s0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E380u;
            goto label_20e380;
        }
    }
    ctx->pc = 0x20E330u;
    // 0x20e330: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20e330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e334: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20e334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20e338: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e33c: 0x440019  multu       $v0, $a0
    ctx->pc = 0x20e33cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e340: 0x2812  mflo        $a1
    ctx->pc = 0x20e340u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x20e344: 0x1010  mfhi        $v0
    ctx->pc = 0x20e344u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x20e348: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20e348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20e34c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20e34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20e350: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x20e350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x20e354: 0x640019  multu       $v1, $a0
    ctx->pc = 0x20e354u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e358: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x20e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x20e35c: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x20e35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x20e360: 0x2812  mflo        $a1
    ctx->pc = 0x20e360u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x20e364: 0x1810  mfhi        $v1
    ctx->pc = 0x20e364u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20e368: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20e368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20e36c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20e36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20e370: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x20e370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x20e374: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20e378: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x20e378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x20e37c: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x20e37cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20e380:
    // 0x20e380: 0x5600ffe9  bnel        $s0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20E380u;
    {
        const bool branch_taken_0x20e380 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e380) {
            ctx->pc = 0x20E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E380u;
            // 0x20e384: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e328;
        }
    }
    ctx->pc = 0x20E388u;
label_20e388:
    // 0x20e388: 0x8e900054  lw          $s0, 0x54($s4)
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x20e38c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20E38Cu;
    {
        const bool branch_taken_0x20e38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e38c) {
            ctx->pc = 0x20E400u;
            goto label_20e400;
        }
    }
    ctx->pc = 0x20E394u;
    // 0x20e394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e398:
    // 0x20e398: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x20E398u;
    {
        const bool branch_taken_0x20e398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e398) {
            ctx->pc = 0x20E39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E398u;
            // 0x20e39c: 0x8e10002c  lw          $s0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E3F8u;
            goto label_20e3f8;
        }
    }
    ctx->pc = 0x20E3A0u;
    // 0x20e3a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e3a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20e3a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e3ac: 0x440019  multu       $v0, $a0
    ctx->pc = 0x20e3acu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e3b0: 0x2812  mflo        $a1
    ctx->pc = 0x20e3b0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x20e3b4: 0x1010  mfhi        $v0
    ctx->pc = 0x20e3b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x20e3b8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20e3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20e3bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20e3c0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x20e3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x20e3c4: 0x640019  multu       $v1, $a0
    ctx->pc = 0x20e3c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e3c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x20e3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x20e3cc: 0x211f8  dsll        $v0, $v0, 7
    ctx->pc = 0x20e3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 7);
    // 0x20e3d0: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x20e3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x20e3d4: 0x2812  mflo        $a1
    ctx->pc = 0x20e3d4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x20e3d8: 0x1810  mfhi        $v1
    ctx->pc = 0x20e3d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20e3dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20e3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20e3e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20e3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20e3e4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x20e3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x20e3e8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20e3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20e3ec: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x20e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x20e3f0: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x20e3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x20e3f4: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x20e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20e3f8:
    // 0x20e3f8: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x20E3F8u;
    {
        const bool branch_taken_0x20e3f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e3f8) {
            ctx->pc = 0x20E3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E3F8u;
            // 0x20e3fc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e398;
        }
    }
    ctx->pc = 0x20E400u;
label_20e400:
    // 0x20e400: 0x1a400077  blez        $s2, . + 4 + (0x77 << 2)
    ctx->pc = 0x20E400u;
    {
        const bool branch_taken_0x20e400 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x20E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E400u;
        // 0x20e404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e400) {
            ctx->pc = 0x20E5E0u;
            goto label_20e5e0;
        }
    }
    ctx->pc = 0x20E408u;
    // 0x20e408: 0xde870058  ld          $a3, 0x58($s4)
    ctx->pc = 0x20e408u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x20e40c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e410: 0xc083d1a  jal         func_20F468
    ctx->pc = 0x20E410u;
    SET_GPR_U32(ctx, 31, 0x20E418u);
    ctx->pc = 0x20E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E410u;
    // 0x20e414: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F468u, 0x20E410u, 0x20E418u)) {
        return;
    }
    ctx->pc = 0x20E418u;
label_20e418:
    // 0x20e418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20e418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e41c: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x20e41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x20e420: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E420u;
    {
        const bool branch_taken_0x20e420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e420) {
            ctx->pc = 0x20E438u;
            goto label_20e438;
        }
    }
    ctx->pc = 0x20E428u;
    // 0x20e428: 0x3c153b9a  lui         $s5, 0x3B9A
    ctx->pc = 0x20e428u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15258 << 16));
    // 0x20e42c: 0x36b5ca00  ori         $s5, $s5, 0xCA00
    ctx->pc = 0x20e42cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)51712);
    // 0x20e430: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E430u;
    {
        const bool branch_taken_0x20e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E430u;
        // 0x20e434: 0x8e900050  lw          $s0, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e430) {
            ctx->pc = 0x20E454u;
            goto label_20e454;
        }
    }
    ctx->pc = 0x20E438u;
label_20e438:
    // 0x20e438: 0xc0ca2b8  jal         func_328AE0
    ctx->pc = 0x20E438u;
    SET_GPR_U32(ctx, 31, 0x20E440u);
    ctx->pc = 0x20E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E438u;
    // 0x20e43c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20E438u, 0x20E440u)) {
        return;
    }
    ctx->pc = 0x20E440u;
label_20e440:
    // 0x20e440: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20e440u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e448: 0x15102a  slt         $v0, $zero, $s5
    ctx->pc = 0x20e448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x20e44c: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x20e44cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3));
    // 0x20e450: 0x8e900050  lw          $s0, 0x50($s4)
    ctx->pc = 0x20e450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_20e454:
    // 0x20e454: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20E454u;
    {
        const bool branch_taken_0x20e454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E454u;
        // 0x20e458: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e454) {
            ctx->pc = 0x20E514u;
            goto label_20e514;
        }
    }
    ctx->pc = 0x20E45Cu;
    // 0x20e45c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e460:
    // 0x20e460: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x20E460u;
    {
        const bool branch_taken_0x20e460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e460) {
            ctx->pc = 0x20E464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E460u;
            // 0x20e464: 0x8e10002c  lw          $s0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E50Cu;
            goto label_20e50c;
        }
    }
    ctx->pc = 0x20E468u;
    // 0x20e468: 0x9e040004  lwu         $a0, 0x4($s0)
    ctx->pc = 0x20e468u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e46c: 0x9e11000c  lwu         $s1, 0xC($s0)
    ctx->pc = 0x20e46cu;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20e470: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x20e470u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x20e474: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x20e474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e478: 0xc0ca2b8  jal         func_328AE0
    ctx->pc = 0x20E478u;
    SET_GPR_U32(ctx, 31, 0x20E480u);
    ctx->pc = 0x20E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E478u;
    // 0x20e47c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20E478u, 0x20E480u)) {
        return;
    }
    ctx->pc = 0x20E480u;
label_20e480:
    // 0x20e480: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x20e480u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x20e484: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x20e484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e488: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E488u;
    {
        const bool branch_taken_0x20e488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E488u;
        // 0x20e48c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e488) {
            ctx->pc = 0x20E498u;
            goto label_20e498;
        }
    }
    ctx->pc = 0x20E490u;
    // 0x20e490: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20E490u;
    {
        const bool branch_taken_0x20e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E490u;
        // 0x20e494: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e490) {
            ctx->pc = 0x20E4DCu;
            goto label_20e4dc;
        }
    }
    ctx->pc = 0x20E498u;
label_20e498:
    // 0x20e498: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x20E498u;
    SET_GPR_U32(ctx, 31, 0x20E4A0u);
    ctx->pc = 0x20E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E498u;
    // 0x20e49c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20E498u, 0x20E4A0u)) {
        return;
    }
    ctx->pc = 0x20E4A0u;
label_20e4a0:
    // 0x20e4a0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x20e4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e4a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20e4a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e4a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20e4ac: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x20e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x20e4b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4b4: 0x2460019  multu       $s2, $a2
    ctx->pc = 0x20e4b4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 18) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e4b8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x20e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x20e4bc: 0x1012  mflo        $v0
    ctx->pc = 0x20e4bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20e4c0: 0x3010  mfhi        $a2
    ctx->pc = 0x20e4c0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20e4c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20e4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20e4c8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20e4c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20e4cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x20e4d0: 0xc083d1c  jal         func_20F470
    ctx->pc = 0x20E4D0u;
    SET_GPR_U32(ctx, 31, 0x20E4D8u);
    ctx->pc = 0x20E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4D0u;
    // 0x20e4d4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F470u, 0x20E4D0u, 0x20E4D8u)) {
        return;
    }
    ctx->pc = 0x20E4D8u;
label_20e4d8:
    // 0x20e4d8: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x20e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
label_20e4dc:
    // 0x20e4dc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x20e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e4e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4e4: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x20e4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20e4e8: 0xc0837a0  jal         func_20DE80
    ctx->pc = 0x20E4E8u;
    SET_GPR_U32(ctx, 31, 0x20E4F0u);
    ctx->pc = 0x20E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4E8u;
    // 0x20e4ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20DE80u, 0x20E4E8u, 0x20E4F0u)) {
        return;
    }
    ctx->pc = 0x20E4F0u;
label_20e4f0:
    // 0x20e4f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20e4f4: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x20e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x20e4f8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x20e4fc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x20e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x20e500: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x20e500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x20e504: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x20e504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x20e508: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x20e508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20e50c:
    // 0x20e50c: 0x5600ffd4  bnel        $s0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x20E50Cu;
    {
        const bool branch_taken_0x20e50c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e50c) {
            ctx->pc = 0x20E510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E50Cu;
            // 0x20e510: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E514u;
label_20e514:
    // 0x20e514: 0x8e900054  lw          $s0, 0x54($s4)
    ctx->pc = 0x20e514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x20e518: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20E518u;
    {
        const bool branch_taken_0x20e518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E518u;
        // 0x20e51c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e518) {
            ctx->pc = 0x20E5E0u;
            goto label_20e5e0;
        }
    }
    ctx->pc = 0x20E520u;
    // 0x20e520: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20e524: 0x0  nop
    ctx->pc = 0x20e524u;
    // NOP
label_20e528:
    // 0x20e528: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x20E528u;
    {
        const bool branch_taken_0x20e528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e528) {
            ctx->pc = 0x20E52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E528u;
            // 0x20e52c: 0x8e10002c  lw          $s0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E5D8u;
            goto label_20e5d8;
        }
    }
    ctx->pc = 0x20E530u;
    // 0x20e530: 0x9e040004  lwu         $a0, 0x4($s0)
    ctx->pc = 0x20e530u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e534: 0x9e11000c  lwu         $s1, 0xC($s0)
    ctx->pc = 0x20e534u;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20e538: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x20e538u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x20e53c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x20e53cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e540: 0xc0ca2b8  jal         func_328AE0
    ctx->pc = 0x20E540u;
    SET_GPR_U32(ctx, 31, 0x20E548u);
    ctx->pc = 0x20E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E540u;
    // 0x20e544: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20E540u, 0x20E548u)) {
        return;
    }
    ctx->pc = 0x20E548u;
label_20e548:
    // 0x20e548: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x20e548u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x20e54c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x20e54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E550u;
    {
        const bool branch_taken_0x20e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E550u;
        // 0x20e554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e550) {
            ctx->pc = 0x20E560u;
            goto label_20e560;
        }
    }
    ctx->pc = 0x20E558u;
    // 0x20e558: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20E558u;
    {
        const bool branch_taken_0x20e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E558u;
        // 0x20e55c: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e558) {
            ctx->pc = 0x20E5A8u;
            goto label_20e5a8;
        }
    }
    ctx->pc = 0x20E560u;
label_20e560:
    // 0x20e560: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x20E560u;
    SET_GPR_U32(ctx, 31, 0x20E568u);
    ctx->pc = 0x20E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E560u;
    // 0x20e564: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20E560u, 0x20E568u)) {
        return;
    }
    ctx->pc = 0x20E568u;
label_20e568:
    // 0x20e568: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x20e568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e56c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20e56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20e570: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20e574: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x20e574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x20e578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e57c: 0x2460019  multu       $s2, $a2
    ctx->pc = 0x20e57cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 18) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e580: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x20e580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x20e584: 0x1012  mflo        $v0
    ctx->pc = 0x20e584u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20e588: 0x3010  mfhi        $a2
    ctx->pc = 0x20e588u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20e58c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20e58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20e590: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20e590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20e594: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x20e598: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x20e598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x20e59c: 0xc083d1c  jal         func_20F470
    ctx->pc = 0x20E59Cu;
    SET_GPR_U32(ctx, 31, 0x20E5A4u);
    ctx->pc = 0x20E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E59Cu;
    // 0x20e5a0: 0x631f8  dsll        $a2, $a2, 7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F470u, 0x20E59Cu, 0x20E5A4u)) {
        return;
    }
    ctx->pc = 0x20E5A4u;
label_20e5a4:
    // 0x20e5a4: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x20e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
label_20e5a8:
    // 0x20e5a8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x20e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e5ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5b0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x20e5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20e5b4: 0xc08382c  jal         func_20E0B0
    ctx->pc = 0x20E5B4u;
    SET_GPR_U32(ctx, 31, 0x20E5BCu);
    ctx->pc = 0x20E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E5B4u;
    // 0x20e5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E0B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20E0B0u, 0x20E5B4u, 0x20E5BCu)) {
        return;
    }
    ctx->pc = 0x20E5BCu;
label_20e5bc:
    // 0x20e5bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20e5c0: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x20e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x20e5c4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x20e5c8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x20e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x20e5cc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x20e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x20e5d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x20e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x20e5d4: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x20e5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20e5d8:
    // 0x20e5d8: 0x5600ffd3  bnel        $s0, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x20E5D8u;
    {
        const bool branch_taken_0x20e5d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e5d8) {
            ctx->pc = 0x20E5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E5D8u;
            // 0x20e5dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e528;
        }
    }
    ctx->pc = 0x20E5E0u;
label_20e5e0:
    // 0x20e5e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x20e5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e5e4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x20e5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e5e8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20e5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e5ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20e5ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e5f0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x20e5f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e5f4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x20e5f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e5f8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20e5f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e600: 0x3e00008  jr          $ra
    ctx->pc = 0x20E600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E600u;
        // 0x20e604: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E608u;
}

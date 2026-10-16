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

// Function: sub_00329360
// Address: 0x329360 - 0x3299c8
void sub_00329360_0x329360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329360_0x329360");
#endif

    ctx->pc = 0x329360u;

    // 0x329360: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x329360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329364: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x329364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x329368: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x329368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x32936c: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x32936cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x329370: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x329370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x329374: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x329374u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x329378: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x329378u;
    {
        const bool branch_taken_0x329378 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x32937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329378u;
        // 0x32937c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329378) {
            ctx->pc = 0x3293D4u;
            goto label_3293d4;
        }
    }
    ctx->pc = 0x329380u;
    // 0x329380: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x329380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x329384: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x329384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x329388: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x329388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32938c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32938cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329390: 0x21023  negu        $v0, $v0
    ctx->pc = 0x329390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x329394: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x329394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x329398: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x329398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32939c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x32939cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3293a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3293a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3293a4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3293a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3293a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3293a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3293ac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3293acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3293b0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3293b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3293b4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3293b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3293b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3293b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3293bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3293bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3293c0: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x3293c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3293c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3293c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3293c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3293c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3293cc: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x3293ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3293d0: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x3293d0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_3293d4:
    // 0x3293d4: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x3293d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3293d8: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3293D8u;
    {
        const bool branch_taken_0x3293d8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3293DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293D8u;
        // 0x3293dc: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3293d8) {
            ctx->pc = 0x329428u;
            goto label_329428;
        }
    }
    ctx->pc = 0x3293E0u;
    // 0x3293e0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3293e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3293e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3293e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3293e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3293e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3293ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3293ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3293f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3293f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3293f4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x3293f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3293f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3293f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3293fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3293fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x329400: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x329404: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x329404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x329408: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x329408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x32940c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32940cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x329410: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329410u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329414: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x329414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x329418: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x329418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x32941c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x32941cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x329420: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x329420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x329424: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x329424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_329428:
    // 0x329428: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x329428u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x32942c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x32942cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x329430: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x329430u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x329434: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x329434u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x329438: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x329438u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x32943c: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x32943cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x329440: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x329440u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x329444: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x329444u;
    {
        const bool branch_taken_0x329444 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x329448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329444u;
        // 0x329448: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329444) {
            ctx->pc = 0x329714u;
            goto label_329714;
        }
    }
    ctx->pc = 0x32944Cu;
    // 0x32944c: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x32944cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329450: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x329450u;
    {
        const bool branch_taken_0x329450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329450u;
        // 0x329454: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329450) {
            ctx->pc = 0x3294E0u;
            goto label_3294e0;
        }
    }
    ctx->pc = 0x329458u;
    // 0x329458: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x329458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x32945c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32945Cu;
    {
        const bool branch_taken_0x32945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32945Cu;
        // 0x329460: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32945c) {
            ctx->pc = 0x329478u;
            goto label_329478;
        }
    }
    ctx->pc = 0x329464u;
    // 0x329464: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x329464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x329468: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x329468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32946c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32946Cu;
    {
        const bool branch_taken_0x32946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32946Cu;
        // 0x329470: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32946c) {
            ctx->pc = 0x329490u;
            goto label_329490;
        }
    }
    ctx->pc = 0x329474u;
    // 0x329474: 0x0  nop
    ctx->pc = 0x329474u;
    // NOP
label_329478:
    // 0x329478: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x329478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x32947c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x329480: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329484: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x329484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329488: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x329488u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x32948c: 0x0  nop
    ctx->pc = 0x32948cu;
    // NOP
label_329490:
    // 0x329490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x329490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x329494: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x329494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x329498: 0x24422c28  addiu       $v0, $v0, 0x2C28
    ctx->pc = 0x329498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11304));
    // 0x32949c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x32949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3294a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3294a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3294a4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3294a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3294a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3294a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3294ac: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3294acu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3294b0: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3294B0u;
    {
        const bool branch_taken_0x3294b0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294B0u;
        // 0x3294b4: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294b0) {
            ctx->pc = 0x3294CCu;
            goto label_3294cc;
        }
    }
    ctx->pc = 0x3294B8u;
    // 0x3294b8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3294b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3294bc: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x3294bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3294c0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3294c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3294c4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3294c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3294c8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3294c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_3294cc:
    // 0x3294cc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3294ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3294d0: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x3294d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3294d4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3294D4u;
    {
        const bool branch_taken_0x3294d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294D4u;
        // 0x3294d8: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294d4) {
            ctx->pc = 0x329658u;
            goto label_329658;
        }
    }
    ctx->pc = 0x3294DCu;
    // 0x3294dc: 0x0  nop
    ctx->pc = 0x3294dcu;
    // NOP
label_3294e0:
    // 0x3294e0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3294E0u;
    {
        const bool branch_taken_0x3294e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3294E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294E0u;
        // 0x3294e4: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294e0) {
            ctx->pc = 0x329508u;
            goto label_329508;
        }
    }
    ctx->pc = 0x3294E8u;
    // 0x3294e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3294e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3294ec: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3294ECu;
    {
        const bool branch_taken_0x3294ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3294ec) {
            ctx->pc = 0x3294F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3294ECu;
            // 0x3294f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3294F4u;
            goto label_3294f4;
        }
    }
    ctx->pc = 0x3294F4u;
label_3294f4:
    // 0x3294f4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x3294f4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3294f8: 0x1012  mflo        $v0
    ctx->pc = 0x3294f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3294fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3294fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329500: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x329500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x329504: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x329504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_329508:
    // 0x329508: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329508u;
    {
        const bool branch_taken_0x329508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329508u;
        // 0x32950c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329508) {
            ctx->pc = 0x329520u;
            goto label_329520;
        }
    }
    ctx->pc = 0x329510u;
    // 0x329510: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x329510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x329514: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x329514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x329518: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x329518u;
    {
        const bool branch_taken_0x329518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329518u;
        // 0x32951c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329518) {
            ctx->pc = 0x329538u;
            goto label_329538;
        }
    }
    ctx->pc = 0x329520u;
label_329520:
    // 0x329520: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x329520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x329524: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x329524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x329528: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32952c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x32952cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329530: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x329530u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x329534: 0x0  nop
    ctx->pc = 0x329534u;
    // NOP
label_329538:
    // 0x329538: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x329538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x32953c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x32953cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x329540: 0x24422c28  addiu       $v0, $v0, 0x2C28
    ctx->pc = 0x329540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11304));
    // 0x329544: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x329544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329548: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32954c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x32954cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329550: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x329550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x329554: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x329554u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x329558: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x329558u;
    {
        const bool branch_taken_0x329558 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x32955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329558u;
        // 0x32955c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329558) {
            ctx->pc = 0x329570u;
            goto label_329570;
        }
    }
    ctx->pc = 0x329560u;
    // 0x329560: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x329560u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x329564: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x329564u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x329568: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x329568u;
    {
        const bool branch_taken_0x329568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329568u;
        // 0x32956c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329568) {
            ctx->pc = 0x32964Cu;
            goto label_32964c;
        }
    }
    ctx->pc = 0x329570u;
label_329570:
    // 0x329570: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x329570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x329574: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x329574u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x329578: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x329578u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x32957c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x32957cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329580: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x329580u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x329584: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x329584u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x329588: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x329588u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x32958c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x32958cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x329590: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x329590u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x329594: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x329594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329598: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x329598u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x32959c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32959Cu;
    {
        const bool branch_taken_0x32959c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x32959c) {
            ctx->pc = 0x3295A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32959Cu;
            // 0x3295a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3295A4u;
            goto label_3295a4;
        }
    }
    ctx->pc = 0x3295A4u;
label_3295a4:
    // 0x3295a4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3295a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295a8: 0x1012  mflo        $v0
    ctx->pc = 0x3295a8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3295ac: 0x1810  mfhi        $v1
    ctx->pc = 0x3295acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3295b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3295b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3295b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3295b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3295b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3295b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3295bc: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x3295bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3295c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3295c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3295c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3295c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3295c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3295C8u;
    {
        const bool branch_taken_0x3295c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3295c8) {
            ctx->pc = 0x3295CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3295C8u;
            // 0x3295cc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3295F4u;
            goto label_3295f4;
        }
    }
    ctx->pc = 0x3295D0u;
    // 0x3295d0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3295d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3295d4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3295d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3295d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3295D8u;
    {
        const bool branch_taken_0x3295d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3295d8) {
            ctx->pc = 0x3295DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3295D8u;
            // 0x3295dc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3295F4u;
            goto label_3295f4;
        }
    }
    ctx->pc = 0x3295E0u;
    // 0x3295e0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3295e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3295e4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3295E4u;
    {
        const bool branch_taken_0x3295e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3295e4) {
            ctx->pc = 0x3295E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3295E4u;
            // 0x3295e8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3295F0u;
            goto label_3295f0;
        }
    }
    ctx->pc = 0x3295ECu;
    // 0x3295ec: 0x0  nop
    ctx->pc = 0x3295ecu;
    // NOP
label_3295f0:
    // 0x3295f0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3295f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3295f4:
    // 0x3295f4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3295f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3295f8: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x3295f8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3295fc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3295FCu;
    {
        const bool branch_taken_0x3295fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3295fc) {
            ctx->pc = 0x329600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3295FCu;
            // 0x329600: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329604u;
            goto label_329604;
        }
    }
    ctx->pc = 0x329604u;
label_329604:
    // 0x329604: 0x1012  mflo        $v0
    ctx->pc = 0x329604u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329608: 0x1810  mfhi        $v1
    ctx->pc = 0x329608u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32960c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32960cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329610: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329614: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329614u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329618: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x329618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x32961c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32961cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329620: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329624: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x329624u;
    {
        const bool branch_taken_0x329624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329624) {
            ctx->pc = 0x329628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329624u;
            // 0x329628: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32964Cu;
            goto label_32964c;
        }
    }
    ctx->pc = 0x32962Cu;
    // 0x32962c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x32962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329630: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x329630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329634: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329634u;
    {
        const bool branch_taken_0x329634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329634u;
        // 0x329638: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329634) {
            ctx->pc = 0x32964Cu;
            goto label_32964c;
        }
    }
    ctx->pc = 0x32963Cu;
    // 0x32963c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x32963cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329640: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329640u;
    {
        const bool branch_taken_0x329640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329640) {
            ctx->pc = 0x329644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329640u;
            // 0x329644: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329648u;
            goto label_329648;
        }
    }
    ctx->pc = 0x329648u;
label_329648:
    // 0x329648: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x329648u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_32964c:
    // 0x32964c: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x32964cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x329650: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x329650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329654: 0x0  nop
    ctx->pc = 0x329654u;
    // NOP
label_329658:
    // 0x329658: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x329658u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x32965c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32965Cu;
    {
        const bool branch_taken_0x32965c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32965c) {
            ctx->pc = 0x329660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32965Cu;
            // 0x329660: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329664u;
            goto label_329664;
        }
    }
    ctx->pc = 0x329664u;
label_329664:
    // 0x329664: 0x1012  mflo        $v0
    ctx->pc = 0x329664u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329668: 0x1810  mfhi        $v1
    ctx->pc = 0x329668u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32966c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32966cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329670: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329674: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329674u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329678: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x329678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x32967c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32967cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329680: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x329680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x329684: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x329684u;
    {
        const bool branch_taken_0x329684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329684) {
            ctx->pc = 0x329688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329684u;
            // 0x329688: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3296ACu;
            goto label_3296ac;
        }
    }
    ctx->pc = 0x32968Cu;
    // 0x32968c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x32968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329690: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x329690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x329694: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x329694u;
    {
        const bool branch_taken_0x329694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329694) {
            ctx->pc = 0x329698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329694u;
            // 0x329698: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3296ACu;
            goto label_3296ac;
        }
    }
    ctx->pc = 0x32969Cu;
    // 0x32969c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x32969cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3296a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3296A0u;
    {
        const bool branch_taken_0x3296a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3296a0) {
            ctx->pc = 0x3296A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3296A0u;
            // 0x3296a4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3296A8u;
            goto label_3296a8;
        }
    }
    ctx->pc = 0x3296A8u;
label_3296a8:
    // 0x3296a8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3296a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3296ac:
    // 0x3296ac: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3296acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3296b0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3296b0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3296b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3296B4u;
    {
        const bool branch_taken_0x3296b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3296b4) {
            ctx->pc = 0x3296B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3296B4u;
            // 0x3296b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3296BCu;
            goto label_3296bc;
        }
    }
    ctx->pc = 0x3296BCu;
label_3296bc:
    // 0x3296bc: 0x1012  mflo        $v0
    ctx->pc = 0x3296bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3296c0: 0x1810  mfhi        $v1
    ctx->pc = 0x3296c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3296c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3296c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3296c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3296c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3296cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3296ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3296d0: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3296d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3296d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3296d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3296d8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3296d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3296dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3296DCu;
    {
        const bool branch_taken_0x3296dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3296dc) {
            ctx->pc = 0x3296FCu;
            goto label_3296fc;
        }
    }
    ctx->pc = 0x3296E4u;
    // 0x3296e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3296e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3296e8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3296e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3296ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3296ECu;
    {
        const bool branch_taken_0x3296ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3296F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296ECu;
        // 0x3296f0: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296ec) {
            ctx->pc = 0x3296FCu;
            goto label_3296fc;
        }
    }
    ctx->pc = 0x3296F4u;
    // 0x3296f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3296F4u;
    {
        const bool branch_taken_0x3296f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3296f4) {
            ctx->pc = 0x3296F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3296F4u;
            // 0x3296f8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3296FCu;
            goto label_3296fc;
        }
    }
    ctx->pc = 0x3296FCu;
label_3296fc:
    // 0x3296fc: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x3296FCu;
    {
        const bool branch_taken_0x3296fc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x329700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296FCu;
        // 0x329700: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296fc) {
            ctx->pc = 0x32995Cu;
            goto label_32995c;
        }
    }
    ctx->pc = 0x329704u;
    // 0x329704: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x329704u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x329708: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x329708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32970c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x32970Cu;
    {
        const bool branch_taken_0x32970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32970Cu;
        // 0x329710: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32970c) {
            ctx->pc = 0x329958u;
            goto label_329958;
        }
    }
    ctx->pc = 0x329714u;
label_329714:
    // 0x329714: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x329714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329718: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329718u;
    {
        const bool branch_taken_0x329718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329718u;
        // 0x32971c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329718) {
            ctx->pc = 0x329734u;
            goto label_329734;
        }
    }
    ctx->pc = 0x329720u;
    // 0x329720: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x329720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x329724: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x329724u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x329728: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x329728u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x32972c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x32972Cu;
    {
        const bool branch_taken_0x32972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32972Cu;
        // 0x329730: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32972c) {
            ctx->pc = 0x32995Cu;
            goto label_32995c;
        }
    }
    ctx->pc = 0x329734u;
label_329734:
    // 0x329734: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x329734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x329738: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x329738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x32973c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32973Cu;
    {
        const bool branch_taken_0x32973c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32973Cu;
        // 0x329740: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32973c) {
            ctx->pc = 0x329758u;
            goto label_329758;
        }
    }
    ctx->pc = 0x329744u;
    // 0x329744: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x329744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x329748: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x329748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32974c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32974Cu;
    {
        const bool branch_taken_0x32974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32974Cu;
        // 0x329750: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32974c) {
            ctx->pc = 0x329770u;
            goto label_329770;
        }
    }
    ctx->pc = 0x329754u;
    // 0x329754: 0x0  nop
    ctx->pc = 0x329754u;
    // NOP
label_329758:
    // 0x329758: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x329758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x32975c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x329760: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329764: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x329764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329768: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x329768u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    // 0x32976c: 0x0  nop
    ctx->pc = 0x32976cu;
    // NOP
label_329770:
    // 0x329770: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x329770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x329774: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x329774u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x329778: 0x24422c28  addiu       $v0, $v0, 0x2C28
    ctx->pc = 0x329778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11304));
    // 0x32977c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x32977cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329780: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329784: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x329784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329788: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x329788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32978c: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x32978cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x329790: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x329790u;
    {
        const bool branch_taken_0x329790 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x329794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329790u;
        // 0x329794: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329790) {
            ctx->pc = 0x3297D8u;
            goto label_3297d8;
        }
    }
    ctx->pc = 0x329798u;
    // 0x329798: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x329798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x32979c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32979Cu;
    {
        const bool branch_taken_0x32979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3297A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32979Cu;
        // 0x3297a0: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32979c) {
            ctx->pc = 0x3297B0u;
            goto label_3297b0;
        }
    }
    ctx->pc = 0x3297A4u;
    // 0x3297a4: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x3297a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3297a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3297A8u;
    {
        const bool branch_taken_0x3297a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3297a8) {
            ctx->pc = 0x3297C0u;
            goto label_3297c0;
        }
    }
    ctx->pc = 0x3297B0u;
label_3297b0:
    // 0x3297b0: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x3297b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3297b4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3297b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3297b8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3297b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3297bc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3297bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3297c0:
    // 0x3297c0: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x3297C0u;
    {
        const bool branch_taken_0x3297c0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297C0u;
        // 0x3297c4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297c0) {
            ctx->pc = 0x32995Cu;
            goto label_32995c;
        }
    }
    ctx->pc = 0x3297C8u;
    // 0x3297c8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3297c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3297cc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3297ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3297d0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3297D0u;
    {
        const bool branch_taken_0x3297d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297D0u;
        // 0x3297d4: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297d0) {
            ctx->pc = 0x329958u;
            goto label_329958;
        }
    }
    ctx->pc = 0x3297D8u;
label_3297d8:
    // 0x3297d8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3297d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3297dc: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x3297dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x3297e0: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3297e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3297e4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3297e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3297e8: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x3297e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x3297ec: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3297ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3297f0: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x3297f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3297f4: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3297f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3297f8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3297f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3297fc: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x3297fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x329800: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x329800u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x329804: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x329804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x329808: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x329808u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x32980c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32980Cu;
    {
        const bool branch_taken_0x32980c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32980c) {
            ctx->pc = 0x329810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32980Cu;
            // 0x329810: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329814u;
            goto label_329814;
        }
    }
    ctx->pc = 0x329814u;
label_329814:
    // 0x329814: 0x1012  mflo        $v0
    ctx->pc = 0x329814u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329818: 0x1810  mfhi        $v1
    ctx->pc = 0x329818u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32981c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x32981cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329820: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329824: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x329824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329828: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329828u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32982c: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x32982cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x329830: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x329830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x329834: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x329834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x329838: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x329838u;
    {
        const bool branch_taken_0x329838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329838) {
            ctx->pc = 0x32983Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329838u;
            // 0x32983c: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32986Cu;
            goto label_32986c;
        }
    }
    ctx->pc = 0x329840u;
    // 0x329840: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x329840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x329844: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x329844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x329848: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x329848u;
    {
        const bool branch_taken_0x329848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329848u;
        // 0x32984c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329848) {
            ctx->pc = 0x329868u;
            goto label_329868;
        }
    }
    ctx->pc = 0x329850u;
    // 0x329850: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x329850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x329854: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x329854u;
    {
        const bool branch_taken_0x329854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329854) {
            ctx->pc = 0x329858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329854u;
            // 0x329858: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32986Cu;
            goto label_32986c;
        }
    }
    ctx->pc = 0x32985Cu;
    // 0x32985c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x32985cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x329860: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x329860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x329864: 0x0  nop
    ctx->pc = 0x329864u;
    // NOP
label_329868:
    // 0x329868: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x329868u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_32986c:
    // 0x32986c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32986Cu;
    {
        const bool branch_taken_0x32986c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32986c) {
            ctx->pc = 0x329870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32986Cu;
            // 0x329870: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x329874u;
            goto label_329874;
        }
    }
    ctx->pc = 0x329874u;
label_329874:
    // 0x329874: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x329874u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x329878: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x329878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x32987c: 0x1012  mflo        $v0
    ctx->pc = 0x32987cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x329880: 0x1810  mfhi        $v1
    ctx->pc = 0x329880u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329884: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x329884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329888: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32988c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x32988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x329890: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x329890u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329894: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x329894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x329898: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x329898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32989c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x32989cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3298a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3298A0u;
    {
        const bool branch_taken_0x3298a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298A0u;
        // 0x3298a4: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298a0) {
            ctx->pc = 0x3298D0u;
            goto label_3298d0;
        }
    }
    ctx->pc = 0x3298A8u;
    // 0x3298a8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3298a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3298ac: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3298acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3298b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3298B0u;
    {
        const bool branch_taken_0x3298b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3298B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298B0u;
        // 0x3298b4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298b0) {
            ctx->pc = 0x3298CCu;
            goto label_3298cc;
        }
    }
    ctx->pc = 0x3298B8u;
    // 0x3298b8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3298b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3298bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3298BCu;
    {
        const bool branch_taken_0x3298bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298BCu;
        // 0x3298c0: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298bc) {
            ctx->pc = 0x3298D0u;
            goto label_3298d0;
        }
    }
    ctx->pc = 0x3298C4u;
    // 0x3298c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3298c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3298c8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3298c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3298cc:
    // 0x3298cc: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3298ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_3298d0:
    // 0x3298d0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x3298d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3298d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3298d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3298d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3298d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3298dc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3298dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3298e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3298e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3298e4: 0x480019  multu       $v0, $t0
    ctx->pc = 0x3298e4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3298e8: 0x3810  mfhi        $a3
    ctx->pc = 0x3298e8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3298ec: 0x3012  mflo        $a2
    ctx->pc = 0x3298ecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3298f0: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x3298f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3298f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3298F4u;
    {
        const bool branch_taken_0x3298f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3298F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298F4u;
        // 0x3298f8: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298f4) {
            ctx->pc = 0x329910u;
            goto label_329910;
        }
    }
    ctx->pc = 0x3298FCu;
    // 0x3298fc: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3298FCu;
    {
        const bool branch_taken_0x3298fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x329900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298FCu;
        // 0x329900: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298fc) {
            ctx->pc = 0x329920u;
            goto label_329920;
        }
    }
    ctx->pc = 0x329904u;
    // 0x329904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329904u;
    {
        const bool branch_taken_0x329904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329904) {
            ctx->pc = 0x329920u;
            goto label_329920;
        }
    }
    ctx->pc = 0x32990Cu;
    // 0x32990c: 0x0  nop
    ctx->pc = 0x32990cu;
    // NOP
label_329910:
    // 0x329910: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x329910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x329914: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x329914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x329918: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x329918u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32991c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32991cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329920:
    // 0x329920: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x329920u;
    {
        const bool branch_taken_0x329920 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x329924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329920u;
        // 0x329924: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329920) {
            ctx->pc = 0x32995Cu;
            goto label_32995c;
        }
    }
    ctx->pc = 0x329928u;
    // 0x329928: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x329928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x32992c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x32992cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x329930: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x329930u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329934: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x329934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x329938: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x329938u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x32993c: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x32993cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x329940: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x329940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x329944: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x329944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x329948: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x329948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32994c: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x32994cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x329950: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x329950u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x329954: 0x0  nop
    ctx->pc = 0x329954u;
    // NOP
label_329958:
    // 0x329958: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x329958u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_32995c:
    // 0x32995c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32995Cu;
    {
        const bool branch_taken_0x32995c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32995Cu;
        // 0x329960: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32995c) {
            ctx->pc = 0x3299B8u;
            goto label_3299b8;
        }
    }
    ctx->pc = 0x329964u;
    // 0x329964: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x329964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x329968: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x329968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x32996c: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x32996cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x329970: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x329970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329974: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x329974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x329978: 0x21023  negu        $v0, $v0
    ctx->pc = 0x329978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x32997c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32997cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x329980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x329984: 0x31823  negu        $v1, $v1
    ctx->pc = 0x329984u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x329988: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x329988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x32998c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x32998cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x329990: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x329990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x329994: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x329994u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x329998: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x329998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x32999c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x32999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3299a0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x3299a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3299a4: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x3299a4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x3299a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3299a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3299ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3299acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3299b0: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x3299b0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x3299b4: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x3299b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_3299b8:
    // 0x3299b8: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3299b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3299bc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3299bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3299c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3299C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299C0u;
        // 0x3299c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3299C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3299C8u;
}

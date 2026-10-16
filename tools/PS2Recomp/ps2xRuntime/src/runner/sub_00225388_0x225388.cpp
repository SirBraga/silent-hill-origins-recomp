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

// Function: sub_00225388
// Address: 0x225388 - 0x225578
void sub_00225388_0x225388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225388_0x225388");
#endif

    switch (ctx->pc) {
        case 0x2253b0u: goto label_2253b0;
        case 0x2253d0u: goto label_2253d0;
        case 0x2253f0u: goto label_2253f0;
        case 0x225410u: goto label_225410;
        case 0x225430u: goto label_225430;
        case 0x225450u: goto label_225450;
        case 0x225470u: goto label_225470;
        case 0x225490u: goto label_225490;
        case 0x2254b0u: goto label_2254b0;
        case 0x2254d0u: goto label_2254d0;
        case 0x2254f0u: goto label_2254f0;
        case 0x225510u: goto label_225510;
        case 0x225518u: goto label_225518;
        case 0x225538u: goto label_225538;
        case 0x225558u: goto label_225558;
        default: break;
    }

    ctx->pc = 0x225388u;

    // 0x225388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22538c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x22538cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x225390: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x225390u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x225394: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22539c: 0x24c6a008  addiu       $a2, $a2, -0x5FF8
    ctx->pc = 0x22539cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942728));
    // 0x2253a0: 0x24e7a048  addiu       $a3, $a3, -0x5FB8
    ctx->pc = 0x2253a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942792));
    // 0x2253a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2253a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2253a8: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2253A8u;
    SET_GPR_U32(ctx, 31, 0x2253B0u);
    ctx->pc = 0x2253ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253A8u;
    // 0x2253ac: 0x2405040f  addiu       $a1, $zero, 0x40F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2253A8u, 0x2253B0u)) {
        return;
    }
    ctx->pc = 0x2253B0u;
label_2253b0:
    // 0x2253b0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2253b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2253b4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2253b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2253b8: 0x24c6ecc8  addiu       $a2, $a2, -0x1338
    ctx->pc = 0x2253b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962376));
    // 0x2253bc: 0x24e7eca8  addiu       $a3, $a3, -0x1358
    ctx->pc = 0x2253bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962344));
    // 0x2253c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2253c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253c4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2253c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2253c8: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2253C8u;
    SET_GPR_U32(ctx, 31, 0x2253D0u);
    ctx->pc = 0x2253CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253C8u;
    // 0x2253cc: 0x24050401  addiu       $a1, $zero, 0x401 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2253C8u, 0x2253D0u)) {
        return;
    }
    ctx->pc = 0x2253D0u;
label_2253d0:
    // 0x2253d0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2253d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2253d4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2253d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2253d8: 0x24c69fc8  addiu       $a2, $a2, -0x6038
    ctx->pc = 0x2253d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942664));
    // 0x2253dc: 0x24e79fe8  addiu       $a3, $a3, -0x6018
    ctx->pc = 0x2253dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942696));
    // 0x2253e0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2253e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2253e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2253e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253e8: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2253E8u;
    SET_GPR_U32(ctx, 31, 0x2253F0u);
    ctx->pc = 0x2253ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253E8u;
    // 0x2253ec: 0x2405040d  addiu       $a1, $zero, 0x40D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2253E8u, 0x2253F0u)) {
        return;
    }
    ctx->pc = 0x2253F0u;
label_2253f0:
    // 0x2253f0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2253f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2253f4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2253f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2253f8: 0x24c6b3f8  addiu       $a2, $a2, -0x4C08
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947832));
    // 0x2253fc: 0x24e7b378  addiu       $a3, $a3, -0x4C88
    ctx->pc = 0x2253fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947704));
    // 0x225400: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x225404: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x225404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x225408: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225408u;
    SET_GPR_U32(ctx, 31, 0x225410u);
    ctx->pc = 0x22540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225408u;
    // 0x22540c: 0x24050402  addiu       $a1, $zero, 0x402 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225408u, 0x225410u)) {
        return;
    }
    ctx->pc = 0x225410u;
label_225410:
    // 0x225410: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x225410u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x225414: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x225414u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x225418: 0x24c65de0  addiu       $a2, $a2, 0x5DE0
    ctx->pc = 0x225418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24032));
    // 0x22541c: 0x24e75e78  addiu       $a3, $a3, 0x5E78
    ctx->pc = 0x22541cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24184));
    // 0x225420: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x225424: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x225424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225428: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225428u;
    SET_GPR_U32(ctx, 31, 0x225430u);
    ctx->pc = 0x22542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225428u;
    // 0x22542c: 0x24050403  addiu       $a1, $zero, 0x403 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225428u, 0x225430u)) {
        return;
    }
    ctx->pc = 0x225430u;
label_225430:
    // 0x225430: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x225430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x225434: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x225434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x225438: 0x24c6d108  addiu       $a2, $a2, -0x2EF8
    ctx->pc = 0x225438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955272));
    // 0x22543c: 0x24e7d190  addiu       $a3, $a3, -0x2E70
    ctx->pc = 0x22543cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955408));
    // 0x225440: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225440u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x225444: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x225444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225448: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225448u;
    SET_GPR_U32(ctx, 31, 0x225450u);
    ctx->pc = 0x22544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225448u;
    // 0x22544c: 0x24050404  addiu       $a1, $zero, 0x404 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225448u, 0x225450u)) {
        return;
    }
    ctx->pc = 0x225450u;
label_225450:
    // 0x225450: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x225450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x225454: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x225458: 0x24c64dd8  addiu       $a2, $a2, 0x4DD8
    ctx->pc = 0x225458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19928));
    // 0x22545c: 0x24e74d58  addiu       $a3, $a3, 0x4D58
    ctx->pc = 0x22545cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19800));
    // 0x225460: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225460u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x225464: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x225464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225468: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225468u;
    SET_GPR_U32(ctx, 31, 0x225470u);
    ctx->pc = 0x22546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225468u;
    // 0x22546c: 0x24050405  addiu       $a1, $zero, 0x405 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225468u, 0x225470u)) {
        return;
    }
    ctx->pc = 0x225470u;
label_225470:
    // 0x225470: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x225470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x225474: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x225474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x225478: 0x24c66910  addiu       $a2, $a2, 0x6910
    ctx->pc = 0x225478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26896));
    // 0x22547c: 0x24e76ae0  addiu       $a3, $a3, 0x6AE0
    ctx->pc = 0x22547cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27360));
    // 0x225480: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x225484: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x225484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x225488: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225488u;
    SET_GPR_U32(ctx, 31, 0x225490u);
    ctx->pc = 0x22548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225488u;
    // 0x22548c: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225488u, 0x225490u)) {
        return;
    }
    ctx->pc = 0x225490u;
label_225490:
    // 0x225490: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x225490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x225494: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x225498: 0x24c68888  addiu       $a2, $a2, -0x7778
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936712));
    // 0x22549c: 0x24e78808  addiu       $a3, $a3, -0x77F8
    ctx->pc = 0x22549cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936584));
    // 0x2254a0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2254a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2254a4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2254a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2254a8: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2254A8u;
    SET_GPR_U32(ctx, 31, 0x2254B0u);
    ctx->pc = 0x2254ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2254A8u;
    // 0x2254ac: 0x24050407  addiu       $a1, $zero, 0x407 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2254A8u, 0x2254B0u)) {
        return;
    }
    ctx->pc = 0x2254B0u;
label_2254b0:
    // 0x2254b0: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x2254b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x2254b4: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x2254b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x2254b8: 0x24c6b420  addiu       $a2, $a2, -0x4BE0
    ctx->pc = 0x2254b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947872));
    // 0x2254bc: 0x24e7b2d0  addiu       $a3, $a3, -0x4D30
    ctx->pc = 0x2254bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947536));
    // 0x2254c0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2254c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2254c4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2254c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2254c8: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2254C8u;
    SET_GPR_U32(ctx, 31, 0x2254D0u);
    ctx->pc = 0x2254CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2254C8u;
    // 0x2254cc: 0x24050408  addiu       $a1, $zero, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2254C8u, 0x2254D0u)) {
        return;
    }
    ctx->pc = 0x2254D0u;
label_2254d0:
    // 0x2254d0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2254d4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2254d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2254d8: 0x24c68a40  addiu       $a2, $a2, -0x75C0
    ctx->pc = 0x2254d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937152));
    // 0x2254dc: 0x24e78a78  addiu       $a3, $a3, -0x7588
    ctx->pc = 0x2254dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937208));
    // 0x2254e0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2254e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2254e4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2254e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2254e8: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2254E8u;
    SET_GPR_U32(ctx, 31, 0x2254F0u);
    ctx->pc = 0x2254ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2254E8u;
    // 0x2254ec: 0x24050409  addiu       $a1, $zero, 0x409 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2254E8u, 0x2254F0u)) {
        return;
    }
    ctx->pc = 0x2254F0u;
label_2254f0:
    // 0x2254f0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2254f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2254f4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2254f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2254f8: 0x24c6efb0  addiu       $a2, $a2, -0x1050
    ctx->pc = 0x2254f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963120));
    // 0x2254fc: 0x24e7f038  addiu       $a3, $a3, -0xFC8
    ctx->pc = 0x2254fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963256));
    // 0x225500: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x225500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225504: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x225504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x225508: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225508u;
    SET_GPR_U32(ctx, 31, 0x225510u);
    ctx->pc = 0x22550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225508u;
    // 0x22550c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225508u, 0x225510u)) {
        return;
    }
    ctx->pc = 0x225510u;
label_225510:
    // 0x225510: 0xc0922a8  jal         func_248AA0
    ctx->pc = 0x225510u;
    SET_GPR_U32(ctx, 31, 0x225518u);
    ctx->pc = 0x225514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225510u;
    // 0x225514: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248AA0u, 0x225510u, 0x225518u)) {
        return;
    }
    ctx->pc = 0x225518u;
label_225518:
    // 0x225518: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x225518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x22551c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x22551cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x225520: 0x24c68980  addiu       $a2, $a2, -0x7680
    ctx->pc = 0x225520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936960));
    // 0x225524: 0x24e78910  addiu       $a3, $a3, -0x76F0
    ctx->pc = 0x225524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936848));
    // 0x225528: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225528u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x22552c: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x22552cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x225530: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225530u;
    SET_GPR_U32(ctx, 31, 0x225538u);
    ctx->pc = 0x225534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225530u;
    // 0x225534: 0x2405040a  addiu       $a1, $zero, 0x40A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225530u, 0x225538u)) {
        return;
    }
    ctx->pc = 0x225538u;
label_225538:
    // 0x225538: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x225538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x22553c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x225540: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225540u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x225544: 0x24c6cc58  addiu       $a2, $a2, -0x33A8
    ctx->pc = 0x225544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954072));
    // 0x225548: 0x24e7ccc0  addiu       $a3, $a3, -0x3340
    ctx->pc = 0x225548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954176));
    // 0x22554c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x22554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x225550: 0xc0895e6  jal         func_225798
    ctx->pc = 0x225550u;
    SET_GPR_U32(ctx, 31, 0x225558u);
    ctx->pc = 0x225554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225550u;
    // 0x225554: 0x2405040b  addiu       $a1, $zero, 0x40B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x225550u, 0x225558u)) {
        return;
    }
    ctx->pc = 0x225558u;
label_225558:
    // 0x225558: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x225558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x22555c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22555cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225560: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x225560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225564: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x225564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x225568: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22556c: 0x3e00008  jr          $ra
    ctx->pc = 0x22556Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22556Cu;
        // 0x225570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22556Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225574u;
    // 0x225574: 0x0  nop
    ctx->pc = 0x225574u;
    // NOP
    ctx->pc = 0x225578u;
}

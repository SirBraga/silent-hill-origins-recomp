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

// Function: sub_001FA348
// Address: 0x1fa348 - 0x1fa6bc
void sub_001FA348_0x1fa348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA348_0x1fa348");
#endif

    switch (ctx->pc) {
        case 0x1fa458u: goto label_1fa458;
        case 0x1fa464u: goto label_1fa464;
        case 0x1fa4a8u: goto label_1fa4a8;
        case 0x1fa4c8u: goto label_1fa4c8;
        case 0x1fa4d4u: goto label_1fa4d4;
        case 0x1fa510u: goto label_1fa510;
        case 0x1fa51cu: goto label_1fa51c;
        case 0x1fa540u: goto label_1fa540;
        case 0x1fa55cu: goto label_1fa55c;
        case 0x1fa574u: goto label_1fa574;
        case 0x1fa580u: goto label_1fa580;
        case 0x1fa5e4u: goto label_1fa5e4;
        case 0x1fa634u: goto label_1fa634;
        case 0x1fa658u: goto label_1fa658;
        case 0x1fa6acu: goto label_1fa6ac;
        default: break;
    }

    ctx->pc = 0x1fa348u;

    // 0x1fa348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fa34c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1fa34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1fa350: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1fa350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1fa354: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fa354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa358: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fa358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fa35c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fa35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa360: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fa360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fa364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa368: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1fa368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa36c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1fa36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1fa370: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA370u;
    {
        const bool branch_taken_0x1fa370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA370u;
        // 0x1fa374: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa370) {
            ctx->pc = 0x1FA38Cu;
            goto label_1fa38c;
        }
    }
    ctx->pc = 0x1FA378u;
    // 0x1fa378: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fa378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fa37c: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x1fa37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1fa380: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa384: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FA384u;
    {
        const bool branch_taken_0x1fa384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA384u;
        // 0x1fa388: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa384) {
            ctx->pc = 0x1FA424u;
            goto label_1fa424;
        }
    }
    ctx->pc = 0x1FA38Cu;
label_1fa38c:
    // 0x1fa38c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1fa38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1fa390: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA390u;
    {
        const bool branch_taken_0x1fa390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA390u;
        // 0x1fa394: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa390) {
            ctx->pc = 0x1FA3A4u;
            goto label_1fa3a4;
        }
    }
    ctx->pc = 0x1FA398u;
    // 0x1fa398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa39c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1FA39Cu;
    {
        const bool branch_taken_0x1fa39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA39Cu;
        // 0x1fa3a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa39c) {
            ctx->pc = 0x1FA45Cu;
            goto label_1fa45c;
        }
    }
    ctx->pc = 0x1FA3A4u;
label_1fa3a4:
    // 0x1fa3a4: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x1fa3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x1fa3a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA3A8u;
    {
        const bool branch_taken_0x1fa3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3A8u;
        // 0x1fa3ac: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3a8) {
            ctx->pc = 0x1FA3C0u;
            goto label_1fa3c0;
        }
    }
    ctx->pc = 0x1FA3B0u;
    // 0x1fa3b0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1fa3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa3b4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1fa3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1fa3b8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1FA3B8u;
    {
        const bool branch_taken_0x1fa3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3B8u;
        // 0x1fa3bc: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3b8) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA3C0u;
label_1fa3c0:
    // 0x1fa3c0: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x1fa3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x1fa3c4: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1FA3C4u;
    {
        const bool branch_taken_0x1fa3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3C4u;
        // 0x1fa3c8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3c4) {
            ctx->pc = 0x1FA6BCu;
            return;
        }
    }
    ctx->pc = 0x1FA3CCu;
    // 0x1fa3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa3d0: 0x24422d40  addiu       $v0, $v0, 0x2D40
    ctx->pc = 0x1fa3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11584));
    // 0x1fa3d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa3d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa3dc: 0x800008  jr          $a0
    ctx->pc = 0x1FA3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA3E4u: goto label_1fa3e4;
            case 0x1FA3F8u: goto label_1fa3f8;
            case 0x1FA408u: goto label_1fa408;
            case 0x1FA430u: goto label_1fa430;
            case 0x1FA44Cu: goto label_1fa44c;
            case 0x1FA49Cu: goto label_1fa49c;
            case 0x1FA4BCu: goto label_1fa4bc;
            case 0x1FA504u: goto label_1fa504;
            case 0x1FA534u: goto label_1fa534;
            case 0x1FA550u: goto label_1fa550;
            case 0x1FA56Cu: goto label_1fa56c;
            case 0x1FA5D4u: goto label_1fa5d4;
            case 0x1FA63Cu: goto label_1fa63c;
            case 0x1FA6A0u: goto label_1fa6a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA3DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FA3E4u;
label_1fa3e4:
    // 0x1fa3e4: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1fa3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1fa3e8: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1fa3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1fa3ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fa3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1fa3f0: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1FA3F0u;
    {
        const bool branch_taken_0x1fa3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3F0u;
        // 0x1fa3f4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3f0) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA3F8u;
label_1fa3f8:
    // 0x1fa3f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1fa3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa3fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fa3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa400: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FA400u;
    {
        const bool branch_taken_0x1fa400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA400u;
        // 0x1fa404: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa400) {
            ctx->pc = 0x1FA440u;
            goto label_1fa440;
        }
    }
    ctx->pc = 0x1FA408u;
label_1fa408:
    // 0x1fa408: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1fa408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1fa40c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1fa40cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa410: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1fa410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1fa414: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa418: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1fa418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1fa41c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1fa41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1fa420: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1fa424:
    // 0x1fa424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa428: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1FA428u;
    {
        const bool branch_taken_0x1fa428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA428u;
        // 0x1fa42c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa428) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA430u;
label_1fa430:
    // 0x1fa430: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x1fa430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1fa434: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x1fa434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1fa438: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fa438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa43c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fa43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1fa440:
    // 0x1fa440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa444: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1FA444u;
    {
        const bool branch_taken_0x1fa444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA444u;
        // 0x1fa448: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa444) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA44Cu;
label_1fa44c:
    // 0x1fa44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa450: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA450u;
    SET_GPR_U32(ctx, 31, 0x1FA458u);
    ctx->pc = 0x1FA454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA450u;
    // 0x1fa454: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA450u, 0x1FA458u)) {
        return;
    }
    ctx->pc = 0x1FA458u;
label_1fa458:
    // 0x1fa458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa45c:
    // 0x1fa45c: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA45Cu;
    SET_GPR_U32(ctx, 31, 0x1FA464u);
    ctx->pc = 0x1FA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA45Cu;
    // 0x1fa460: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA45Cu, 0x1FA464u)) {
        return;
    }
    ctx->pc = 0x1FA464u;
label_1fa464:
    // 0x1fa464: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa46c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1fa46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fa470: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fa470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa474: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fa474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fa478: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1fa478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fa47c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fa47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fa480: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa484: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1fa484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fa488: 0xa046029c  sb          $a2, 0x29C($v0)
    ctx->pc = 0x1fa488u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 668), (uint8_t)GPR_U32(ctx, 6));
    // 0x1fa48c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fa48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fa490: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa494: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1FA494u;
    {
        const bool branch_taken_0x1fa494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA494u;
        // 0x1fa498: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa494) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA49Cu;
label_1fa49c:
    // 0x1fa49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4a0: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA4A0u;
    SET_GPR_U32(ctx, 31, 0x1FA4A8u);
    ctx->pc = 0x1FA4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA4A0u;
    // 0x1fa4a4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA4A0u, 0x1FA4A8u)) {
        return;
    }
    ctx->pc = 0x1FA4A8u;
label_1fa4a8:
    // 0x1fa4a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fa4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fa4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4b0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1fa4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fa4b4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1FA4B4u;
    {
        const bool branch_taken_0x1fa4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4B4u;
        // 0x1fa4b8: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4b4) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA4BCu;
label_1fa4bc:
    // 0x1fa4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4c0: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA4C0u;
    SET_GPR_U32(ctx, 31, 0x1FA4C8u);
    ctx->pc = 0x1FA4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA4C0u;
    // 0x1fa4c4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA4C0u, 0x1FA4C8u)) {
        return;
    }
    ctx->pc = 0x1FA4C8u;
label_1fa4c8:
    // 0x1fa4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4cc: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA4CCu;
    SET_GPR_U32(ctx, 31, 0x1FA4D4u);
    ctx->pc = 0x1FA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA4CCu;
    // 0x1fa4d0: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA4CCu, 0x1FA4D4u)) {
        return;
    }
    ctx->pc = 0x1FA4D4u;
label_1fa4d4:
    // 0x1fa4d4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fa4d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa4e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa4e4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fa4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fa4e8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1fa4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1fa4ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa4f0: 0xa085029c  sb          $a1, 0x29C($a0)
    ctx->pc = 0x1fa4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 668), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fa4f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fa4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fa4f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fa4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fa4fc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1FA4FCu;
    {
        const bool branch_taken_0x1fa4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4FCu;
        // 0x1fa500: 0xfc430018  sd          $v1, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4fc) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA504u;
label_1fa504:
    // 0x1fa504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa508: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA508u;
    SET_GPR_U32(ctx, 31, 0x1FA510u);
    ctx->pc = 0x1FA50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA508u;
    // 0x1fa50c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA508u, 0x1FA510u)) {
        return;
    }
    ctx->pc = 0x1FA510u;
label_1fa510:
    // 0x1fa510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa514: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA514u;
    SET_GPR_U32(ctx, 31, 0x1FA51Cu);
    ctx->pc = 0x1FA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA514u;
    // 0x1fa518: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA514u, 0x1FA51Cu)) {
        return;
    }
    ctx->pc = 0x1FA51Cu;
label_1fa51c:
    // 0x1fa51c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa520: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x1fa520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fa524: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fa524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa528: 0xa6230298  sh          $v1, 0x298($s1)
    ctx->pc = 0x1fa528u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa52c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1FA52Cu;
    {
        const bool branch_taken_0x1fa52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA52Cu;
        // 0x1fa530: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa52c) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA534u;
label_1fa534:
    // 0x1fa534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa538: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA538u;
    SET_GPR_U32(ctx, 31, 0x1FA540u);
    ctx->pc = 0x1FA53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA538u;
    // 0x1fa53c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA538u, 0x1FA540u)) {
        return;
    }
    ctx->pc = 0x1FA540u;
label_1fa540:
    // 0x1fa540: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x1fa540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fa544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa548: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1FA548u;
    {
        const bool branch_taken_0x1fa548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA548u;
        // 0x1fa54c: 0xa6230298  sh          $v1, 0x298($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa548) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA550u;
label_1fa550:
    // 0x1fa550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa554: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA554u;
    SET_GPR_U32(ctx, 31, 0x1FA55Cu);
    ctx->pc = 0x1FA558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA554u;
    // 0x1fa558: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA554u, 0x1FA55Cu)) {
        return;
    }
    ctx->pc = 0x1FA55Cu;
label_1fa55c:
    // 0x1fa55c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fa55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa564: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1FA564u;
    {
        const bool branch_taken_0x1fa564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA564u;
        // 0x1fa568: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa564) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA56Cu;
label_1fa56c:
    // 0x1fa56c: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x1FA56Cu;
    SET_GPR_U32(ctx, 31, 0x1FA574u);
    ctx->pc = 0x1FA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA56Cu;
    // 0x1fa570: 0x240402f8  addiu       $a0, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1FA56Cu, 0x1FA574u)) {
        return;
    }
    ctx->pc = 0x1FA574u;
label_1fa574:
    // 0x1fa574: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x1fa574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x1fa578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa57c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1fa57cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa580:
    // 0x1fa580: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1fa580u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa584: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1fa584u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fa588: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1fa588u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fa58c: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1fa58cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1fa590: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1fa590u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1fa594: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1fa594u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1fa598: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1fa598u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1fa59c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1fa59cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1fa5a0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1fa5a4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1fa5a8: 0x0  nop
    ctx->pc = 0x1fa5a8u;
    // NOP
    // 0x1fa5ac: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FA5ACu;
    {
        const bool branch_taken_0x1fa5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fa5ac) {
            ctx->pc = 0x1FA580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa580;
        }
    }
    ctx->pc = 0x1FA5B4u;
    // 0x1fa5b4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1fa5b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa5b8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1fa5b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fa5bc: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1fa5bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fa5c0: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1fa5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1fa5c4: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1fa5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1fa5c8: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1fa5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1fa5cc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1FA5CCu;
    {
        const bool branch_taken_0x1fa5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5CCu;
        // 0x1fa5d0: 0xae2202f0  sw          $v0, 0x2F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5cc) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA5D4u;
label_1fa5d4:
    // 0x1fa5d4: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x1fa5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x1fa5d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fa5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5dc: 0x248202e0  addiu       $v0, $a0, 0x2E0
    ctx->pc = 0x1fa5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x1fa5e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fa5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa5e4:
    // 0x1fa5e4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1fa5e4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa5e8: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1fa5e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fa5ec: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1fa5ecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1fa5f0: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x1fa5f0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1fa5f4: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x1fa5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x1fa5f8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1fa5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1fa5fc: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1fa5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x1fa600: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1fa600u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x1fa604: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1fa604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1fa608: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1fa608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1fa60c: 0x0  nop
    ctx->pc = 0x1fa60cu;
    // NOP
    // 0x1fa610: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FA610u;
    {
        const bool branch_taken_0x1fa610 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fa610) {
            ctx->pc = 0x1FA5E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa5e4;
        }
    }
    ctx->pc = 0x1FA618u;
    // 0x1fa618: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1fa618u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa61c: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1fa61cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fa620: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1fa620u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1fa624: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x1fa624u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x1fa628: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1fa628u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1fa62c: 0xc0c5486  jal         func_315218
    ctx->pc = 0x1FA62Cu;
    SET_GPR_U32(ctx, 31, 0x1FA634u);
    ctx->pc = 0x1FA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA62Cu;
    // 0x1fa630: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x1FA62Cu, 0x1FA634u)) {
        return;
    }
    ctx->pc = 0x1FA634u;
label_1fa634:
    // 0x1fa634: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1FA634u;
    {
        const bool branch_taken_0x1fa634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA634u;
        // 0x1fa638: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa634) {
            ctx->pc = 0x1FA6C8u;
            return;
        }
    }
    ctx->pc = 0x1FA63Cu;
label_1fa63c:
    // 0x1fa63c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1fa640: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fa640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1fa644: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1fa644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1fa648: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fa648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1fa64c: 0x2629029c  addiu       $t1, $s1, 0x29C
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x1fa650: 0x26280018  addiu       $t0, $s1, 0x18
    ctx->pc = 0x1fa650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1fa654: 0x0  nop
    ctx->pc = 0x1fa654u;
    // NOP
label_1fa658:
    // 0x1fa658: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x1fa658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1fa65c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x1fa65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fa660: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x1fa660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1fa664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa66c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1fa66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fa670: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1fa670u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa674: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fa674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fa678: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1fa678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1fa67c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fa680: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1fa680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1fa684: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fa684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa688: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1fa688u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1fa68c: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x1fa68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fa690: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FA690u;
    {
        const bool branch_taken_0x1fa690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA690u;
        // 0x1fa694: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa690) {
            ctx->pc = 0x1FA658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa658;
        }
    }
    ctx->pc = 0x1FA698u;
    // 0x1fa698: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FA698u;
    {
        const bool branch_taken_0x1fa698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA698u;
        // 0x1fa69c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa698) {
            ctx->pc = 0x1FA6C8u;
            return;
        }
    }
    ctx->pc = 0x1FA6A0u;
label_1fa6a0:
    // 0x1fa6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6a4: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA6A4u;
    SET_GPR_U32(ctx, 31, 0x1FA6ACu);
    ctx->pc = 0x1FA6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA6A4u;
    // 0x1fa6a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA6A4u, 0x1FA6ACu)) {
        return;
    }
    ctx->pc = 0x1FA6ACu;
label_1fa6ac:
    // 0x1fa6ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa6b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA6B4u;
    {
        const bool branch_taken_0x1fa6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6B4u;
        // 0x1fa6b8: 0xfe230010  sd          $v1, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6b4) {
            ctx->pc = 0x1FA6C4u;
            return;
        }
    }
    ctx->pc = 0x1FA6BCu;
}

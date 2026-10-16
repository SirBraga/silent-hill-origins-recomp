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

// Function: sub_001265C8
// Address: 0x1265c8 - 0x126718
void sub_001265C8_0x1265c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001265C8_0x1265c8");
#endif

    switch (ctx->pc) {
        case 0x1265c8u: goto label_1265c8;
        case 0x1265ccu: goto label_1265cc;
        case 0x1265d0u: goto label_1265d0;
        case 0x1265d4u: goto label_1265d4;
        case 0x1265d8u: goto label_1265d8;
        case 0x1265dcu: goto label_1265dc;
        case 0x1265e0u: goto label_1265e0;
        case 0x1265e4u: goto label_1265e4;
        case 0x1265e8u: goto label_1265e8;
        case 0x1265ecu: goto label_1265ec;
        case 0x1265f0u: goto label_1265f0;
        case 0x1265f4u: goto label_1265f4;
        case 0x1265f8u: goto label_1265f8;
        case 0x1265fcu: goto label_1265fc;
        case 0x126600u: goto label_126600;
        case 0x126604u: goto label_126604;
        case 0x126608u: goto label_126608;
        case 0x12660cu: goto label_12660c;
        case 0x126610u: goto label_126610;
        case 0x126614u: goto label_126614;
        case 0x126618u: goto label_126618;
        case 0x12661cu: goto label_12661c;
        case 0x126620u: goto label_126620;
        case 0x126624u: goto label_126624;
        case 0x126628u: goto label_126628;
        case 0x12662cu: goto label_12662c;
        case 0x126630u: goto label_126630;
        case 0x126634u: goto label_126634;
        case 0x126638u: goto label_126638;
        case 0x12663cu: goto label_12663c;
        case 0x126640u: goto label_126640;
        case 0x126644u: goto label_126644;
        case 0x126648u: goto label_126648;
        case 0x12664cu: goto label_12664c;
        case 0x126650u: goto label_126650;
        case 0x126654u: goto label_126654;
        case 0x126658u: goto label_126658;
        case 0x12665cu: goto label_12665c;
        case 0x126660u: goto label_126660;
        case 0x126664u: goto label_126664;
        case 0x126668u: goto label_126668;
        case 0x12666cu: goto label_12666c;
        case 0x126670u: goto label_126670;
        case 0x126674u: goto label_126674;
        case 0x126678u: goto label_126678;
        case 0x12667cu: goto label_12667c;
        case 0x126680u: goto label_126680;
        case 0x126684u: goto label_126684;
        case 0x126688u: goto label_126688;
        case 0x12668cu: goto label_12668c;
        case 0x126690u: goto label_126690;
        case 0x126694u: goto label_126694;
        case 0x126698u: goto label_126698;
        case 0x12669cu: goto label_12669c;
        case 0x1266a0u: goto label_1266a0;
        case 0x1266a4u: goto label_1266a4;
        case 0x1266a8u: goto label_1266a8;
        case 0x1266acu: goto label_1266ac;
        case 0x1266b0u: goto label_1266b0;
        case 0x1266b4u: goto label_1266b4;
        case 0x1266b8u: goto label_1266b8;
        case 0x1266bcu: goto label_1266bc;
        case 0x1266c0u: goto label_1266c0;
        case 0x1266c4u: goto label_1266c4;
        case 0x1266c8u: goto label_1266c8;
        case 0x1266ccu: goto label_1266cc;
        case 0x1266d0u: goto label_1266d0;
        case 0x1266d4u: goto label_1266d4;
        case 0x1266d8u: goto label_1266d8;
        case 0x1266dcu: goto label_1266dc;
        case 0x1266e0u: goto label_1266e0;
        case 0x1266e4u: goto label_1266e4;
        case 0x1266e8u: goto label_1266e8;
        case 0x1266ecu: goto label_1266ec;
        case 0x1266f0u: goto label_1266f0;
        case 0x1266f4u: goto label_1266f4;
        case 0x1266f8u: goto label_1266f8;
        case 0x1266fcu: goto label_1266fc;
        case 0x126700u: goto label_126700;
        case 0x126704u: goto label_126704;
        case 0x126708u: goto label_126708;
        case 0x12670cu: goto label_12670c;
        case 0x126710u: goto label_126710;
        case 0x126714u: goto label_126714;
        default: break;
    }

    ctx->pc = 0x1265c8u;

label_1265c8:
    // 0x1265c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1265c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1265cc:
    // 0x1265cc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1265ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1265d0:
    // 0x1265d0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1265d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1265d4:
    // 0x1265d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1265d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1265d8:
    // 0x1265d8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1265d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1265dc:
    // 0x1265dc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1265dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1265e0:
    // 0x1265e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1265e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1265e4:
    // 0x1265e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1265e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1265e8:
    // 0x1265e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1265e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1265ec:
    // 0x1265ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1265ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1265f0:
    // 0x1265f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1265f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1265f4:
    // 0x1265f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1265f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1265f8:
    // 0x1265f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1265f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1265fc:
    // 0x1265fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1265fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_126600:
    // 0x126600: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
label_126604:
    if (ctx->pc == 0x126604u) {
        ctx->pc = 0x126604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126600u;
        // 0x126604: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126608u;
        goto label_126608;
    }
    ctx->pc = 0x126600u;
    {
        const bool branch_taken_0x126600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126600u;
        // 0x126604: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126600) {
            ctx->pc = 0x1266F4u;
            goto label_1266f4;
        }
    }
    ctx->pc = 0x126608u;
label_126608:
    // 0x126608: 0x68430083  ldl         $v1, 0x83($v0)
    ctx->pc = 0x126608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12660c:
    // 0x12660c: 0x6c43007c  ldr         $v1, 0x7C($v0)
    ctx->pc = 0x12660cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_126610:
    // 0x126610: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x126610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_126614:
    // 0x126614: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x126614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_126618:
    // 0x126618: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x126618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12661c:
    // 0x12661c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12661cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_126620:
    // 0x126620: 0x6847002b  ldl         $a3, 0x2B($v0)
    ctx->pc = 0x126620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_126624:
    // 0x126624: 0x6c470024  ldr         $a3, 0x24($v0)
    ctx->pc = 0x126624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_126628:
    // 0x126628: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x126628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_12662c:
    // 0x12662c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x12662cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_126630:
    // 0x126630: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x126630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_126634:
    // 0x126634: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x126634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_126638:
    // 0x126638: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x126638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_12663c:
    // 0x12663c: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x12663cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_126640:
    // 0x126640: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x126640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_126644:
    // 0x126644: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x126644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_126648:
    // 0x126648: 0xb2070e07  sdl         $a3, 0xE07($s0)
    ctx->pc = 0x126648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12664c:
    // 0x12664c: 0xb6070e00  sdr         $a3, 0xE00($s0)
    ctx->pc = 0x12664cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_126650:
    // 0x126650: 0xae020e08  sw          $v0, 0xE08($s0)
    ctx->pc = 0x126650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3592), GPR_U32(ctx, 2));
label_126654:
    // 0x126654: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x126654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126658:
    // 0x126658: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x126658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_12665c:
    // 0x12665c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x12665cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_126660:
    // 0x126660: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x126660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_126664:
    // 0x126664: 0x40f809  jalr        $v0
label_126668:
    if (ctx->pc == 0x126668u) {
        ctx->pc = 0x126668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126664u;
        // 0x126668: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12666Cu;
        goto label_12666c;
    }
    ctx->pc = 0x126664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12666Cu);
        ctx->pc = 0x126668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126664u;
        // 0x126668: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126664u, 0x12666Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12666Cu;
label_12666c:
    // 0x12666c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_126670:
    if (ctx->pc == 0x126670u) {
        ctx->pc = 0x126670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12666Cu;
        // 0x126670: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126674u;
        goto label_126674;
    }
    ctx->pc = 0x12666Cu;
    {
        const bool branch_taken_0x12666c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12666c) {
            ctx->pc = 0x126670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12666Cu;
            // 0x126670: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126694u;
            goto label_126694;
        }
    }
    ctx->pc = 0x126674u;
label_126674:
    // 0x126674: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x126674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_126678:
    // 0x126678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12667c:
    // 0x12667c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x12667cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_126680:
    // 0x126680: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x126680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_126684:
    // 0x126684: 0x60f809  jalr        $v1
label_126688:
    if (ctx->pc == 0x126688u) {
        ctx->pc = 0x126688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126684u;
        // 0x126688: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12668Cu;
        goto label_12668c;
    }
    ctx->pc = 0x126684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12668Cu);
        ctx->pc = 0x126688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126684u;
        // 0x126688: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126684u, 0x12668Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12668Cu;
label_12668c:
    // 0x12668c: 0x1000000b  b           . + 4 + (0xB << 2)
label_126690:
    if (ctx->pc == 0x126690u) {
        ctx->pc = 0x126690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12668Cu;
        // 0x126690: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126694u;
        goto label_126694;
    }
    ctx->pc = 0x12668Cu;
    {
        const bool branch_taken_0x12668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12668Cu;
        // 0x126690: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12668c) {
            ctx->pc = 0x1266BCu;
            goto label_1266bc;
        }
    }
    ctx->pc = 0x126694u;
label_126694:
    // 0x126694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_126698:
    // 0x126698: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x126698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12669c:
    // 0x12669c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12669cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1266a0:
    // 0x1266a0: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1266a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1266a4:
    // 0x1266a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1266a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1266a8:
    // 0x1266a8: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1266a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1266ac:
    // 0x1266ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1266acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1266b0:
    // 0x1266b0: 0x60f809  jalr        $v1
label_1266b4:
    if (ctx->pc == 0x1266B4u) {
        ctx->pc = 0x1266B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266B0u;
        // 0x1266b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266B8u;
        goto label_1266b8;
    }
    ctx->pc = 0x1266B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1266B8u);
        ctx->pc = 0x1266B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266B0u;
        // 0x1266b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266B0u, 0x1266B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1266B8u;
label_1266b8:
    // 0x1266b8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1266b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1266bc:
    // 0x1266bc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1266bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1266c0:
    // 0x1266c0: 0x84700100  lh          $s0, 0x100($v1)
    ctx->pc = 0x1266c0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_1266c4:
    // 0x1266c4: 0x24710100  addiu       $s1, $v1, 0x100
    ctx->pc = 0x1266c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1266c8:
    // 0x1266c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1266c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1266cc:
    // 0x1266cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1266ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1266d0:
    // 0x1266d0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1266d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1266d4:
    // 0x1266d4: 0x40f809  jalr        $v0
label_1266d8:
    if (ctx->pc == 0x1266D8u) {
        ctx->pc = 0x1266D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266D4u;
        // 0x1266d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266DCu;
        goto label_1266dc;
    }
    ctx->pc = 0x1266D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1266DCu);
        ctx->pc = 0x1266D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266D4u;
        // 0x1266d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266D4u, 0x1266DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1266DCu;
label_1266dc:
    // 0x1266dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1266dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1266e0:
    // 0x1266e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1266e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1266e4:
    // 0x1266e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1266e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1266e8:
    // 0x1266e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1266e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1266ec:
    // 0x1266ec: 0x60f809  jalr        $v1
label_1266f0:
    if (ctx->pc == 0x1266F0u) {
        ctx->pc = 0x1266F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266ECu;
        // 0x1266f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266F4u;
        goto label_1266f4;
    }
    ctx->pc = 0x1266ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1266F4u);
        ctx->pc = 0x1266F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266ECu;
        // 0x1266f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266ECu, 0x1266F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1266F4u;
label_1266f4:
    // 0x1266f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1266f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1266f8:
    // 0x1266f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1266f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1266fc:
    // 0x1266fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1266fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_126700:
    // 0x126700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x126700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126704:
    // 0x126704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_126708:
    // 0x126708: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x126708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12670c:
    // 0x12670c: 0x3e00008  jr          $ra
label_126710:
    if (ctx->pc == 0x126710u) {
        ctx->pc = 0x126710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12670Cu;
        // 0x126710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126714u;
        goto label_126714;
    }
    ctx->pc = 0x12670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12670Cu;
        // 0x126710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126714u;
label_126714:
    // 0x126714: 0x0  nop
    ctx->pc = 0x126714u;
    // NOP
    ctx->pc = 0x126718u;
}

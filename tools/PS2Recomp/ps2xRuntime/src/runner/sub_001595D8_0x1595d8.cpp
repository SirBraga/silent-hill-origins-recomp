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

// Function: sub_001595D8
// Address: 0x1595d8 - 0x159858
void sub_001595D8_0x1595d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001595D8_0x1595d8");
#endif

    switch (ctx->pc) {
        case 0x159610u: goto label_159610;
        case 0x15963cu: goto label_15963c;
        case 0x159790u: goto label_159790;
        case 0x159828u: goto label_159828;
        case 0x159834u: goto label_159834;
        case 0x15983cu: goto label_15983c;
        default: break;
    }

    ctx->pc = 0x1595d8u;

    // 0x1595d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1595d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1595dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1595dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1595e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1595e4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1595e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1595e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1595e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1595ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1595ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1595f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1595f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1595f4: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x1595f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x1595f8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1595f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1595fc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1595FCu;
    {
        const bool branch_taken_0x1595fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x159600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595FCu;
        // 0x159600: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595fc) {
            ctx->pc = 0x159618u;
            goto label_159618;
        }
    }
    ctx->pc = 0x159604u;
    // 0x159604: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x159604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x159608: 0xc0566d8  jal         func_159B60
    ctx->pc = 0x159608u;
    SET_GPR_U32(ctx, 31, 0x159610u);
    ctx->pc = 0x15960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159608u;
    // 0x15960c: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x159B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x159B60u, 0x159608u, 0x159610u)) {
        return;
    }
    ctx->pc = 0x159610u;
label_159610:
    // 0x159610: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x159610u;
    {
        const bool branch_taken_0x159610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159610u;
        // 0x159614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159610) {
            ctx->pc = 0x159840u;
            goto label_159840;
        }
    }
    ctx->pc = 0x159618u;
label_159618:
    // 0x159618: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x159618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x15961c: 0x14a20088  bne         $a1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x15961Cu;
    {
        const bool branch_taken_0x15961c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x159620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15961Cu;
        // 0x159620: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15961c) {
            ctx->pc = 0x159840u;
            goto label_159840;
        }
    }
    ctx->pc = 0x159624u;
    // 0x159624: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x159624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x159628: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x159628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x15962c: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x15962cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x159630: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x159634: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x159634u;
    SET_GPR_U32(ctx, 31, 0x15963Cu);
    ctx->pc = 0x159638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159634u;
    // 0x159638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x159634u, 0x15963Cu)) {
        return;
    }
    ctx->pc = 0x15963Cu;
label_15963c:
    // 0x15963c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159644: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x159644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x159648: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x159648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15964c: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x15964cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x159650: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x159654: 0xb2420267  sdl         $v0, 0x267($s2)
    ctx->pc = 0x159654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159658: 0xb6420260  sdr         $v0, 0x260($s2)
    ctx->pc = 0x159658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15965c: 0xae430268  sw          $v1, 0x268($s2)
    ctx->pc = 0x15965cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 3));
    // 0x159660: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x159660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x159664: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x159664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x159668: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x159668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15966c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15966cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x159670: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x159670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x159674: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x159674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x159678: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x159678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x15967c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x15967cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x159680: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x159680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x159684: 0x6a4701a7  ldl         $a3, 0x1A7($s2)
    ctx->pc = 0x159684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x159688: 0x6e4701a0  ldr         $a3, 0x1A0($s2)
    ctx->pc = 0x159688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x15968c: 0x6a4801af  ldl         $t0, 0x1AF($s2)
    ctx->pc = 0x15968cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x159690: 0x6e4801a8  ldr         $t0, 0x1A8($s2)
    ctx->pc = 0x159690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x159694: 0x6a4201b7  ldl         $v0, 0x1B7($s2)
    ctx->pc = 0x159694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x159698: 0x6e4201b0  ldr         $v0, 0x1B0($s2)
    ctx->pc = 0x159698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15969c: 0x6a4301bf  ldl         $v1, 0x1BF($s2)
    ctx->pc = 0x15969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1596a0: 0x6e4301b8  ldr         $v1, 0x1B8($s2)
    ctx->pc = 0x1596a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1596a4: 0xb2470167  sdl         $a3, 0x167($s2)
    ctx->pc = 0x1596a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596a8: 0xb6470160  sdr         $a3, 0x160($s2)
    ctx->pc = 0x1596a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596ac: 0xb248016f  sdl         $t0, 0x16F($s2)
    ctx->pc = 0x1596acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596b0: 0xb6480168  sdr         $t0, 0x168($s2)
    ctx->pc = 0x1596b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596b4: 0xb2420177  sdl         $v0, 0x177($s2)
    ctx->pc = 0x1596b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596b8: 0xb6420170  sdr         $v0, 0x170($s2)
    ctx->pc = 0x1596b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596bc: 0xb243017f  sdl         $v1, 0x17F($s2)
    ctx->pc = 0x1596bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596c0: 0xb6430178  sdr         $v1, 0x178($s2)
    ctx->pc = 0x1596c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596c4: 0x6a4701c7  ldl         $a3, 0x1C7($s2)
    ctx->pc = 0x1596c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1596c8: 0x6e4701c0  ldr         $a3, 0x1C0($s2)
    ctx->pc = 0x1596c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1596cc: 0x6a4801cf  ldl         $t0, 0x1CF($s2)
    ctx->pc = 0x1596ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1596d0: 0x6e4801c8  ldr         $t0, 0x1C8($s2)
    ctx->pc = 0x1596d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1596d4: 0x6a4201d7  ldl         $v0, 0x1D7($s2)
    ctx->pc = 0x1596d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1596d8: 0x6e4201d0  ldr         $v0, 0x1D0($s2)
    ctx->pc = 0x1596d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1596dc: 0x6a4301df  ldl         $v1, 0x1DF($s2)
    ctx->pc = 0x1596dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1596e0: 0x6e4301d8  ldr         $v1, 0x1D8($s2)
    ctx->pc = 0x1596e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1596e4: 0xb2470187  sdl         $a3, 0x187($s2)
    ctx->pc = 0x1596e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596e8: 0xb6470180  sdr         $a3, 0x180($s2)
    ctx->pc = 0x1596e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596ec: 0xb248018f  sdl         $t0, 0x18F($s2)
    ctx->pc = 0x1596ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596f0: 0xb6480188  sdr         $t0, 0x188($s2)
    ctx->pc = 0x1596f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596f4: 0xb2420197  sdl         $v0, 0x197($s2)
    ctx->pc = 0x1596f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596f8: 0xb6420190  sdr         $v0, 0x190($s2)
    ctx->pc = 0x1596f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1596fc: 0xb243019f  sdl         $v1, 0x19F($s2)
    ctx->pc = 0x1596fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159700: 0xb6430198  sdr         $v1, 0x198($s2)
    ctx->pc = 0x159700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159704: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x159704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x159708: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x159708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15970c: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x15970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x159710: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x159710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x159714: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x159714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x159718: 0x68480027  ldl         $t0, 0x27($v0)
    ctx->pc = 0x159718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x15971c: 0x6c480020  ldr         $t0, 0x20($v0)
    ctx->pc = 0x15971cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x159720: 0x6843002f  ldl         $v1, 0x2F($v0)
    ctx->pc = 0x159720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x159724: 0x6c430028  ldr         $v1, 0x28($v0)
    ctx->pc = 0x159724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x159728: 0xb24601a7  sdl         $a2, 0x1A7($s2)
    ctx->pc = 0x159728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15972c: 0xb64601a0  sdr         $a2, 0x1A0($s2)
    ctx->pc = 0x15972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159730: 0xb24701af  sdl         $a3, 0x1AF($s2)
    ctx->pc = 0x159730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159734: 0xb64701a8  sdr         $a3, 0x1A8($s2)
    ctx->pc = 0x159734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159738: 0xb24801b7  sdl         $t0, 0x1B7($s2)
    ctx->pc = 0x159738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15973c: 0xb64801b0  sdr         $t0, 0x1B0($s2)
    ctx->pc = 0x15973cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159740: 0xb24301bf  sdl         $v1, 0x1BF($s2)
    ctx->pc = 0x159740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159744: 0xb64301b8  sdr         $v1, 0x1B8($s2)
    ctx->pc = 0x159744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159748: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x159748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15974c: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x15974cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x159750: 0x6847003f  ldl         $a3, 0x3F($v0)
    ctx->pc = 0x159750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x159754: 0x6c470038  ldr         $a3, 0x38($v0)
    ctx->pc = 0x159754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x159758: 0x68480047  ldl         $t0, 0x47($v0)
    ctx->pc = 0x159758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x15975c: 0x6c480040  ldr         $t0, 0x40($v0)
    ctx->pc = 0x15975cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x159760: 0x6843004f  ldl         $v1, 0x4F($v0)
    ctx->pc = 0x159760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x159764: 0x6c430048  ldr         $v1, 0x48($v0)
    ctx->pc = 0x159764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x159768: 0xb24601c7  sdl         $a2, 0x1C7($s2)
    ctx->pc = 0x159768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15976c: 0xb64601c0  sdr         $a2, 0x1C0($s2)
    ctx->pc = 0x15976cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159770: 0xb24701cf  sdl         $a3, 0x1CF($s2)
    ctx->pc = 0x159770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159774: 0xb64701c8  sdr         $a3, 0x1C8($s2)
    ctx->pc = 0x159774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159778: 0xb24801d7  sdl         $t0, 0x1D7($s2)
    ctx->pc = 0x159778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15977c: 0xb64801d0  sdr         $t0, 0x1D0($s2)
    ctx->pc = 0x15977cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159780: 0xb24301df  sdl         $v1, 0x1DF($s2)
    ctx->pc = 0x159780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159784: 0xb64301d8  sdr         $v1, 0x1D8($s2)
    ctx->pc = 0x159784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159788: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x159788u;
    SET_GPR_U32(ctx, 31, 0x159790u);
    ctx->pc = 0x15978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159788u;
    // 0x15978c: 0x264501a0  addiu       $a1, $s2, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x159788u, 0x159790u)) {
        return;
    }
    ctx->pc = 0x159790u;
label_159790:
    // 0x159790: 0x8e43026c  lw          $v1, 0x26C($s2)
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x159794: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x159794u;
    {
        const bool branch_taken_0x159794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159794) {
            ctx->pc = 0x159798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159794u;
            // 0x159798: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15982Cu;
            goto label_15982c;
        }
    }
    ctx->pc = 0x15979Cu;
    // 0x15979c: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x15979cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
    // 0x1597a0: 0x6a4501a7  ldl         $a1, 0x1A7($s2)
    ctx->pc = 0x1597a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1597a4: 0x6e4501a0  ldr         $a1, 0x1A0($s2)
    ctx->pc = 0x1597a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1597a8: 0x6a4601af  ldl         $a2, 0x1AF($s2)
    ctx->pc = 0x1597a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1597ac: 0x6e4601a8  ldr         $a2, 0x1A8($s2)
    ctx->pc = 0x1597acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1597b0: 0x6a4701b7  ldl         $a3, 0x1B7($s2)
    ctx->pc = 0x1597b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1597b4: 0x6e4701b0  ldr         $a3, 0x1B0($s2)
    ctx->pc = 0x1597b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1597b8: 0x6a4801bf  ldl         $t0, 0x1BF($s2)
    ctx->pc = 0x1597b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1597bc: 0x6e4801b8  ldr         $t0, 0x1B8($s2)
    ctx->pc = 0x1597bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1597c0: 0xb2450167  sdl         $a1, 0x167($s2)
    ctx->pc = 0x1597c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597c4: 0xb6450160  sdr         $a1, 0x160($s2)
    ctx->pc = 0x1597c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597c8: 0xb246016f  sdl         $a2, 0x16F($s2)
    ctx->pc = 0x1597c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597cc: 0xb6460168  sdr         $a2, 0x168($s2)
    ctx->pc = 0x1597ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597d0: 0xb2470177  sdl         $a3, 0x177($s2)
    ctx->pc = 0x1597d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597d4: 0xb6470170  sdr         $a3, 0x170($s2)
    ctx->pc = 0x1597d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597d8: 0xb248017f  sdl         $t0, 0x17F($s2)
    ctx->pc = 0x1597d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597dc: 0xb6480178  sdr         $t0, 0x178($s2)
    ctx->pc = 0x1597dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1597e0: 0x6a4501c7  ldl         $a1, 0x1C7($s2)
    ctx->pc = 0x1597e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1597e4: 0x6e4501c0  ldr         $a1, 0x1C0($s2)
    ctx->pc = 0x1597e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1597e8: 0x6a4601cf  ldl         $a2, 0x1CF($s2)
    ctx->pc = 0x1597e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1597ec: 0x6e4601c8  ldr         $a2, 0x1C8($s2)
    ctx->pc = 0x1597ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1597f0: 0x6a4701d7  ldl         $a3, 0x1D7($s2)
    ctx->pc = 0x1597f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1597f4: 0x6e4701d0  ldr         $a3, 0x1D0($s2)
    ctx->pc = 0x1597f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1597f8: 0x6a4801df  ldl         $t0, 0x1DF($s2)
    ctx->pc = 0x1597f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1597fc: 0x6e4801d8  ldr         $t0, 0x1D8($s2)
    ctx->pc = 0x1597fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x159800: 0xb2450187  sdl         $a1, 0x187($s2)
    ctx->pc = 0x159800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159804: 0xb6450180  sdr         $a1, 0x180($s2)
    ctx->pc = 0x159804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159808: 0xb246018f  sdl         $a2, 0x18F($s2)
    ctx->pc = 0x159808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15980c: 0xb6460188  sdr         $a2, 0x188($s2)
    ctx->pc = 0x15980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159810: 0xb2470197  sdl         $a3, 0x197($s2)
    ctx->pc = 0x159810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159814: 0xb6470190  sdr         $a3, 0x190($s2)
    ctx->pc = 0x159814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159818: 0xb248019f  sdl         $t0, 0x19F($s2)
    ctx->pc = 0x159818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15981c: 0xb6480198  sdr         $t0, 0x198($s2)
    ctx->pc = 0x15981cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159820: 0xc0569de  jal         func_15A778
    ctx->pc = 0x159820u;
    SET_GPR_U32(ctx, 31, 0x159828u);
    ctx->pc = 0x159824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159820u;
    // 0x159824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A778u, 0x159820u, 0x159828u)) {
        return;
    }
    ctx->pc = 0x159828u;
label_159828:
    // 0x159828: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x159828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_15982c:
    // 0x15982c: 0xc092d94  jal         func_24B650
    ctx->pc = 0x15982Cu;
    SET_GPR_U32(ctx, 31, 0x159834u);
    ctx->pc = 0x159830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15982Cu;
    // 0x159830: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x15982Cu, 0x159834u)) {
        return;
    }
    ctx->pc = 0x159834u;
label_159834:
    // 0x159834: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x159834u;
    SET_GPR_U32(ctx, 31, 0x15983Cu);
    ctx->pc = 0x159838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159834u;
    // 0x159838: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x159834u, 0x15983Cu)) {
        return;
    }
    ctx->pc = 0x15983Cu;
label_15983c:
    // 0x15983c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15983cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_159840:
    // 0x159840: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159844: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x159844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15984c: 0x3e00008  jr          $ra
    ctx->pc = 0x15984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15984Cu;
        // 0x159850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159854u;
    // 0x159854: 0x0  nop
    ctx->pc = 0x159854u;
    // NOP
    ctx->pc = 0x159858u;
}

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

// Function: sub_00218558
// Address: 0x218558 - 0x218748
void sub_00218558_0x218558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218558_0x218558");
#endif

    switch (ctx->pc) {
        case 0x21862cu: goto label_21862c;
        case 0x218658u: goto label_218658;
        case 0x218708u: goto label_218708;
        case 0x218720u: goto label_218720;
        default: break;
    }

    ctx->pc = 0x218558u;

    // 0x218558: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x218558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21855c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x21855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x218560: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x218560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x218564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218568: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x218568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21856c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x21856cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x218570: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x218570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x218574: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x218574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x218578: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x218578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21857c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x21857cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218580: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x218580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x218584: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x218584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x218588: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x218588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21858c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x21858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x218590: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x218590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218594: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x218594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218598: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x218598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x21859c: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x21859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2185a0: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x2185a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2185a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2185a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2185a8: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x2185a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2185ac: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x2185acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2185b0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2185b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2185b4: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x2185b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x2185b8: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x2185b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2185bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2185bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2185c0: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2185c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2185c4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2185c4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2185c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2185c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2185cc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2185ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2185d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2185d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2185d4: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2185d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2185d8: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2185d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2185dc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2185dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2185e0: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2185e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2185e4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2185e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2185e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2185e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2185ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2185ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2185f0: 0x0  nop
    ctx->pc = 0x2185f0u;
    // NOP
    // 0x2185f4: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2185f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2185f8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2185f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2185fc: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x2185fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x218600: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x218600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218604: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x218604u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x218608: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x218608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21860c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x21860cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x218610: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x218610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x218614: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x218614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x218618: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x218618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21861c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x21861cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x218620: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x218620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x218624: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x218624u;
    SET_GPR_U32(ctx, 31, 0x21862Cu);
    ctx->pc = 0x218628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218624u;
    // 0x218628: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x218624u, 0x21862Cu)) {
        return;
    }
    ctx->pc = 0x21862Cu;
label_21862c:
    // 0x21862c: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x21862cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x218630: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x218630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x218634: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x218634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x218638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21863c: 0xc7a70030  lwc1        $f7, 0x30($sp)
    ctx->pc = 0x21863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x218640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218644: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x218644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x218648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21864c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x21864cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x218650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218650u;
    {
        const bool branch_taken_0x218650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218650u;
        // 0x218654: 0xc7a50038  lwc1        $f5, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218650) {
            ctx->pc = 0x218668u;
            goto label_218668;
        }
    }
    ctx->pc = 0x218658u;
label_218658:
    // 0x218658: 0x54800028  bnel        $a0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x218658u;
    {
        const bool branch_taken_0x218658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x218658) {
            ctx->pc = 0x21865Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218658u;
            // 0x21865c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186FCu;
            goto label_2186fc;
        }
    }
    ctx->pc = 0x218660u;
    // 0x218660: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x218660u;
    {
        const bool branch_taken_0x218660 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x218660) {
            ctx->pc = 0x2186F0u;
            goto label_2186f0;
        }
    }
    ctx->pc = 0x218668u;
label_218668:
    // 0x218668: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x218668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21866c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x21866cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x218670: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x218670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218674: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x218674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x218678: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x218678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21867c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218680: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x218680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218684: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x218684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x218688: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x218688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21868c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x21868cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x218690: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x218690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218694: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x218694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x218698: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x218698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21869c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21869cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2186a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2186a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2186a4: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x2186a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2186a8: 0x0  nop
    ctx->pc = 0x2186a8u;
    // NOP
    // 0x2186ac: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2186ACu;
    {
        const bool branch_taken_0x2186ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2186ac) {
            ctx->pc = 0x2186B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2186ACu;
            // 0x2186b0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186D0u;
            goto label_2186d0;
        }
    }
    ctx->pc = 0x2186B4u;
    // 0x2186b4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2186b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2186b8: 0x0  nop
    ctx->pc = 0x2186b8u;
    // NOP
    // 0x2186bc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2186BCu;
    {
        const bool branch_taken_0x2186bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2186bc) {
            ctx->pc = 0x2186C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2186BCu;
            // 0x2186c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186E8u;
            goto label_2186e8;
        }
    }
    ctx->pc = 0x2186C4u;
    // 0x2186c4: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x2186c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2186c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2186C8u;
    {
        const bool branch_taken_0x2186c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2186CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186C8u;
        // 0x2186cc: 0x94660004  lhu         $a2, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186c8) {
            ctx->pc = 0x2186E8u;
            goto label_2186e8;
        }
    }
    ctx->pc = 0x2186D0u;
label_2186d0:
    // 0x2186d0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2186d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2186d4: 0x0  nop
    ctx->pc = 0x2186d4u;
    // NOP
    // 0x2186d8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2186D8u;
    {
        const bool branch_taken_0x2186d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2186d8) {
            ctx->pc = 0x2186DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2186D8u;
            // 0x2186dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186E8u;
            goto label_2186e8;
        }
    }
    ctx->pc = 0x2186E0u;
    // 0x2186e0: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x2186e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2186e4: 0x94660006  lhu         $a2, 0x6($v1)
    ctx->pc = 0x2186e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2186e8:
    // 0x2186e8: 0x10a0ffdb  beqz        $a1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2186E8u;
    {
        const bool branch_taken_0x2186e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2186e8) {
            ctx->pc = 0x218658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218658;
        }
    }
    ctx->pc = 0x2186F0u;
label_2186f0:
    // 0x2186f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2186F0u;
    {
        const bool branch_taken_0x2186f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2186f0) {
            ctx->pc = 0x218710u;
            goto label_218710;
        }
    }
    ctx->pc = 0x2186F8u;
    // 0x2186f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2186f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2186fc:
    // 0x2186fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2186fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218700: 0xc0860b6  jal         func_2182D8
    ctx->pc = 0x218700u;
    SET_GPR_U32(ctx, 31, 0x218708u);
    ctx->pc = 0x218704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218700u;
    // 0x218704: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2182D8u, 0x218700u, 0x218708u)) {
        return;
    }
    ctx->pc = 0x218708u;
label_218708:
    // 0x218708: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x218708u;
    {
        const bool branch_taken_0x218708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218708u;
        // 0x21870c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218708) {
            ctx->pc = 0x218730u;
            goto label_218730;
        }
    }
    ctx->pc = 0x218710u;
label_218710:
    // 0x218710: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x218710u;
    {
        const bool branch_taken_0x218710 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x218714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218710u;
        // 0x218714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218710) {
            ctx->pc = 0x218728u;
            goto label_218728;
        }
    }
    ctx->pc = 0x218718u;
    // 0x218718: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x218718u;
    SET_GPR_U32(ctx, 31, 0x218720u);
    ctx->pc = 0x21871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218718u;
    // 0x21871c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217D70u, 0x218718u, 0x218720u)) {
        return;
    }
    ctx->pc = 0x218720u;
label_218720:
    // 0x218720: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x218720u;
    {
        const bool branch_taken_0x218720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218720u;
        // 0x218724: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218720) {
            ctx->pc = 0x218730u;
            goto label_218730;
        }
    }
    ctx->pc = 0x218728u;
label_218728:
    // 0x218728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21872c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21872cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_218730:
    // 0x218730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x218730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218734: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x218734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x218738: 0x3e00008  jr          $ra
    ctx->pc = 0x218738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218738u;
        // 0x21873c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218740u;
    // 0x218740: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x218740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x218744: 0x0  nop
    ctx->pc = 0x218744u;
    // NOP
    ctx->pc = 0x218748u;
}

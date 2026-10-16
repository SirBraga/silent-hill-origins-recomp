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

// Function: sub_00287680
// Address: 0x287680 - 0x287818
void sub_00287680_0x287680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287680_0x287680");
#endif

    switch (ctx->pc) {
        case 0x2876f0u: goto label_2876f0;
        case 0x28771cu: goto label_28771c;
        case 0x287748u: goto label_287748;
        case 0x287784u: goto label_287784;
        case 0x2877b4u: goto label_2877b4;
        case 0x2877d4u: goto label_2877d4;
        case 0x2877e4u: goto label_2877e4;
        default: break;
    }

    ctx->pc = 0x287680u;

    // 0x287680: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x287680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x287684: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x287684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x287688: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x287688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28768c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x287690: 0x245163b0  addiu       $s1, $v0, 0x63B0
    ctx->pc = 0x287690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x287694: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x287694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x287698: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x287698u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x28769c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x28769cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2876a0: 0x8e2306f0  lw          $v1, 0x6F0($s1)
    ctx->pc = 0x2876a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x706AA0u));
    // 0x2876a4: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2876A4u;
    {
        const bool branch_taken_0x2876a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2876A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876A4u;
        // 0x2876a8: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876a4) {
            ctx->pc = 0x2877C0u;
            goto label_2877c0;
        }
    }
    ctx->pc = 0x2876ACu;
    // 0x2876ac: 0x8e220724  lw          $v0, 0x724($s1)
    ctx->pc = 0x2876acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1828)));
    // 0x2876b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2876b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2876b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2876b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2876b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2876b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2876bc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2876bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2876c0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2876C0u;
    {
        const bool branch_taken_0x2876c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2876c0) {
            ctx->pc = 0x2876C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2876C0u;
            // 0x2876c4: 0xc63506f8  lwc1        $f21, 0x6F8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2876C8u;
            goto label_2876c8;
        }
    }
    ctx->pc = 0x2876C8u;
label_2876c8:
    // 0x2876c8: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x2876c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x2876cc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2876ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2876d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2876d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876d4: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x2876d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2876d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2876dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2876dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2876e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2876e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2876e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2876e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2876e8: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x2876E8u;
    SET_GPR_U32(ctx, 31, 0x2876F0u);
    ctx->pc = 0x2876ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2876E8u;
    // 0x2876ec: 0x8c450590  lw          $a1, 0x590($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x2876E8u, 0x2876F0u)) {
        return;
    }
    ctx->pc = 0x2876F0u;
label_2876f0:
    // 0x2876f0: 0x6a22061b  ldl         $v0, 0x61B($s1)
    ctx->pc = 0x2876f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2876f4: 0x6e220614  ldr         $v0, 0x614($s1)
    ctx->pc = 0x2876f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2876f8: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x2876f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2876fc: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x2876fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287700: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x287700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287704: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x287704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287708: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x287708u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28770c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28770cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287714: 0xc092ea4  jal         func_24BA90
    ctx->pc = 0x287714u;
    SET_GPR_U32(ctx, 31, 0x28771Cu);
    ctx->pc = 0x287718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287714u;
    // 0x287718: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x287714u, 0x28771Cu)) {
        return;
    }
    ctx->pc = 0x28771Cu;
label_28771c:
    // 0x28771c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x28771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287720: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x287720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287724: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x287724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28772c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x28772cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x287730: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287734: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x287734u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x287738: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x287738u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x28773c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28773cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287740: 0xc092ea4  jal         func_24BA90
    ctx->pc = 0x287740u;
    SET_GPR_U32(ctx, 31, 0x287748u);
    ctx->pc = 0x287744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287740u;
    // 0x287744: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x287740u, 0x287748u)) {
        return;
    }
    ctx->pc = 0x287748u;
label_287748:
    // 0x287748: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x287748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28774c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28774cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287750: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x287750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x287754: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x287754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287758: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28775c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x28775cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x287760: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x287760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287768: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x287768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x28776c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28776cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x287770: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x287770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x287774: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x287774u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x287778: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x287778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28777c: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x28777Cu;
    SET_GPR_U32(ctx, 31, 0x287784u);
    ctx->pc = 0x287780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28777Cu;
    // 0x287780: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x28777Cu, 0x287784u)) {
        return;
    }
    ctx->pc = 0x287784u;
label_287784:
    // 0x287784: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x287784u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287788: 0x26230630  addiu       $v1, $s1, 0x630
    ctx->pc = 0x287788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x28778c: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x28778cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287794: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x287794u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287798: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x287798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    // 0x28779c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x28779cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2877a0: 0x7e270630  sq          $a3, 0x630($s1)
    ctx->pc = 0x2877a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1584), GPR_VEC(ctx, 7));
    // 0x2877a4: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x2877a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x2877a8: 0x7c680010  sq          $t0, 0x10($v1)
    ctx->pc = 0x2877a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 8));
    // 0x2877ac: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x2877ACu;
    SET_GPR_U32(ctx, 31, 0x2877B4u);
    ctx->pc = 0x2877B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877ACu;
    // 0x2877b0: 0x7c660020  sq          $a2, 0x20($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x2877ACu, 0x2877B4u)) {
        return;
    }
    ctx->pc = 0x2877B4u;
label_2877b4:
    // 0x2877b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2877b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2877b8: 0xae2306f0  sw          $v1, 0x6F0($s1)
    ctx->pc = 0x2877b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1776), GPR_U32(ctx, 3));
    // 0x2877bc: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x2877bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
label_2877c0:
    // 0x2877c0: 0x26106a60  addiu       $s0, $s0, 0x6A60
    ctx->pc = 0x2877c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27232));
    // 0x2877c4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2877c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2877c8: 0x2611ff80  addiu       $s1, $s0, -0x80
    ctx->pc = 0x2877c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x2877cc: 0xc08994a  jal         func_226528
    ctx->pc = 0x2877CCu;
    SET_GPR_U32(ctx, 31, 0x2877D4u);
    ctx->pc = 0x2877D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877CCu;
    // 0x2877d0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x2877CCu, 0x2877D4u)) {
        return;
    }
    ctx->pc = 0x2877D4u;
label_2877d4:
    // 0x2877d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2877d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2877d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877dc: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x2877DCu;
    SET_GPR_U32(ctx, 31, 0x2877E4u);
    ctx->pc = 0x2877E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877DCu;
    // 0x2877e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x2877DCu, 0x2877E4u)) {
        return;
    }
    ctx->pc = 0x2877E4u;
label_2877e4:
    // 0x2877e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2877e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2877e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2877ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2877ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2877f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2877f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2877f4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2877f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2877f8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2877f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2877fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2877FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877FCu;
        // 0x287800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2877FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287804u;
    // 0x287804: 0x0  nop
    ctx->pc = 0x287804u;
    // NOP
    // 0x287808: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x287808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28780c: 0x0  nop
    ctx->pc = 0x28780cu;
    // NOP
    // 0x287810: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x287810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x287814: 0x0  nop
    ctx->pc = 0x287814u;
    // NOP
    ctx->pc = 0x287818u;
}

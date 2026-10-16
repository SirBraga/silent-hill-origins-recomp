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

// Function: sub_001C4600
// Address: 0x1c4600 - 0x1c47c0
void sub_001C4600_0x1c4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4600_0x1c4600");
#endif

    switch (ctx->pc) {
        case 0x1c462cu: goto label_1c462c;
        case 0x1c4650u: goto label_1c4650;
        case 0x1c4668u: goto label_1c4668;
        case 0x1c46c8u: goto label_1c46c8;
        case 0x1c4700u: goto label_1c4700;
        case 0x1c4720u: goto label_1c4720;
        case 0x1c4748u: goto label_1c4748;
        case 0x1c4794u: goto label_1c4794;
        default: break;
    }

    ctx->pc = 0x1c4600u;

    // 0x1c4600: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c4600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c4604: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c4608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c460c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c4610: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c4610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c4614: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c4618: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x1c4618u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c461c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1c461cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c4620: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1c4620u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c4624: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1C4624u;
    SET_GPR_U32(ctx, 31, 0x1C462Cu);
    ctx->pc = 0x1C4628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4624u;
    // 0x1c4628: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1C4624u, 0x1C462Cu)) {
        return;
    }
    ctx->pc = 0x1C462Cu;
label_1c462c:
    // 0x1c462c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c4630: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x1C4630u;
    {
        const bool branch_taken_0x1c4630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4630) {
            ctx->pc = 0x1C4634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4630u;
            // 0x1c4634: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C4638u;
    // 0x1c4638: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x1c4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c463c: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x1C463Cu;
    {
        const bool branch_taken_0x1c463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c463c) {
            ctx->pc = 0x1C4640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C463Cu;
            // 0x1c4640: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C4644u;
    // 0x1c4644: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c4648: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1C4648u;
    SET_GPR_U32(ctx, 31, 0x1C4650u);
    ctx->pc = 0x1C464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4648u;
    // 0x1c464c: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1C4648u, 0x1C4650u)) {
        return;
    }
    ctx->pc = 0x1C4650u;
label_1c4650:
    // 0x1c4650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4654: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C4654u;
    {
        const bool branch_taken_0x1c4654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4654u;
        // 0x1c4658: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4654) {
            ctx->pc = 0x1C4794u;
            goto label_1c4794;
        }
    }
    ctx->pc = 0x1C465Cu;
    // 0x1c465c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4660: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C4660u;
    SET_GPR_U32(ctx, 31, 0x1C4668u);
    ctx->pc = 0x1C4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4660u;
    // 0x1c4664: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C4660u, 0x1C4668u)) {
        return;
    }
    ctx->pc = 0x1C4668u;
label_1c4668:
    // 0x1c4668: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c4668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c466c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1c466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4670: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1c4670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4674: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x1c4674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4678: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c4678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c467c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1c467cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c4680: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c4680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c4684: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1c4684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c4688: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1c4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c468c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x1c468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c4690: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x1c4690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c4694: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x1c4694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c4698: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x1c4698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c469c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1c469cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c46a0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1c46a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c46a4: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1c46a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c46a8: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1c46a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c46ac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C46ACu;
    {
        const bool branch_taken_0x1c46ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46ac) {
            ctx->pc = 0x1C46B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C46ACu;
            // 0x1c46b0: 0xc614026c  lwc1        $f20, 0x26C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C46CCu;
            goto label_1c46cc;
        }
    }
    ctx->pc = 0x1C46B4u;
    // 0x1c46b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c46b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46b8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1c46b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1c46bc: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x1c46bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1c46c0: 0xc06cda0  jal         func_1B3680
    ctx->pc = 0x1C46C0u;
    SET_GPR_U32(ctx, 31, 0x1C46C8u);
    ctx->pc = 0x1C46C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46C0u;
    // 0x1c46c4: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1C46C0u, 0x1C46C8u)) {
        return;
    }
    ctx->pc = 0x1C46C8u;
label_1c46c8:
    // 0x1c46c8: 0xc614026c  lwc1        $f20, 0x26C($s0)
    ctx->pc = 0x1c46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c46cc:
    // 0x1c46cc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1c46ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1c46d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c46d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c46d4: 0x0  nop
    ctx->pc = 0x1c46d4u;
    // NOP
    // 0x1c46d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c46d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c46dc: 0x0  nop
    ctx->pc = 0x1c46dcu;
    // NOP
    // 0x1c46e0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1C46E0u;
    {
        const bool branch_taken_0x1c46e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46E0u;
        // 0x1c46e4: 0x26120250  addiu       $s2, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46e0) {
            ctx->pc = 0x1C4778u;
            goto label_1c4778;
        }
    }
    ctx->pc = 0x1C46E8u;
    // 0x1c46e8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c46e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c46ec: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1c46ecu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1c46f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c46f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c46f4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1c46f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1c46f8: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1c46f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c46fc: 0x0  nop
    ctx->pc = 0x1c46fcu;
    // NOP
label_1c4700:
    // 0x1c4700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4704: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x1c4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4708: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c4708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c470c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1c470cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c4710: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4714: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x1c4714u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c4718: 0xc085d7e  jal         func_2175F8
    ctx->pc = 0x1C4718u;
    SET_GPR_U32(ctx, 31, 0x1C4720u);
    ctx->pc = 0x1C471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4718u;
    // 0x1c471c: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2175F8u, 0x1C4718u, 0x1C4720u)) {
        return;
    }
    ctx->pc = 0x1C4720u;
label_1c4720:
    // 0x1c4720: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1c4720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4724: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1c4724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4728: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c472c: 0x0  nop
    ctx->pc = 0x1c472cu;
    // NOP
    // 0x1c4730: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4730u;
    {
        const bool branch_taken_0x1c4730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4730u;
        // 0x1c4734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4730) {
            ctx->pc = 0x1C474Cu;
            goto label_1c474c;
        }
    }
    ctx->pc = 0x1C4738u;
    // 0x1c4738: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c473c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c473cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c4740: 0xc085d2a  jal         func_2174A8
    ctx->pc = 0x1C4740u;
    SET_GPR_U32(ctx, 31, 0x1C4748u);
    ctx->pc = 0x1C4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4740u;
    // 0x1c4744: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2174A8u, 0x1C4740u, 0x1C4748u)) {
        return;
    }
    ctx->pc = 0x1C4748u;
label_1c4748:
    // 0x1c4748: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c4748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c474c:
    // 0x1c474c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1c474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4750: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c4750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4754: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4758: 0x0  nop
    ctx->pc = 0x1c4758u;
    // NOP
    // 0x1c475c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1C475Cu;
    {
        const bool branch_taken_0x1c475c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c475c) {
            ctx->pc = 0x1C4760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C475Cu;
            // 0x1c4760: 0x8e080268  lw          $t0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C477Cu;
            goto label_1c477c;
        }
    }
    ctx->pc = 0x1C4764u;
    // 0x1c4764: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x1c4764u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x1c4768: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x1c4768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c476c: 0x0  nop
    ctx->pc = 0x1c476cu;
    // NOP
    // 0x1c4770: 0x4503ffe3  bc1tl       . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C4770u;
    {
        const bool branch_taken_0x1c4770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4770) {
            ctx->pc = 0x1C4774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4770u;
            // 0x1c4774: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4700;
        }
    }
    ctx->pc = 0x1C4778u;
label_1c4778:
    // 0x1c4778: 0x8e080268  lw          $t0, 0x268($s0)
    ctx->pc = 0x1c4778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1c477c:
    // 0x1c477c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4780: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c4784: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c4784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c4788: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c4788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c478c: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1C478Cu;
    SET_GPR_U32(ctx, 31, 0x1C4794u);
    ctx->pc = 0x1C4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C478Cu;
    // 0x1c4790: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1C478Cu, 0x1C4794u)) {
        return;
    }
    ctx->pc = 0x1C4794u;
label_1c4794:
    // 0x1c4794: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c4794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4798:
    // 0x1c4798: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c4798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c479c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c479cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c47a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c47a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c47a4: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x1c47a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c47a8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1c47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c47ac: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1c47acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c47b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c47b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c47b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C47B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47B4u;
        // 0x1c47b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C47B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C47BCu;
    // 0x1c47bc: 0x0  nop
    ctx->pc = 0x1c47bcu;
    // NOP
    ctx->pc = 0x1c47c0u;
}

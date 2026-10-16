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

// Function: sub_002560E0
// Address: 0x2560e0 - 0x256250
void sub_002560E0_0x2560e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002560E0_0x2560e0");
#endif

    switch (ctx->pc) {
        case 0x25611cu: goto label_25611c;
        case 0x256178u: goto label_256178;
        default: break;
    }

    ctx->pc = 0x2560e0u;

    // 0x2560e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2560e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2560e4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2560e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2560e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2560e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2560ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2560ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560f0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2560f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2560f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2560f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560f8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2560f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2560fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2560fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x256100: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x256100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x256104: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x256104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x256108: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x256108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25610c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x25610cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x256110: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x256110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x256114: 0xc088b4a  jal         func_222D28
    ctx->pc = 0x256114u;
    SET_GPR_U32(ctx, 31, 0x25611Cu);
    ctx->pc = 0x256118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256114u;
    // 0x256118: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222D28u, 0x256114u, 0x25611Cu)) {
        return;
    }
    ctx->pc = 0x25611Cu;
label_25611c:
    // 0x25611c: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x25611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x256120: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x256120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256124: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x256124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256128: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x256128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25612c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x25612cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x256130: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x256130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256134: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x256134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256138: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x256138u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x25613c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25613cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x256140: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x256140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x256144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256148: 0x0  nop
    ctx->pc = 0x256148u;
    // NOP
    // 0x25614c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25614cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x256150: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x256150u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x256154: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x256154u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x256158: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x256158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25615c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x25615cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x256160: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x256160u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x256164: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x256164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x256168: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x256168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25616c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25616Cu;
    {
        const bool branch_taken_0x25616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25616Cu;
        // 0x256170: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25616c) {
            ctx->pc = 0x2561D0u;
            goto label_2561d0;
        }
    }
    ctx->pc = 0x256174u;
    // 0x256174: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x256174u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_256178:
    // 0x256178: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x256178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25617c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x25617cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x256180: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x256180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x256184: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x256184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256188: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x256188u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25618c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x25618cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x256190: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x256190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256194: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x256194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x256198: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x256198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25619c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x25619cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2561a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2561a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2561a4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2561a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2561a8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2561a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2561ac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2561acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2561b0: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2561b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2561b4: 0x0  nop
    ctx->pc = 0x2561b4u;
    // NOP
    // 0x2561b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2561B8u;
    {
        const bool branch_taken_0x2561b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2561b8) {
            ctx->pc = 0x2561BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2561B8u;
            // 0x2561bc: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2561C0u;
            goto label_2561c0;
        }
    }
    ctx->pc = 0x2561C0u;
label_2561c0:
    // 0x2561c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2561c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2561c4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2561c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2561c8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2561C8u;
    {
        const bool branch_taken_0x2561c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2561CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561C8u;
        // 0x2561cc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561c8) {
            ctx->pc = 0x256178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256178;
        }
    }
    ctx->pc = 0x2561D0u;
label_2561d0:
    // 0x2561d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2561d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2561d4: 0x0  nop
    ctx->pc = 0x2561d4u;
    // NOP
    // 0x2561d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2561d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2561dc: 0x0  nop
    ctx->pc = 0x2561dcu;
    // NOP
    // 0x2561e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2561E0u;
    {
        const bool branch_taken_0x2561e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2561e0) {
            ctx->pc = 0x2561F8u;
            goto label_2561f8;
        }
    }
    ctx->pc = 0x2561E8u;
    // 0x2561e8: 0x0  nop
    ctx->pc = 0x2561e8u;
    // NOP
    // 0x2561ec: 0x0  nop
    ctx->pc = 0x2561ecu;
    // NOP
    // 0x2561f0: 0x46140504  c1          0x140504
    ctx->pc = 0x2561f0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[20]);
    // 0x2561f4: 0x0  nop
    ctx->pc = 0x2561f4u;
    // NOP
label_2561f8:
    // 0x2561f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2561fc: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x2561fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
    // 0x256200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256204: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x256204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256208: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x256208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25620c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x25620cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x256210: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x256210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256214: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x256214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256218: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x256218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25621c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x25621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x256220: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x256220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x256224: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x256224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x256228: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x256228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x25622c: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x25622cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x256230: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x256230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256234: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x256234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256238: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x256238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25623c: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x25623cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x256240: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x256240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256244: 0x3e00008  jr          $ra
    ctx->pc = 0x256244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256244u;
        // 0x256248: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25624Cu;
    // 0x25624c: 0x0  nop
    ctx->pc = 0x25624cu;
    // NOP
    ctx->pc = 0x256250u;
}

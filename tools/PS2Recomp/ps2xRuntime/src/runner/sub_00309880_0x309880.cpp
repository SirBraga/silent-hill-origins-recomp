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

// Function: sub_00309880
// Address: 0x309880 - 0x3099d0
void sub_00309880_0x309880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309880_0x309880");
#endif

    switch (ctx->pc) {
        case 0x309904u: goto label_309904;
        case 0x309914u: goto label_309914;
        case 0x309920u: goto label_309920;
        case 0x309948u: goto label_309948;
        case 0x309960u: goto label_309960;
        case 0x30996cu: goto label_30996c;
        default: break;
    }

    ctx->pc = 0x309880u;

    // 0x309880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x309884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309888: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x309888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30988c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x309890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309894: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x309894u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x309898: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x309898u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30989c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x30989cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3098a0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3098a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3098a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3098a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3098a8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3098a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3098ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3098acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3098b0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3098b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x3098b4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3098b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x3098b8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3098b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x3098bc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3098bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x3098c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3098c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3098c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3098c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3098c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3098c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3098cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3098ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3098d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3098d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3098d4: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x3098d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3098d8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3098d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x3098dc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3098dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x3098e0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3098e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x3098e4: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x3098e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x3098e8: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3098e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3098ec: 0xc7968338  lwc1        $f22, -0x7CC8($gp)
    ctx->pc = 0x3098ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3098f0: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x3098f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x3098f4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3098f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x3098f8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3098f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3098fc: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x3098FCu;
    SET_GPR_U32(ctx, 31, 0x309904u);
    ctx->pc = 0x309900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3098FCu;
    // 0x309900: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x3098FCu, 0x309904u)) {
        return;
    }
    ctx->pc = 0x309904u;
label_309904:
    // 0x309904: 0xc795833c  lwc1        $f21, -0x7CC4($gp)
    ctx->pc = 0x309904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x309908: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x309908u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x30990c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x30990Cu;
    SET_GPR_U32(ctx, 31, 0x309914u);
    ctx->pc = 0x309910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30990Cu;
    // 0x309910: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x30990Cu, 0x309914u)) {
        return;
    }
    ctx->pc = 0x309914u;
label_309914:
    // 0x309914: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x309914u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x309918: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x309918u;
    SET_GPR_U32(ctx, 31, 0x309920u);
    ctx->pc = 0x30991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309918u;
    // 0x30991c: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x309918u, 0x309920u)) {
        return;
    }
    ctx->pc = 0x309920u;
label_309920:
    // 0x309920: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x309920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x309924: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x309924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x309928: 0xc4573dd0  lwc1        $f23, 0x3DD0($v0)
    ctx->pc = 0x309928u;
    { uint32_t bits = FAST_READ32(0x6B3DD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x30992c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x30992cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x309930: 0xe6150068  swc1        $f21, 0x68($s0)
    ctx->pc = 0x309930u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x309934: 0xe615006c  swc1        $f21, 0x6C($s0)
    ctx->pc = 0x309934u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x309938: 0xe6170070  swc1        $f23, 0x70($s0)
    ctx->pc = 0x309938u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x30993c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x30993cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x309940: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x309940u;
    SET_GPR_U32(ctx, 31, 0x309948u);
    ctx->pc = 0x309944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309940u;
    // 0x309944: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x309940u, 0x309948u)) {
        return;
    }
    ctx->pc = 0x309948u;
label_309948:
    // 0x309948: 0xe6150074  swc1        $f21, 0x74($s0)
    ctx->pc = 0x309948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x30994c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x30994cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x309950: 0xe6150078  swc1        $f21, 0x78($s0)
    ctx->pc = 0x309950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x309954: 0xe617007c  swc1        $f23, 0x7C($s0)
    ctx->pc = 0x309954u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x309958: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x309958u;
    SET_GPR_U32(ctx, 31, 0x309960u);
    ctx->pc = 0x30995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309958u;
    // 0x30995c: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x309958u, 0x309960u)) {
        return;
    }
    ctx->pc = 0x309960u;
label_309960:
    // 0x309960: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x309960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x309964: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x309964u;
    SET_GPR_U32(ctx, 31, 0x30996Cu);
    ctx->pc = 0x309968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309964u;
    // 0x309968: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x309964u, 0x30996Cu)) {
        return;
    }
    ctx->pc = 0x30996Cu;
label_30996c:
    // 0x30996c: 0xe61500ac  swc1        $f21, 0xAC($s0)
    ctx->pc = 0x30996cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x309970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309974: 0xe61700b0  swc1        $f23, 0xB0($s0)
    ctx->pc = 0x309974u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x309978: 0xe6150080  swc1        $f21, 0x80($s0)
    ctx->pc = 0x309978u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x30997c: 0xe6150084  swc1        $f21, 0x84($s0)
    ctx->pc = 0x30997cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x309980: 0xe6170088  swc1        $f23, 0x88($s0)
    ctx->pc = 0x309980u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x309984: 0xe6150090  swc1        $f21, 0x90($s0)
    ctx->pc = 0x309984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x309988: 0xe6150094  swc1        $f21, 0x94($s0)
    ctx->pc = 0x309988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x30998c: 0xe6170098  swc1        $f23, 0x98($s0)
    ctx->pc = 0x30998cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x309990: 0xe615009c  swc1        $f21, 0x9C($s0)
    ctx->pc = 0x309990u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x309994: 0xe61500a0  swc1        $f21, 0xA0($s0)
    ctx->pc = 0x309994u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x309998: 0xe61700a4  swc1        $f23, 0xA4($s0)
    ctx->pc = 0x309998u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x30999c: 0xe61500a8  swc1        $f21, 0xA8($s0)
    ctx->pc = 0x30999cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x3099a0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3099a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3099a4: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3099a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x3099a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3099a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3099ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3099acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3099b0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x3099b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3099b4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x3099b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3099b8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x3099b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3099bc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3099bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3099c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3099C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099C0u;
        // 0x3099c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3099C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3099C8u;
    // 0x3099c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3099c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3099cc: 0x0  nop
    ctx->pc = 0x3099ccu;
    // NOP
    ctx->pc = 0x3099d0u;
}

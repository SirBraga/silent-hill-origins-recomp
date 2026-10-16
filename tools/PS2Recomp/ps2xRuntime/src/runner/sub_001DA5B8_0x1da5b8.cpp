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

// Function: sub_001DA5B8
// Address: 0x1da5b8 - 0x1da6c0
void sub_001DA5B8_0x1da5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA5B8_0x1da5b8");
#endif

    switch (ctx->pc) {
        case 0x1da60cu: goto label_1da60c;
        case 0x1da618u: goto label_1da618;
        default: break;
    }

    ctx->pc = 0x1da5b8u;

    // 0x1da5b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1da5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1da5bc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1da5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1da5c0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1da5c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1da5c4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1da5c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1da5c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1da5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1da5cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1da5ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1da5d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1da5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1da5d4: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1da5d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1da5d8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1da5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1da5dc: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1da5dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1da5e0: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1da5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1da5e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1da5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1da5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da5ec: 0x3210003f  andi        $s0, $s0, 0x3F
    ctx->pc = 0x1da5ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x1da5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da5f4: 0x3273003f  andi        $s3, $s3, 0x3F
    ctx->pc = 0x1da5f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x1da5f8: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x1da5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1da5fc: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x1da5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1da600: 0x3231003f  andi        $s1, $s1, 0x3F
    ctx->pc = 0x1da600u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x1da604: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1DA604u;
    SET_GPR_U32(ctx, 31, 0x1DA60Cu);
    ctx->pc = 0x1DA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA604u;
    // 0x1da608: 0x3252003f  andi        $s2, $s2, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1DA604u, 0x1DA60Cu)) {
        return;
    }
    ctx->pc = 0x1DA60Cu;
label_1da60c:
    // 0x1da60c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1da60cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1da610: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1DA610u;
    SET_GPR_U32(ctx, 31, 0x1DA618u);
    ctx->pc = 0x1DA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA610u;
    // 0x1da614: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1DA610u, 0x1DA618u)) {
        return;
    }
    ctx->pc = 0x1DA618u;
label_1da618:
    // 0x1da618: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1da618u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1da61c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1da61cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1da620: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1da620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1da624: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1da624u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1da628: 0x139a00  sll         $s3, $s3, 8
    ctx->pc = 0x1da628u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x1da62c: 0x2129021  addu        $s2, $s0, $s2
    ctx->pc = 0x1da62cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1da630: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1da630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1da634: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1da634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1da638: 0x2442a640  addiu       $v0, $v0, -0x59C0
    ctx->pc = 0x1da638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944320));
    // 0x1da63c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1da63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1da640: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1da640u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1da644: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1da644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1da648: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1da648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1da64c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1da64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1da650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da654: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1da654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da658: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1da658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da65c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1da65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da660: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1da660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da664: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1da664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1da668: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1da668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da66c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1da66cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1da670: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1da670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da678: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1da678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1da67c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1da67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da680: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1da680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1da684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da688: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1da688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1da68c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1da68cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1da690: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1da690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1da694: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1da694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1da698: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1da698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1da69c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1da69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1da6a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6A4u;
        // 0x1da6a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA6ACu;
    // 0x1da6ac: 0x0  nop
    ctx->pc = 0x1da6acu;
    // NOP
    // 0x1da6b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1da6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1da6b4: 0x0  nop
    ctx->pc = 0x1da6b4u;
    // NOP
    // 0x1da6b8: 0x0  nop
    ctx->pc = 0x1da6b8u;
    // NOP
    // 0x1da6bc: 0x0  nop
    ctx->pc = 0x1da6bcu;
    // NOP
    ctx->pc = 0x1da6c0u;
}

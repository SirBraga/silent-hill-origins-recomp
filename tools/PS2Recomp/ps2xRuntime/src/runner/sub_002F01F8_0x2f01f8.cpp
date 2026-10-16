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

// Function: sub_002F01F8
// Address: 0x2f01f8 - 0x2f02f0
void sub_002F01F8_0x2f01f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F01F8_0x2f01f8");
#endif

    ctx->pc = 0x2f01f8u;

    // 0x2f01f8: 0xc4ab0008  lwc1        $f11, 0x8($a1)
    ctx->pc = 0x2f01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2f01fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f01fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0200: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f0200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f0204: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f0204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f0208: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x2f0208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2f020c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2f020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f0210: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2f0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f0214: 0x46065842  mul.s       $f1, $f11, $f6
    ctx->pc = 0x2f0214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2f0218: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x2f0218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2f021c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f021cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f0220: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2f0220u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0224: 0x0  nop
    ctx->pc = 0x2f0224u;
    // NOP
    // 0x2f0228: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x2F0228u;
    {
        const bool branch_taken_0x2f0228 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0228u;
        // 0x2f022c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0228) {
            ctx->pc = 0x2F02C4u;
            goto label_2f02c4;
        }
    }
    ctx->pc = 0x2F0230u;
    // 0x2f0230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f0230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0234: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f0234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f0238: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x2f0238u;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x2f023c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x2f023cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x2f0240: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x2f0240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2f0244: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x2f0244u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[1]);
    // 0x2f0248: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2f0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f024c: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x2f024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2f0250: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x2f0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f0254: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2f0254u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f0258: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x2f0258u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f025c: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x2f025cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f0260: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x2f0260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2f0264: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x2f0264u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2f0268: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2f0268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2f026c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f026cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2f0270: 0x46040982  mul.s       $f6, $f1, $f4
    ctx->pc = 0x2f0270u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2f0274: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2f0274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f0278: 0x46071242  mul.s       $f9, $f2, $f7
    ctx->pc = 0x2f0278u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2f027c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2f027cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f0280: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2f0280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f0284: 0x46050282  mul.s       $f10, $f0, $f5
    ctx->pc = 0x2f0284u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2f0288: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2f0288u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2f028c: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x2f028cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2f0290: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2f0290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2f0294: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2f0294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2f0298: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2f0298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2f029c: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x2f029cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x2f02a0: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x2f02a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x2f02a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2f02a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2f02a8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2f02a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2f02ac: 0xe4860008  swc1        $f6, 0x8($a0)
    ctx->pc = 0x2f02acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f02b0: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2f02b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2f02b4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2f02b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f02b8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f02b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f02bc: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x2f02bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f02c0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2f02c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2f02c4:
    // 0x2f02c4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2f02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f02c8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2f02c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f02cc: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x2f02ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f02d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f02d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f02d4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2f02d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2f02d8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2f02d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f02dc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2f02dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2f02e0: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x2f02e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2f02e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F02E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02E4u;
        // 0x2f02e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F02E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F02ECu;
    // 0x2f02ec: 0x0  nop
    ctx->pc = 0x2f02ecu;
    // NOP
    ctx->pc = 0x2f02f0u;
}

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

// Function: sub_0021A130
// Address: 0x21a130 - 0x21a288
void sub_0021A130_0x21a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A130_0x21a130");
#endif

    switch (ctx->pc) {
        case 0x21a198u: goto label_21a198;
        case 0x21a23cu: goto label_21a23c;
        default: break;
    }

    ctx->pc = 0x21a130u;

    // 0x21a130: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21a134: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21a134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x21a138: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21a13c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x21a140: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21a140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21a148: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x21a148u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21a14c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x21a14cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21a150: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21a150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x21a154: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x21a154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21a158: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A158u;
    {
        const bool branch_taken_0x21a158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A158u;
        // 0x21a15c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a158) {
            ctx->pc = 0x21A170u;
            goto label_21a170;
        }
    }
    ctx->pc = 0x21A160u;
    // 0x21a160: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x21a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x21a164: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x21a164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21a168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A168u;
    {
        const bool branch_taken_0x21a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A168u;
        // 0x21a16c: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a168) {
            ctx->pc = 0x21A17Cu;
            goto label_21a17c;
        }
    }
    ctx->pc = 0x21A170u;
label_21a170:
    // 0x21a170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a174: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21A174u;
    {
        const bool branch_taken_0x21a174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A174u;
        // 0x21a178: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a174) {
            ctx->pc = 0x21A268u;
            goto label_21a268;
        }
    }
    ctx->pc = 0x21A17Cu;
label_21a17c:
    // 0x21a17c: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x21a17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21a180: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x21a180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21a184: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21A184u;
    {
        const bool branch_taken_0x21a184 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A184u;
        // 0x21a188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a184) {
            ctx->pc = 0x21A260u;
            goto label_21a260;
        }
    }
    ctx->pc = 0x21A18Cu;
    // 0x21a18c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21a18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21a190: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21a190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x21a194: 0x0  nop
    ctx->pc = 0x21a194u;
    // NOP
label_21a198:
    // 0x21a198: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a19c: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x21a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21a1a0: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x21a1a0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x21a1a4: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x21a1a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21a1a8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x21a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a1ac: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x21a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21a1b0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x21a1b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x21a1b4: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x21a1b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21a1b8: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x21a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21a1bc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x21a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a1c0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x21a1c0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x21a1c4: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x21a1c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21a1c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21a1cc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x21a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21a1d0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a1d4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x21a1d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21a1d8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x21a1d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21a1dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21a1e0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x21a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a1e4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x21a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a1e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x21a1e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21a1ec: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x21a1ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21a1f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21a1f4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x21a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a1f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a1fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21a1fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21a200: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x21a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21a204: 0x46002982  mul.s       $f6, $f5, $f0
    ctx->pc = 0x21a204u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x21a208: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x21a208u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x21a20c: 0x46023842  mul.s       $f1, $f7, $f2
    ctx->pc = 0x21a20cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x21a210: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x21a210u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x21a214: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x21a214u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x21a218: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x21a218u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x21a21c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x21a21cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x21a220: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x21a220u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x21a224: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x21a224u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x21a228: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x21a228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x21a22c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x21a22cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21a230: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x21a230u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21a234: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x21A234u;
    SET_GPR_U32(ctx, 31, 0x21A23Cu);
    ctx->pc = 0x21A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A234u;
    // 0x21a238: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x21A234u, 0x21A23Cu)) {
        return;
    }
    ctx->pc = 0x21A23Cu;
label_21a23c:
    // 0x21a23c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21a23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21a240: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x21a240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x21a244: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x21a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x21a248: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x21a248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21a24c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x21a250: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x21a250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a254: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x21A254u;
    {
        const bool branch_taken_0x21a254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A254u;
        // 0x21a258: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a254) {
            ctx->pc = 0x21A198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a198;
        }
    }
    ctx->pc = 0x21A25Cu;
    // 0x21a25c: 0x0  nop
    ctx->pc = 0x21a25cu;
    // NOP
label_21a260:
    // 0x21a260: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x21a260u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x21a264: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21a264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21a268:
    // 0x21a268: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21a268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a26c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x21a26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a270: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21a270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a274: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21a274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a278: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x21a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21a27c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x21a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21a280: 0x3e00008  jr          $ra
    ctx->pc = 0x21A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A280u;
        // 0x21a284: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A288u;
}

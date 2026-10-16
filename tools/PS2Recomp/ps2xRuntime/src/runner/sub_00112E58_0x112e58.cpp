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

// Function: sub_00112E58
// Address: 0x112e58 - 0x112fb8
void sub_00112E58_0x112e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112E58_0x112e58");
#endif

    switch (ctx->pc) {
        case 0x112e58u: goto label_112e58;
        case 0x112e5cu: goto label_112e5c;
        case 0x112e60u: goto label_112e60;
        case 0x112e64u: goto label_112e64;
        case 0x112e68u: goto label_112e68;
        case 0x112e6cu: goto label_112e6c;
        case 0x112e70u: goto label_112e70;
        case 0x112e74u: goto label_112e74;
        case 0x112e78u: goto label_112e78;
        case 0x112e7cu: goto label_112e7c;
        case 0x112e80u: goto label_112e80;
        case 0x112e84u: goto label_112e84;
        case 0x112e88u: goto label_112e88;
        case 0x112e8cu: goto label_112e8c;
        case 0x112e90u: goto label_112e90;
        case 0x112e94u: goto label_112e94;
        case 0x112e98u: goto label_112e98;
        case 0x112e9cu: goto label_112e9c;
        case 0x112ea0u: goto label_112ea0;
        case 0x112ea4u: goto label_112ea4;
        case 0x112ea8u: goto label_112ea8;
        case 0x112eacu: goto label_112eac;
        case 0x112eb0u: goto label_112eb0;
        case 0x112eb4u: goto label_112eb4;
        case 0x112eb8u: goto label_112eb8;
        case 0x112ebcu: goto label_112ebc;
        case 0x112ec0u: goto label_112ec0;
        case 0x112ec4u: goto label_112ec4;
        case 0x112ec8u: goto label_112ec8;
        case 0x112eccu: goto label_112ecc;
        case 0x112ed0u: goto label_112ed0;
        case 0x112ed4u: goto label_112ed4;
        case 0x112ed8u: goto label_112ed8;
        case 0x112edcu: goto label_112edc;
        case 0x112ee0u: goto label_112ee0;
        case 0x112ee4u: goto label_112ee4;
        case 0x112ee8u: goto label_112ee8;
        case 0x112eecu: goto label_112eec;
        case 0x112ef0u: goto label_112ef0;
        case 0x112ef4u: goto label_112ef4;
        case 0x112ef8u: goto label_112ef8;
        case 0x112efcu: goto label_112efc;
        case 0x112f00u: goto label_112f00;
        case 0x112f04u: goto label_112f04;
        case 0x112f08u: goto label_112f08;
        case 0x112f0cu: goto label_112f0c;
        case 0x112f10u: goto label_112f10;
        case 0x112f14u: goto label_112f14;
        case 0x112f18u: goto label_112f18;
        case 0x112f1cu: goto label_112f1c;
        case 0x112f20u: goto label_112f20;
        case 0x112f24u: goto label_112f24;
        case 0x112f28u: goto label_112f28;
        case 0x112f2cu: goto label_112f2c;
        case 0x112f30u: goto label_112f30;
        case 0x112f34u: goto label_112f34;
        case 0x112f38u: goto label_112f38;
        case 0x112f3cu: goto label_112f3c;
        case 0x112f40u: goto label_112f40;
        case 0x112f44u: goto label_112f44;
        case 0x112f48u: goto label_112f48;
        case 0x112f4cu: goto label_112f4c;
        case 0x112f50u: goto label_112f50;
        case 0x112f54u: goto label_112f54;
        case 0x112f58u: goto label_112f58;
        case 0x112f5cu: goto label_112f5c;
        case 0x112f60u: goto label_112f60;
        case 0x112f64u: goto label_112f64;
        case 0x112f68u: goto label_112f68;
        case 0x112f6cu: goto label_112f6c;
        case 0x112f70u: goto label_112f70;
        case 0x112f74u: goto label_112f74;
        case 0x112f78u: goto label_112f78;
        case 0x112f7cu: goto label_112f7c;
        case 0x112f80u: goto label_112f80;
        case 0x112f84u: goto label_112f84;
        case 0x112f88u: goto label_112f88;
        case 0x112f8cu: goto label_112f8c;
        case 0x112f90u: goto label_112f90;
        case 0x112f94u: goto label_112f94;
        case 0x112f98u: goto label_112f98;
        case 0x112f9cu: goto label_112f9c;
        case 0x112fa0u: goto label_112fa0;
        case 0x112fa4u: goto label_112fa4;
        case 0x112fa8u: goto label_112fa8;
        case 0x112facu: goto label_112fac;
        case 0x112fb0u: goto label_112fb0;
        case 0x112fb4u: goto label_112fb4;
        default: break;
    }

    ctx->pc = 0x112e58u;

label_112e58:
    // 0x112e58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_112e5c:
    // 0x112e5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x112e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_112e60:
    // 0x112e60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x112e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_112e64:
    // 0x112e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112e68:
    // 0x112e68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x112e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_112e6c:
    // 0x112e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_112e70:
    // 0x112e70: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x112e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_112e74:
    // 0x112e74: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
label_112e78:
    if (ctx->pc == 0x112E78u) {
        ctx->pc = 0x112E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E74u;
        // 0x112e78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E7Cu;
        goto label_112e7c;
    }
    ctx->pc = 0x112E74u;
    {
        const bool branch_taken_0x112e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e74) {
            ctx->pc = 0x112E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112E74u;
            // 0x112e78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112FA0u;
            goto label_112fa0;
        }
    }
    ctx->pc = 0x112E7Cu;
label_112e7c:
    // 0x112e7c: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x112e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112e80:
    // 0x112e80: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x112e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112e84:
    // 0x112e84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x112e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_112e88:
    // 0x112e88: 0x0  nop
    ctx->pc = 0x112e88u;
    // NOP
label_112e8c:
    // 0x112e8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_112e90:
    if (ctx->pc == 0x112E90u) {
        ctx->pc = 0x112E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E8Cu;
        // 0x112e90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E94u;
        goto label_112e94;
    }
    ctx->pc = 0x112E8Cu;
    {
        const bool branch_taken_0x112e8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x112E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E8Cu;
        // 0x112e90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e8c) {
            ctx->pc = 0x112E98u;
            goto label_112e98;
        }
    }
    ctx->pc = 0x112E94u;
label_112e94:
    // 0x112e94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e98:
    // 0x112e98: 0xc044f92  jal         func_113E48
label_112e9c:
    if (ctx->pc == 0x112E9Cu) {
        ctx->pc = 0x112E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E98u;
        // 0x112e9c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112EA0u;
        goto label_112ea0;
    }
    ctx->pc = 0x112E98u;
    SET_GPR_U32(ctx, 31, 0x112EA0u);
    ctx->pc = 0x112E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E98u;
    // 0x112e9c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113E48u, 0x112E98u, 0x112EA0u)) {
        return;
    }
    ctx->pc = 0x112EA0u;
label_112ea0:
    // 0x112ea0: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x112ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112ea4:
    // 0x112ea4: 0x260300d8  addiu       $v1, $s0, 0xD8
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_112ea8:
    // 0x112ea8: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x112ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_112eac:
    // 0x112eac: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x112eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_112eb0:
    // 0x112eb0: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x112eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112eb4:
    // 0x112eb4: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x112eb4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_112eb8:
    // 0x112eb8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x112eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112ebc:
    // 0x112ebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112ec0:
    // 0x112ec0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x112ec0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_112ec4:
    // 0x112ec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_112ec8:
    // 0x112ec8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_112ecc:
    // 0x112ecc: 0xc0446c6  jal         func_111B18
label_112ed0:
    if (ctx->pc == 0x112ED0u) {
        ctx->pc = 0x112ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112ECCu;
        // 0x112ed0: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112ED4u;
        goto label_112ed4;
    }
    ctx->pc = 0x112ECCu;
    SET_GPR_U32(ctx, 31, 0x112ED4u);
    ctx->pc = 0x112ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112ECCu;
    // 0x112ed0: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x112ECCu, 0x112ED4u)) {
        return;
    }
    ctx->pc = 0x112ED4u;
label_112ed4:
    // 0x112ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_112ed8:
    // 0x112ed8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x112ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_112edc:
    // 0x112edc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x112edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112ee0:
    // 0x112ee0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x112ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_112ee4:
    // 0x112ee4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x112ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_112ee8:
    // 0x112ee8: 0x46001b01  sub.s       $f12, $f3, $f0
    ctx->pc = 0x112ee8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_112eec:
    // 0x112eec: 0xc60400b4  lwc1        $f4, 0xB4($s0)
    ctx->pc = 0x112eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_112ef0:
    // 0x112ef0: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x112ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_112ef4:
    // 0x112ef4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x112ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_112ef8:
    // 0x112ef8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x112ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_112efc:
    // 0x112efc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_112f00:
    if (ctx->pc == 0x112F00u) {
        ctx->pc = 0x112F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EFCu;
        // 0x112f00: 0x46001b01  sub.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F04u;
        goto label_112f04;
    }
    ctx->pc = 0x112EFCu;
    {
        const bool branch_taken_0x112efc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EFCu;
        // 0x112f00: 0x46001b01  sub.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112efc) {
            ctx->pc = 0x112F14u;
            goto label_112f14;
        }
    }
    ctx->pc = 0x112F04u;
label_112f04:
    // 0x112f04: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x112f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_112f08:
    // 0x112f08: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x112f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_112f0c:
    // 0x112f0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_112f10:
    if (ctx->pc == 0x112F10u) {
        ctx->pc = 0x112F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F0Cu;
        // 0x112f10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F14u;
        goto label_112f14;
    }
    ctx->pc = 0x112F0Cu;
    {
        const bool branch_taken_0x112f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F0Cu;
        // 0x112f10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f0c) {
            ctx->pc = 0x112F20u;
            goto label_112f20;
        }
    }
    ctx->pc = 0x112F14u;
label_112f14:
    // 0x112f14: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x112f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_112f18:
    // 0x112f18: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x112f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_112f1c:
    // 0x112f1c: 0x46040300  add.s       $f12, $f0, $f4
    ctx->pc = 0x112f1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_112f20:
    // 0x112f20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x112f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112f24:
    // 0x112f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112f28:
    // 0x112f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112f2c:
    // 0x112f2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x112f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_112f30:
    // 0x112f30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x112f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112f34:
    // 0x112f34: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x112f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_112f38:
    // 0x112f38: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x112f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_112f3c:
    // 0x112f3c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x112f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_112f40:
    // 0x112f40: 0x40f809  jalr        $v0
label_112f44:
    if (ctx->pc == 0x112F44u) {
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F48u;
        goto label_112f48;
    }
    ctx->pc = 0x112F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112F48u);
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112F40u, 0x112F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112F48u;
label_112f48:
    // 0x112f48: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x112f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112f4c:
    // 0x112f4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_112f50:
    // 0x112f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_112f54:
    // 0x112f54: 0x0  nop
    ctx->pc = 0x112f54u;
    // NOP
label_112f58:
    // 0x112f58: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x112f58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_112f5c:
    // 0x112f5c: 0x0  nop
    ctx->pc = 0x112f5cu;
    // NOP
label_112f60:
    // 0x112f60: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_112f64:
    if (ctx->pc == 0x112F64u) {
        ctx->pc = 0x112F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F60u;
        // 0x112f64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F68u;
        goto label_112f68;
    }
    ctx->pc = 0x112F60u;
    {
        const bool branch_taken_0x112f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x112f60) {
            ctx->pc = 0x112F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112F60u;
            // 0x112f64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112FA0u;
            goto label_112fa0;
        }
    }
    ctx->pc = 0x112F68u;
label_112f68:
    // 0x112f68: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_112f6c:
    if (ctx->pc == 0x112F6Cu) {
        ctx->pc = 0x112F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F68u;
        // 0x112f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F70u;
        goto label_112f70;
    }
    ctx->pc = 0x112F68u;
    {
        const bool branch_taken_0x112f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F68u;
        // 0x112f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f68) {
            ctx->pc = 0x112F9Cu;
            goto label_112f9c;
        }
    }
    ctx->pc = 0x112F70u;
label_112f70:
    // 0x112f70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112f74:
    // 0x112f74: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x112f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_112f78:
    // 0x112f78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112f7c:
    // 0x112f7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_112f80:
    // 0x112f80: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_112f84:
    // 0x112f84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x112f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112f88:
    // 0x112f88: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x112f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_112f8c:
    // 0x112f8c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x112f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_112f90:
    // 0x112f90: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x112f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_112f94:
    // 0x112f94: 0x40f809  jalr        $v0
label_112f98:
    if (ctx->pc == 0x112F98u) {
        ctx->pc = 0x112F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F94u;
        // 0x112f98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F9Cu;
        goto label_112f9c;
    }
    ctx->pc = 0x112F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112F9Cu);
        ctx->pc = 0x112F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F94u;
        // 0x112f98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112F94u, 0x112F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112F9Cu;
label_112f9c:
    // 0x112f9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x112f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_112fa0:
    // 0x112fa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x112fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_112fa4:
    // 0x112fa4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x112fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_112fa8:
    // 0x112fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112fac:
    // 0x112fac: 0x3e00008  jr          $ra
label_112fb0:
    if (ctx->pc == 0x112FB0u) {
        ctx->pc = 0x112FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FACu;
        // 0x112fb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FB4u;
        goto label_112fb4;
    }
    ctx->pc = 0x112FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FACu;
        // 0x112fb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112FB4u;
label_112fb4:
    // 0x112fb4: 0x0  nop
    ctx->pc = 0x112fb4u;
    // NOP
    ctx->pc = 0x112fb8u;
}

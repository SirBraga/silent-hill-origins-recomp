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

// Function: sub_002A9E80
// Address: 0x2a9e80 - 0x2a9f80
void sub_002A9E80_0x2a9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9E80_0x2a9e80");
#endif

    switch (ctx->pc) {
        case 0x2a9e80u: goto label_2a9e80;
        case 0x2a9e84u: goto label_2a9e84;
        case 0x2a9e88u: goto label_2a9e88;
        case 0x2a9e8cu: goto label_2a9e8c;
        case 0x2a9e90u: goto label_2a9e90;
        case 0x2a9e94u: goto label_2a9e94;
        case 0x2a9e98u: goto label_2a9e98;
        case 0x2a9e9cu: goto label_2a9e9c;
        case 0x2a9ea0u: goto label_2a9ea0;
        case 0x2a9ea4u: goto label_2a9ea4;
        case 0x2a9ea8u: goto label_2a9ea8;
        case 0x2a9eacu: goto label_2a9eac;
        case 0x2a9eb0u: goto label_2a9eb0;
        case 0x2a9eb4u: goto label_2a9eb4;
        case 0x2a9eb8u: goto label_2a9eb8;
        case 0x2a9ebcu: goto label_2a9ebc;
        case 0x2a9ec0u: goto label_2a9ec0;
        case 0x2a9ec4u: goto label_2a9ec4;
        case 0x2a9ec8u: goto label_2a9ec8;
        case 0x2a9eccu: goto label_2a9ecc;
        case 0x2a9ed0u: goto label_2a9ed0;
        case 0x2a9ed4u: goto label_2a9ed4;
        case 0x2a9ed8u: goto label_2a9ed8;
        case 0x2a9edcu: goto label_2a9edc;
        case 0x2a9ee0u: goto label_2a9ee0;
        case 0x2a9ee4u: goto label_2a9ee4;
        case 0x2a9ee8u: goto label_2a9ee8;
        case 0x2a9eecu: goto label_2a9eec;
        case 0x2a9ef0u: goto label_2a9ef0;
        case 0x2a9ef4u: goto label_2a9ef4;
        case 0x2a9ef8u: goto label_2a9ef8;
        case 0x2a9efcu: goto label_2a9efc;
        case 0x2a9f00u: goto label_2a9f00;
        case 0x2a9f04u: goto label_2a9f04;
        case 0x2a9f08u: goto label_2a9f08;
        case 0x2a9f0cu: goto label_2a9f0c;
        case 0x2a9f10u: goto label_2a9f10;
        case 0x2a9f14u: goto label_2a9f14;
        case 0x2a9f18u: goto label_2a9f18;
        case 0x2a9f1cu: goto label_2a9f1c;
        case 0x2a9f20u: goto label_2a9f20;
        case 0x2a9f24u: goto label_2a9f24;
        case 0x2a9f28u: goto label_2a9f28;
        case 0x2a9f2cu: goto label_2a9f2c;
        case 0x2a9f30u: goto label_2a9f30;
        case 0x2a9f34u: goto label_2a9f34;
        case 0x2a9f38u: goto label_2a9f38;
        case 0x2a9f3cu: goto label_2a9f3c;
        case 0x2a9f40u: goto label_2a9f40;
        case 0x2a9f44u: goto label_2a9f44;
        case 0x2a9f48u: goto label_2a9f48;
        case 0x2a9f4cu: goto label_2a9f4c;
        case 0x2a9f50u: goto label_2a9f50;
        case 0x2a9f54u: goto label_2a9f54;
        case 0x2a9f58u: goto label_2a9f58;
        case 0x2a9f5cu: goto label_2a9f5c;
        case 0x2a9f60u: goto label_2a9f60;
        case 0x2a9f64u: goto label_2a9f64;
        case 0x2a9f68u: goto label_2a9f68;
        case 0x2a9f6cu: goto label_2a9f6c;
        case 0x2a9f70u: goto label_2a9f70;
        case 0x2a9f74u: goto label_2a9f74;
        case 0x2a9f78u: goto label_2a9f78;
        case 0x2a9f7cu: goto label_2a9f7c;
        default: break;
    }

    ctx->pc = 0x2a9e80u;

label_2a9e80:
    // 0x2a9e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a9e84:
    // 0x2a9e84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a9e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2a9e88:
    // 0x2a9e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a9e8c:
    // 0x2a9e8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a9e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e90:
    // 0x2a9e90: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2a9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2a9e94:
    // 0x2a9e94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a9e98:
    // 0x2a9e98: 0x40f809  jalr        $v0
label_2a9e9c:
    if (ctx->pc == 0x2A9E9Cu) {
        ctx->pc = 0x2A9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E98u;
        // 0x2a9e9c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9EA0u;
        goto label_2a9ea0;
    }
    ctx->pc = 0x2A9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9EA0u);
        ctx->pc = 0x2A9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E98u;
        // 0x2a9e9c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E98u, 0x2A9EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9EA0u;
label_2a9ea0:
    // 0x2a9ea0: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_2a9ea4:
    if (ctx->pc == 0x2A9EA4u) {
        ctx->pc = 0x2A9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EA0u;
        // 0x2a9ea4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9EA8u;
        goto label_2a9ea8;
    }
    ctx->pc = 0x2A9EA0u;
    {
        const bool branch_taken_0x2a9ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ea0) {
            ctx->pc = 0x2A9EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9EA0u;
            // 0x2a9ea4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9F70u;
            goto label_2a9f70;
        }
    }
    ctx->pc = 0x2A9EA8u;
label_2a9ea8:
    // 0x2a9ea8: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
label_2a9eac:
    if (ctx->pc == 0x2A9EACu) {
        ctx->pc = 0x2A9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EA8u;
        // 0x2a9eac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9EB0u;
        goto label_2a9eb0;
    }
    ctx->pc = 0x2A9EA8u;
    {
        const bool branch_taken_0x2a9ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ea8) {
            ctx->pc = 0x2A9EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9EA8u;
            // 0x2a9eac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9F70u;
            goto label_2a9f70;
        }
    }
    ctx->pc = 0x2A9EB0u;
label_2a9eb0:
    // 0x2a9eb0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9eb4:
    // 0x2a9eb4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9eb8:
    // 0x2a9eb8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2a9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a9ebc:
    // 0x2a9ebc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9ec0:
    // 0x2a9ec0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a9ec0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a9ec4:
    // 0x2a9ec4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2a9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a9ec8:
    // 0x2a9ec8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a9ec8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a9ecc:
    // 0x2a9ecc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a9eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9ed0:
    // 0x2a9ed0: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2a9ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a9ed4:
    // 0x2a9ed4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a9ed4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a9ed8:
    // 0x2a9ed8: 0xc6070014  lwc1        $f7, 0x14($s0)
    ctx->pc = 0x2a9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a9edc:
    // 0x2a9edc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2a9edcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2a9ee0:
    // 0x2a9ee0: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x2a9ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a9ee4:
    // 0x2a9ee4: 0xc6080008  lwc1        $f8, 0x8($s0)
    ctx->pc = 0x2a9ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a9ee8:
    // 0x2a9ee8: 0xc60a0018  lwc1        $f10, 0x18($s0)
    ctx->pc = 0x2a9ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2a9eec:
    // 0x2a9eec: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a9eecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2a9ef0:
    // 0x2a9ef0: 0xc6090028  lwc1        $f9, 0x28($s0)
    ctx->pc = 0x2a9ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2a9ef4:
    // 0x2a9ef4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2a9ef4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a9ef8:
    // 0x2a9ef8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9efc:
    // 0x2a9efc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a9efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9f00:
    // 0x2a9f00: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a9f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a9f04:
    // 0x2a9f04: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a9f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9f08:
    // 0x2a9f08: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2a9f08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_2a9f0c:
    // 0x2a9f0c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2a9f0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2a9f10:
    // 0x2a9f10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a9f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2a9f14:
    // 0x2a9f14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9f18:
    // 0x2a9f18: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a9f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a9f1c:
    // 0x2a9f1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a9f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9f20:
    // 0x2a9f20: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9f24:
    // 0x2a9f24: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2a9f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_2a9f28:
    // 0x2a9f28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a9f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9f2c:
    // 0x2a9f2c: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2a9f2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_2a9f30:
    // 0x2a9f30: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2a9f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2a9f34:
    // 0x2a9f34: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a9f38:
    // 0x2a9f38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a9f38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a9f3c:
    // 0x2a9f3c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a9f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a9f40:
    // 0x2a9f40: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2a9f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9f44:
    // 0x2a9f44: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a9f44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a9f48:
    // 0x2a9f48: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2a9f48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a9f4c:
    // 0x2a9f4c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2a9f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9f50:
    // 0x2a9f50: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2a9f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9f54:
    // 0x2a9f54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9f58:
    // 0x2a9f58: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a9f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a9f5c:
    // 0x2a9f5c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2a9f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9f60:
    // 0x2a9f60: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a9f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9f64:
    // 0x2a9f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9f68:
    // 0x2a9f68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a9f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a9f6c:
    // 0x2a9f6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a9f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9f70:
    // 0x2a9f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9f74:
    // 0x2a9f74: 0x3e00008  jr          $ra
label_2a9f78:
    if (ctx->pc == 0x2A9F78u) {
        ctx->pc = 0x2A9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F74u;
        // 0x2a9f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F7Cu;
        goto label_2a9f7c;
    }
    ctx->pc = 0x2A9F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F74u;
        // 0x2a9f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9F7Cu;
label_2a9f7c:
    // 0x2a9f7c: 0x0  nop
    ctx->pc = 0x2a9f7cu;
    // NOP
    ctx->pc = 0x2a9f80u;
}

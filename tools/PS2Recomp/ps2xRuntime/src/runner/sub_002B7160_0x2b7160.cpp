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

// Function: sub_002B7160
// Address: 0x2b7160 - 0x2b7338
void sub_002B7160_0x2b7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7160_0x2b7160");
#endif

    switch (ctx->pc) {
        case 0x2b7208u: goto label_2b7208;
        case 0x2b72a0u: goto label_2b72a0;
        case 0x2b72ecu: goto label_2b72ec;
        case 0x2b7310u: goto label_2b7310;
        default: break;
    }

    ctx->pc = 0x2b7160u;

    // 0x2b7160: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b7160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b7164: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b7164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7168: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b7168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2b716c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2b716cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7170: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b7170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2b7174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b7174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7178: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b7178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2b717c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b7180: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b7180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2b7184: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b7184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b7188: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x2b7188u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b718c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b7190: 0x139140  sll         $s2, $s3, 5
    ctx->pc = 0x2b7190u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2b7194: 0x2328021  addu        $s0, $s1, $s2
    ctx->pc = 0x2b7194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b7198: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b7198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b719c: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2b719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b71a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71a4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b71a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b71a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b71acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b71b0: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2b71b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b71b4: 0xc4414014  lwc1        $f1, 0x4014($v0)
    ctx->pc = 0x2b71b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71b8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2b71b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b71bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b71c0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b71c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b71c4: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2b71c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71c8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2b71c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b71ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b71d0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2b71d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b71d4: 0xc4414014  lwc1        $f1, 0x4014($v0)
    ctx->pc = 0x2b71d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b71dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b71e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2b71e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b71e4: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2b71e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b71e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b71ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b71f0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2b71f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b71f4: 0xc4414014  lwc1        $f1, 0x4014($v0)
    ctx->pc = 0x2b71f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71f8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b71f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b71fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b7200: 0xc0ada82  jal         func_2B6A08
    ctx->pc = 0x2B7200u;
    SET_GPR_U32(ctx, 31, 0x2B7208u);
    ctx->pc = 0x2B7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7200u;
    // 0x2b7204: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B6A08u, 0x2B7200u, 0x2B7208u)) {
        return;
    }
    ctx->pc = 0x2B7208u;
label_2b7208:
    // 0x2b7208: 0x7a237ff0  lq          $v1, 0x7FF0($s1)
    ctx->pc = 0x2b7208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32752)));
    // 0x2b720c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2b720cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b7210: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2b7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7214: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2b7214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2b7218: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2b7218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b721c: 0x7a227fe0  lq          $v0, 0x7FE0($s1)
    ctx->pc = 0x2b721cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32736)));
    // 0x2b7220: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7224: 0x0  nop
    ctx->pc = 0x2b7224u;
    // NOP
    // 0x2b7228: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x2B7228u;
    {
        const bool branch_taken_0x2b7228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7228u;
        // 0x2b722c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7228) {
            ctx->pc = 0x2B72FCu;
            goto label_2b72fc;
        }
    }
    ctx->pc = 0x2B7230u;
    // 0x2b7230: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2b7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7234: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2b7234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7238: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b7238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b723c: 0x0  nop
    ctx->pc = 0x2b723cu;
    // NOP
    // 0x2b7240: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2B7240u;
    {
        const bool branch_taken_0x2b7240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7240u;
        // 0x2b7244: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7240) {
            ctx->pc = 0x2B72FCu;
            goto label_2b72fc;
        }
    }
    ctx->pc = 0x2B7248u;
    // 0x2b7248: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2b7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b724c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b724cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7250: 0x0  nop
    ctx->pc = 0x2b7250u;
    // NOP
    // 0x2b7254: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2B7254u;
    {
        const bool branch_taken_0x2b7254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7254u;
        // 0x2b7258: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7254) {
            ctx->pc = 0x2B72FCu;
            goto label_2b72fc;
        }
    }
    ctx->pc = 0x2B725Cu;
    // 0x2b725c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7260: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b7260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7264: 0x0  nop
    ctx->pc = 0x2b7264u;
    // NOP
    // 0x2b7268: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2B7268u;
    {
        const bool branch_taken_0x2b7268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7268u;
        // 0x2b726c: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7268) {
            ctx->pc = 0x2B72FCu;
            goto label_2b72fc;
        }
    }
    ctx->pc = 0x2B7270u;
    // 0x2b7270: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2b7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7274: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7278: 0x0  nop
    ctx->pc = 0x2b7278u;
    // NOP
    // 0x2b727c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2B727Cu;
    {
        const bool branch_taken_0x2b727c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B727Cu;
        // 0x2b7280: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b727c) {
            ctx->pc = 0x2B72FCu;
            goto label_2b72fc;
        }
    }
    ctx->pc = 0x2B7284u;
    // 0x2b7284: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b7284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7288: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b7288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b728c: 0x0  nop
    ctx->pc = 0x2b728cu;
    // NOP
    // 0x2b7290: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2B7290u;
    {
        const bool branch_taken_0x2b7290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7290u;
        // 0x2b7294: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7290) {
            ctx->pc = 0x2B72FCu;
            goto label_2b72fc;
        }
    }
    ctx->pc = 0x2B7298u;
    // 0x2b7298: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7298u;
    {
        const bool branch_taken_0x2b7298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7298u;
        // 0x2b729c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7298) {
            ctx->pc = 0x2B72E0u;
            goto label_2b72e0;
        }
    }
    ctx->pc = 0x2B72A0u;
label_2b72a0:
    // 0x2b72a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b72a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b72a4: 0x2863018  mult        $a2, $s4, $a2
    ctx->pc = 0x2b72a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2b72a8: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x2b72a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b72ac: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2b72acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b72b0: 0x34039820  ori         $v1, $zero, 0x9820
    ctx->pc = 0x2b72b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38944);
    // 0x2b72b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b72b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2b72b8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2b72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2b72bc: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x2b72bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x2b72c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b72c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b72c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b72c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b72c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b72cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b72ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b72d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B72D0u;
    {
        const bool branch_taken_0x2b72d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72D0u;
        // 0x2b72d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72d0) {
            ctx->pc = 0x2B7300u;
            goto label_2b7300;
        }
    }
    ctx->pc = 0x2B72D8u;
    // 0x2b72d8: 0x94740000  lhu         $s4, 0x0($v1)
    ctx->pc = 0x2b72d8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b72dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b72dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b72e0:
    // 0x2b72e0: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x2b72e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b72e4: 0xc0ad968  jal         func_2B65A0
    ctx->pc = 0x2B72E4u;
    SET_GPR_U32(ctx, 31, 0x2B72ECu);
    ctx->pc = 0x2B72E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72E4u;
    // 0x2b72e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B65A0u, 0x2B72E4u, 0x2B72ECu)) {
        return;
    }
    ctx->pc = 0x2B72ECu;
label_2b72ec:
    // 0x2b72ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b72ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b72f4: 0x14e2ffea  bne         $a3, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B72F4u;
    {
        const bool branch_taken_0x2b72f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72F4u;
        // 0x2b72f8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72f4) {
            ctx->pc = 0x2B72A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b72a0;
        }
    }
    ctx->pc = 0x2B72FCu;
label_2b72fc:
    // 0x2b72fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b72fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7300:
    // 0x2b7300: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b7300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7308: 0xc0ade9c  jal         func_2B7A70
    ctx->pc = 0x2B7308u;
    SET_GPR_U32(ctx, 31, 0x2B7310u);
    ctx->pc = 0x2B730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7308u;
    // 0x2b730c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7A70u, 0x2B7308u, 0x2B7310u)) {
        return;
    }
    ctx->pc = 0x2B7310u;
label_2b7310:
    // 0x2b7310: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b7310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7314: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2b7314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b7318: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2b7318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b731c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2b731cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b7320: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2b7320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7324: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b7324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7328: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b7328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b732c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B732Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B732Cu;
        // 0x2b7330: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B732Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7334u;
    // 0x2b7334: 0x0  nop
    ctx->pc = 0x2b7334u;
    // NOP
    ctx->pc = 0x2b7338u;
}

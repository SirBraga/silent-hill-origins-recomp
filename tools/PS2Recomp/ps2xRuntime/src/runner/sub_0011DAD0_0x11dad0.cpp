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

// Function: sub_0011DAD0
// Address: 0x11dad0 - 0x11dca8
void sub_0011DAD0_0x11dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DAD0_0x11dad0");
#endif

    switch (ctx->pc) {
        case 0x11daf0u: goto label_11daf0;
        case 0x11dc88u: goto label_11dc88;
        case 0x11dc90u: goto label_11dc90;
        default: break;
    }

    ctx->pc = 0x11dad0u;

    // 0x11dad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11dad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11dad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11dad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11dad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dadc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11dadcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11dae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dae4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11dae4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11dae8: 0xc04783c  jal         func_11E0F0
    ctx->pc = 0x11DAE8u;
    SET_GPR_U32(ctx, 31, 0x11DAF0u);
    ctx->pc = 0x11DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAE8u;
    // 0x11daec: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E0F0u, 0x11DAE8u, 0x11DAF0u)) {
        return;
    }
    ctx->pc = 0x11DAF0u;
label_11daf0:
    // 0x11daf0: 0x2602008c  addiu       $v0, $s0, 0x8C
    ctx->pc = 0x11daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x11daf4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x11daf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11daf8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x11daf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dafc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11dafcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11db00: 0x0  nop
    ctx->pc = 0x11db00u;
    // NOP
    // 0x11db04: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x11DB04u;
    {
        const bool branch_taken_0x11db04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11db04) {
            ctx->pc = 0x11DB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB04u;
            // 0x11db08: 0x260200a4  addiu       $v0, $s0, 0xA4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DB70u;
            goto label_11db70;
        }
    }
    ctx->pc = 0x11DB0Cu;
    // 0x11db0c: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x11db0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11db10: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x11db10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11db14: 0x0  nop
    ctx->pc = 0x11db14u;
    // NOP
    // 0x11db18: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x11db18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11db1c: 0x0  nop
    ctx->pc = 0x11db1cu;
    // NOP
    // 0x11db20: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x11DB20u;
    {
        const bool branch_taken_0x11db20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11db20) {
            ctx->pc = 0x11DB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB20u;
            // 0x11db24: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DB6Cu;
            goto label_11db6c;
        }
    }
    ctx->pc = 0x11DB28u;
    // 0x11db28: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x11db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11db2c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x11db2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x11db30: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x11db30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11db34: 0x0  nop
    ctx->pc = 0x11db34u;
    // NOP
    // 0x11db38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11DB38u;
    {
        const bool branch_taken_0x11db38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB38u;
        // 0x11db3c: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db38) {
            ctx->pc = 0x11DB4Cu;
            goto label_11db4c;
        }
    }
    ctx->pc = 0x11DB40u;
    // 0x11db40: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x11db40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x11db44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11DB44u;
    {
        const bool branch_taken_0x11db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB44u;
        // 0x11db48: 0xe4430014  swc1        $f3, 0x14($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db44) {
            ctx->pc = 0x11DB6Cu;
            goto label_11db6c;
        }
    }
    ctx->pc = 0x11DB4Cu;
label_11db4c:
    // 0x11db4c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x11db4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x11db50: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x11db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11db54: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x11db54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x11db58: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11db58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11db5c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x11db5cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x11db60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11db60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11db64: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11db64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11db68: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x11db68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_11db6c:
    // 0x11db6c: 0x260200a4  addiu       $v0, $s0, 0xA4
    ctx->pc = 0x11db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_11db70:
    // 0x11db70: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x11db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11db74: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x11db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11db78: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11db78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11db7c: 0x0  nop
    ctx->pc = 0x11db7cu;
    // NOP
    // 0x11db80: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x11DB80u;
    {
        const bool branch_taken_0x11db80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11db80) {
            ctx->pc = 0x11DB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB80u;
            // 0x11db84: 0x260200bc  addiu       $v0, $s0, 0xBC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DBECu;
            goto label_11dbec;
        }
    }
    ctx->pc = 0x11DB88u;
    // 0x11db88: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x11db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11db8c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x11db8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11db90: 0x0  nop
    ctx->pc = 0x11db90u;
    // NOP
    // 0x11db94: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x11db94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11db98: 0x0  nop
    ctx->pc = 0x11db98u;
    // NOP
    // 0x11db9c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x11DB9Cu;
    {
        const bool branch_taken_0x11db9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11db9c) {
            ctx->pc = 0x11DBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB9Cu;
            // 0x11dba0: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DBE8u;
            goto label_11dbe8;
        }
    }
    ctx->pc = 0x11DBA4u;
    // 0x11dba4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x11dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dba8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x11dba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x11dbac: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x11dbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11dbb0: 0x0  nop
    ctx->pc = 0x11dbb0u;
    // NOP
    // 0x11dbb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11DBB4u;
    {
        const bool branch_taken_0x11dbb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBB4u;
        // 0x11dbb8: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbb4) {
            ctx->pc = 0x11DBC8u;
            goto label_11dbc8;
        }
    }
    ctx->pc = 0x11DBBCu;
    // 0x11dbbc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x11dbbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x11dbc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11DBC0u;
    {
        const bool branch_taken_0x11dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBC0u;
        // 0x11dbc4: 0xe4430014  swc1        $f3, 0x14($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbc0) {
            ctx->pc = 0x11DBE8u;
            goto label_11dbe8;
        }
    }
    ctx->pc = 0x11DBC8u;
label_11dbc8:
    // 0x11dbc8: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x11dbc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x11dbcc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x11dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11dbd0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x11dbd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x11dbd4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11dbd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11dbd8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x11dbd8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x11dbdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11dbdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11dbe0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11dbe0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11dbe4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x11dbe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_11dbe8:
    // 0x11dbe8: 0x260200bc  addiu       $v0, $s0, 0xBC
    ctx->pc = 0x11dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
label_11dbec:
    // 0x11dbec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x11dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11dbf0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x11dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dbf4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11dbf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11dbf8: 0x0  nop
    ctx->pc = 0x11dbf8u;
    // NOP
    // 0x11dbfc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x11DBFCu;
    {
        const bool branch_taken_0x11dbfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBFCu;
        // 0x11dc00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbfc) {
            ctx->pc = 0x11DC70u;
            goto label_11dc70;
        }
    }
    ctx->pc = 0x11DC04u;
    // 0x11dc04: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x11dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11dc08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11dc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11dc0c: 0x0  nop
    ctx->pc = 0x11dc0cu;
    // NOP
    // 0x11dc10: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x11dc10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11dc14: 0x0  nop
    ctx->pc = 0x11dc14u;
    // NOP
    // 0x11dc18: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x11DC18u;
    {
        const bool branch_taken_0x11dc18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11dc18) {
            ctx->pc = 0x11DC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DC18u;
            // 0x11dc1c: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DC68u;
            goto label_11dc68;
        }
    }
    ctx->pc = 0x11DC20u;
    // 0x11dc20: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x11dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dc24: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x11dc24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x11dc28: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x11dc28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11dc2c: 0x0  nop
    ctx->pc = 0x11dc2cu;
    // NOP
    // 0x11dc30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x11DC30u;
    {
        const bool branch_taken_0x11dc30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC30u;
        // 0x11dc34: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc30) {
            ctx->pc = 0x11DC40u;
            goto label_11dc40;
        }
    }
    ctx->pc = 0x11DC38u;
    // 0x11dc38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DC38u;
    {
        const bool branch_taken_0x11dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC38u;
        // 0x11dc3c: 0xe4630014  swc1        $f3, 0x14($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc38) {
            ctx->pc = 0x11DC64u;
            goto label_11dc64;
        }
    }
    ctx->pc = 0x11DC40u;
label_11dc40:
    // 0x11dc40: 0x460c18c1  sub.s       $f3, $f3, $f12
    ctx->pc = 0x11dc40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x11dc44: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x11dc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11dc48: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11dc48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11dc4c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11dc4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11dc50: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x11dc50u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x11dc54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11dc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11dc58: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11dc58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11dc5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11DC5Cu;
    {
        const bool branch_taken_0x11dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC5Cu;
        // 0x11dc60: 0xe462000c  swc1        $f2, 0xC($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc5c) {
            ctx->pc = 0x11DC68u;
            goto label_11dc68;
        }
    }
    ctx->pc = 0x11DC64u;
label_11dc64:
    // 0x11dc64: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x11dc64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_11dc68:
    // 0x11dc68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11DC68u;
    {
        const bool branch_taken_0x11dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC68u;
        // 0x11dc6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc68) {
            ctx->pc = 0x11DC74u;
            goto label_11dc74;
        }
    }
    ctx->pc = 0x11DC70u;
label_11dc70:
    // 0x11dc70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11dc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dc74:
    // 0x11dc74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DC74u;
    {
        const bool branch_taken_0x11dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc74) {
            ctx->pc = 0x11DC88u;
            goto label_11dc88;
        }
    }
    ctx->pc = 0x11DC7Cu;
    // 0x11dc7c: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x11dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11dc80: 0xc0446c6  jal         func_111B18
    ctx->pc = 0x11DC80u;
    SET_GPR_U32(ctx, 31, 0x11DC88u);
    ctx->pc = 0x11DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC80u;
    // 0x11dc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x11DC80u, 0x11DC88u)) {
        return;
    }
    ctx->pc = 0x11DC88u;
label_11dc88:
    // 0x11dc88: 0xc047986  jal         func_11E618
    ctx->pc = 0x11DC88u;
    SET_GPR_U32(ctx, 31, 0x11DC90u);
    ctx->pc = 0x11DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC88u;
    // 0x11dc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E618u, 0x11DC88u, 0x11DC90u)) {
        return;
    }
    ctx->pc = 0x11DC90u;
label_11dc90:
    // 0x11dc90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11dc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dc98: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x11dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11dc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC9Cu;
        // 0x11dca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DCA4u;
    // 0x11dca4: 0x0  nop
    ctx->pc = 0x11dca4u;
    // NOP
    ctx->pc = 0x11dca8u;
}

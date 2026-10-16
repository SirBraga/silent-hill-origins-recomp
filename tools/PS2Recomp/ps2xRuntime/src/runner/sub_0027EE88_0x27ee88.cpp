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

// Function: sub_0027EE88
// Address: 0x27ee88 - 0x27f038
void sub_0027EE88_0x27ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EE88_0x27ee88");
#endif

    switch (ctx->pc) {
        case 0x27ee88u: goto label_27ee88;
        case 0x27ee8cu: goto label_27ee8c;
        case 0x27ee90u: goto label_27ee90;
        case 0x27ee94u: goto label_27ee94;
        case 0x27ee98u: goto label_27ee98;
        case 0x27ee9cu: goto label_27ee9c;
        case 0x27eea0u: goto label_27eea0;
        case 0x27eea4u: goto label_27eea4;
        case 0x27eea8u: goto label_27eea8;
        case 0x27eeacu: goto label_27eeac;
        case 0x27eeb0u: goto label_27eeb0;
        case 0x27eeb4u: goto label_27eeb4;
        case 0x27eeb8u: goto label_27eeb8;
        case 0x27eebcu: goto label_27eebc;
        case 0x27eec0u: goto label_27eec0;
        case 0x27eec4u: goto label_27eec4;
        case 0x27eec8u: goto label_27eec8;
        case 0x27eeccu: goto label_27eecc;
        case 0x27eed0u: goto label_27eed0;
        case 0x27eed4u: goto label_27eed4;
        case 0x27eed8u: goto label_27eed8;
        case 0x27eedcu: goto label_27eedc;
        case 0x27eee0u: goto label_27eee0;
        case 0x27eee4u: goto label_27eee4;
        case 0x27eee8u: goto label_27eee8;
        case 0x27eeecu: goto label_27eeec;
        case 0x27eef0u: goto label_27eef0;
        case 0x27eef4u: goto label_27eef4;
        case 0x27eef8u: goto label_27eef8;
        case 0x27eefcu: goto label_27eefc;
        case 0x27ef00u: goto label_27ef00;
        case 0x27ef04u: goto label_27ef04;
        case 0x27ef08u: goto label_27ef08;
        case 0x27ef0cu: goto label_27ef0c;
        case 0x27ef10u: goto label_27ef10;
        case 0x27ef14u: goto label_27ef14;
        case 0x27ef18u: goto label_27ef18;
        case 0x27ef1cu: goto label_27ef1c;
        case 0x27ef20u: goto label_27ef20;
        case 0x27ef24u: goto label_27ef24;
        case 0x27ef28u: goto label_27ef28;
        case 0x27ef2cu: goto label_27ef2c;
        case 0x27ef30u: goto label_27ef30;
        case 0x27ef34u: goto label_27ef34;
        case 0x27ef38u: goto label_27ef38;
        case 0x27ef3cu: goto label_27ef3c;
        case 0x27ef40u: goto label_27ef40;
        case 0x27ef44u: goto label_27ef44;
        case 0x27ef48u: goto label_27ef48;
        case 0x27ef4cu: goto label_27ef4c;
        case 0x27ef50u: goto label_27ef50;
        case 0x27ef54u: goto label_27ef54;
        case 0x27ef58u: goto label_27ef58;
        case 0x27ef5cu: goto label_27ef5c;
        case 0x27ef60u: goto label_27ef60;
        case 0x27ef64u: goto label_27ef64;
        case 0x27ef68u: goto label_27ef68;
        case 0x27ef6cu: goto label_27ef6c;
        case 0x27ef70u: goto label_27ef70;
        case 0x27ef74u: goto label_27ef74;
        case 0x27ef78u: goto label_27ef78;
        case 0x27ef7cu: goto label_27ef7c;
        case 0x27ef80u: goto label_27ef80;
        case 0x27ef84u: goto label_27ef84;
        case 0x27ef88u: goto label_27ef88;
        case 0x27ef8cu: goto label_27ef8c;
        case 0x27ef90u: goto label_27ef90;
        case 0x27ef94u: goto label_27ef94;
        case 0x27ef98u: goto label_27ef98;
        case 0x27ef9cu: goto label_27ef9c;
        case 0x27efa0u: goto label_27efa0;
        case 0x27efa4u: goto label_27efa4;
        case 0x27efa8u: goto label_27efa8;
        case 0x27efacu: goto label_27efac;
        case 0x27efb0u: goto label_27efb0;
        case 0x27efb4u: goto label_27efb4;
        case 0x27efb8u: goto label_27efb8;
        case 0x27efbcu: goto label_27efbc;
        case 0x27efc0u: goto label_27efc0;
        case 0x27efc4u: goto label_27efc4;
        case 0x27efc8u: goto label_27efc8;
        case 0x27efccu: goto label_27efcc;
        case 0x27efd0u: goto label_27efd0;
        case 0x27efd4u: goto label_27efd4;
        case 0x27efd8u: goto label_27efd8;
        case 0x27efdcu: goto label_27efdc;
        case 0x27efe0u: goto label_27efe0;
        case 0x27efe4u: goto label_27efe4;
        case 0x27efe8u: goto label_27efe8;
        case 0x27efecu: goto label_27efec;
        case 0x27eff0u: goto label_27eff0;
        case 0x27eff4u: goto label_27eff4;
        case 0x27eff8u: goto label_27eff8;
        case 0x27effcu: goto label_27effc;
        case 0x27f000u: goto label_27f000;
        case 0x27f004u: goto label_27f004;
        case 0x27f008u: goto label_27f008;
        case 0x27f00cu: goto label_27f00c;
        case 0x27f010u: goto label_27f010;
        case 0x27f014u: goto label_27f014;
        case 0x27f018u: goto label_27f018;
        case 0x27f01cu: goto label_27f01c;
        case 0x27f020u: goto label_27f020;
        case 0x27f024u: goto label_27f024;
        case 0x27f028u: goto label_27f028;
        case 0x27f02cu: goto label_27f02c;
        case 0x27f030u: goto label_27f030;
        case 0x27f034u: goto label_27f034;
        default: break;
    }

    ctx->pc = 0x27ee88u;

label_27ee88:
    // 0x27ee88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_27ee8c:
    // 0x27ee8c: 0x8f8287fc  lw          $v0, -0x7804($gp)
    ctx->pc = 0x27ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_27ee90:
    // 0x27ee90: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x27ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_27ee94:
    // 0x27ee94: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x27ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_27ee98:
    // 0x27ee98: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27ee98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ee9c:
    // 0x27ee9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27eea0:
    // 0x27eea0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x27eea0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_27eea4:
    // 0x27eea4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x27eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_27eea8:
    // 0x27eea8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27eea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27eeac:
    // 0x27eeac: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x27eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_27eeb0:
    // 0x27eeb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27eeb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27eeb4:
    // 0x27eeb4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x27eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_27eeb8:
    // 0x27eeb8: 0x2c2b821  addu        $s7, $s6, $v0
    ctx->pc = 0x27eeb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_27eebc:
    // 0x27eebc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x27eebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_27eec0:
    // 0x27eec0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x27eec0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_27eec4:
    // 0x27eec4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x27eec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_27eec8:
    // 0x27eec8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27eec8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_27eecc:
    // 0x27eecc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x27eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_27eed0:
    // 0x27eed0: 0x241e0014  addiu       $fp, $zero, 0x14
    ctx->pc = 0x27eed0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27eed4:
    // 0x27eed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27eed8:
    // 0x27eed8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x27eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_27eedc:
    // 0x27eedc: 0x8ef20004  lw          $s2, 0x4($s7)
    ctx->pc = 0x27eedcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_27eee0:
    // 0x27eee0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eee4:
    // 0x27eee4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x27eee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27eee8:
    // 0x27eee8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27eee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_27eeec:
    // 0x27eeec: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x27eeecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_27eef0:
    // 0x27eef0: 0x10000036  b           . + 4 + (0x36 << 2)
label_27eef4:
    if (ctx->pc == 0x27EEF4u) {
        ctx->pc = 0x27EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEF0u;
        // 0x27eef4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EEF8u;
        goto label_27eef8;
    }
    ctx->pc = 0x27EEF0u;
    {
        const bool branch_taken_0x27eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEF0u;
        // 0x27eef4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eef0) {
            ctx->pc = 0x27EFCCu;
            goto label_27efcc;
        }
    }
    ctx->pc = 0x27EEF8u;
label_27eef8:
    // 0x27eef8: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x27eef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27eefc:
    // 0x27eefc: 0x26290004  addiu       $t1, $s1, 0x4
    ctx->pc = 0x27eefcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_27ef00:
    // 0x27ef00: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_27ef04:
    if (ctx->pc == 0x27EF04u) {
        ctx->pc = 0x27EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF00u;
        // 0x27ef04: 0x26880001  addiu       $t0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EF08u;
        goto label_27ef08;
    }
    ctx->pc = 0x27EF00u;
    {
        const bool branch_taken_0x27ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF00u;
        // 0x27ef04: 0x26880001  addiu       $t0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef00) {
            ctx->pc = 0x27EFC0u;
            goto label_27efc0;
        }
    }
    ctx->pc = 0x27EF08u;
label_27ef08:
    // 0x27ef08: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x27ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ef0c:
    // 0x27ef0c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27ef0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_27ef10:
    // 0x27ef10: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27ef10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_27ef14:
    // 0x27ef14: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27ef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ef18:
    // 0x27ef18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ef18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ef1c:
    // 0x27ef1c: 0x0  nop
    ctx->pc = 0x27ef1cu;
    // NOP
label_27ef20:
    // 0x27ef20: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_27ef24:
    if (ctx->pc == 0x27EF24u) {
        ctx->pc = 0x27EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF20u;
        // 0x27ef24: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EF28u;
        goto label_27ef28;
    }
    ctx->pc = 0x27EF20u;
    {
        const bool branch_taken_0x27ef20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ef20) {
            ctx->pc = 0x27EF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EF20u;
            // 0x27ef24: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EF8Cu;
            goto label_27ef8c;
        }
    }
    ctx->pc = 0x27EF28u;
label_27ef28:
    // 0x27ef28: 0x10000013  b           . + 4 + (0x13 << 2)
label_27ef2c:
    if (ctx->pc == 0x27EF2Cu) {
        ctx->pc = 0x27EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF28u;
        // 0x27ef2c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EF30u;
        goto label_27ef30;
    }
    ctx->pc = 0x27EF28u;
    {
        const bool branch_taken_0x27ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF28u;
        // 0x27ef2c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef28) {
            ctx->pc = 0x27EF78u;
            goto label_27ef78;
        }
    }
    ctx->pc = 0x27EF30u;
label_27ef30:
    // 0x27ef30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x27ef30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ef34:
    // 0x27ef34: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x27ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_27ef38:
    // 0x27ef38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27ef3c:
    // 0x27ef3c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x27ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_27ef40:
    // 0x27ef40: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27ef44:
    // 0x27ef44: 0x7e1818  mult        $v1, $v1, $fp
    ctx->pc = 0x27ef44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27ef48:
    // 0x27ef48: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ef4c:
    // 0x27ef4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27ef50:
    // 0x27ef50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27ef54:
    // 0x27ef54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27ef58:
    // 0x27ef58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27ef58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ef5c:
    // 0x27ef5c: 0x46302b  sltu        $a2, $v0, $a2
    ctx->pc = 0x27ef5cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27ef60:
    // 0x27ef60: 0x2a6a825  or          $s5, $s5, $a2
    ctx->pc = 0x27ef60u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 6));
label_27ef64:
    // 0x27ef64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ef64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ef68:
    // 0x27ef68: 0x0  nop
    ctx->pc = 0x27ef68u;
    // NOP
label_27ef6c:
    // 0x27ef6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27ef70:
    if (ctx->pc == 0x27EF70u) {
        ctx->pc = 0x27EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF6Cu;
        // 0x27ef70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EF74u;
        goto label_27ef74;
    }
    ctx->pc = 0x27EF6Cu;
    {
        const bool branch_taken_0x27ef6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF6Cu;
        // 0x27ef70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef6c) {
            ctx->pc = 0x27EF88u;
            goto label_27ef88;
        }
    }
    ctx->pc = 0x27EF74u;
label_27ef74:
    // 0x27ef74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ef74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ef78:
    // 0x27ef78: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x27ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_27ef7c:
    // 0x27ef7c: 0x1453ffec  bne         $v0, $s3, . + 4 + (-0x14 << 2)
label_27ef80:
    if (ctx->pc == 0x27EF80u) {
        ctx->pc = 0x27EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF7Cu;
        // 0x27ef80: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EF84u;
        goto label_27ef84;
    }
    ctx->pc = 0x27EF7Cu;
    {
        const bool branch_taken_0x27ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x27EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF7Cu;
        // 0x27ef80: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef7c) {
            ctx->pc = 0x27EF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ef30;
        }
    }
    ctx->pc = 0x27EF84u;
label_27ef84:
    // 0x27ef84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27ef88:
    // 0x27ef88: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x27ef88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ef8c:
    // 0x27ef8c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_27ef90:
    if (ctx->pc == 0x27EF90u) {
        ctx->pc = 0x27EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF8Cu;
        // 0x27ef90: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EF94u;
        goto label_27ef94;
    }
    ctx->pc = 0x27EF8Cu;
    {
        const bool branch_taken_0x27ef8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF8Cu;
        // 0x27ef90: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef8c) {
            ctx->pc = 0x27EFC0u;
            goto label_27efc0;
        }
    }
    ctx->pc = 0x27EF94u;
label_27ef94:
    // 0x27ef94: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x27ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27ef98:
    // 0x27ef98: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ef9c:
    // 0x27ef9c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x27ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27efa0:
    // 0x27efa0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x27efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27efa4:
    // 0x27efa4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27efa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27efa8:
    // 0x27efa8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x27efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_27efac:
    // 0x27efac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x27efacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_27efb0:
    // 0x27efb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27efb4:
    // 0x27efb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27efb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27efb8:
    // 0x27efb8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x27efb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_27efbc:
    // 0x27efbc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x27efbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27efc0:
    // 0x27efc0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27efc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27efc4:
    // 0x27efc4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x27efc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_27efc8:
    // 0x27efc8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x27efc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27efcc:
    // 0x27efcc: 0xc09f90a  jal         func_27E428
label_27efd0:
    if (ctx->pc == 0x27EFD0u) {
        ctx->pc = 0x27EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFCCu;
        // 0x27efd0: 0x8ec40018  lw          $a0, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EFD4u;
        goto label_27efd4;
    }
    ctx->pc = 0x27EFCCu;
    SET_GPR_U32(ctx, 31, 0x27EFD4u);
    ctx->pc = 0x27EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFCCu;
    // 0x27efd0: 0x8ec40018  lw          $a0, 0x18($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27EFCCu, 0x27EFD4u)) {
        return;
    }
    ctx->pc = 0x27EFD4u;
label_27efd4:
    // 0x27efd4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x27efd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27efd8:
    // 0x27efd8: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
label_27efdc:
    if (ctx->pc == 0x27EFDCu) {
        ctx->pc = 0x27EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFD8u;
        // 0x27efdc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EFE0u;
        goto label_27efe0;
    }
    ctx->pc = 0x27EFD8u;
    {
        const bool branch_taken_0x27efd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27efd8) {
            ctx->pc = 0x27EFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EFD8u;
            // 0x27efdc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eef8;
        }
    }
    ctx->pc = 0x27EFE0u;
label_27efe0:
    // 0x27efe0: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_27efe4:
    if (ctx->pc == 0x27EFE4u) {
        ctx->pc = 0x27EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFE0u;
        // 0x27efe4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EFE8u;
        goto label_27efe8;
    }
    ctx->pc = 0x27EFE0u;
    {
        const bool branch_taken_0x27efe0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFE0u;
        // 0x27efe4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efe0) {
            ctx->pc = 0x27F004u;
            goto label_27f004;
        }
    }
    ctx->pc = 0x27EFE8u;
label_27efe8:
    // 0x27efe8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x27efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_27efec:
    // 0x27efec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_27eff0:
    if (ctx->pc == 0x27EFF0u) {
        ctx->pc = 0x27EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFECu;
        // 0x27eff0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EFF4u;
        goto label_27eff4;
    }
    ctx->pc = 0x27EFECu;
    {
        const bool branch_taken_0x27efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27efec) {
            ctx->pc = 0x27EFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EFECu;
            // 0x27eff0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F004u;
            goto label_27f004;
        }
    }
    ctx->pc = 0x27EFF4u;
label_27eff4:
    // 0x27eff4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x27eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_27eff8:
    // 0x27eff8: 0x40f809  jalr        $v0
label_27effc:
    if (ctx->pc == 0x27EFFCu) {
        ctx->pc = 0x27EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFF8u;
        // 0x27effc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F000u;
        goto label_27f000;
    }
    ctx->pc = 0x27EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27F000u);
        ctx->pc = 0x27EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFF8u;
        // 0x27effc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFF8u, 0x27F000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F000u;
label_27f000:
    // 0x27f000: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x27f000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27f004:
    // 0x27f004: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x27f004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27f008:
    // 0x27f008: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x27f008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27f00c:
    // 0x27f00c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x27f00cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27f010:
    // 0x27f010: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x27f010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27f014:
    // 0x27f014: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27f014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27f018:
    // 0x27f018: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x27f018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f01c:
    // 0x27f01c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x27f01cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f020:
    // 0x27f020: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x27f020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f024:
    // 0x27f024: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x27f024u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f028:
    // 0x27f028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27f02c:
    // 0x27f02c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x27f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27f030:
    // 0x27f030: 0x3e00008  jr          $ra
label_27f034:
    if (ctx->pc == 0x27F034u) {
        ctx->pc = 0x27F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F030u;
        // 0x27f034: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F038u;
        goto label_fallthrough_0x27f030;
    }
    ctx->pc = 0x27F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F030u;
        // 0x27f034: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27f030:
    ctx->pc = 0x27F038u;
}

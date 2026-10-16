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

// Function: sub_0019F9F0
// Address: 0x19f9f0 - 0x19fbf8
void sub_0019F9F0_0x19f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F9F0_0x19f9f0");
#endif

    switch (ctx->pc) {
        case 0x19f9f0u: goto label_19f9f0;
        case 0x19f9f4u: goto label_19f9f4;
        case 0x19f9f8u: goto label_19f9f8;
        case 0x19f9fcu: goto label_19f9fc;
        case 0x19fa00u: goto label_19fa00;
        case 0x19fa04u: goto label_19fa04;
        case 0x19fa08u: goto label_19fa08;
        case 0x19fa0cu: goto label_19fa0c;
        case 0x19fa10u: goto label_19fa10;
        case 0x19fa14u: goto label_19fa14;
        case 0x19fa18u: goto label_19fa18;
        case 0x19fa1cu: goto label_19fa1c;
        case 0x19fa20u: goto label_19fa20;
        case 0x19fa24u: goto label_19fa24;
        case 0x19fa28u: goto label_19fa28;
        case 0x19fa2cu: goto label_19fa2c;
        case 0x19fa30u: goto label_19fa30;
        case 0x19fa34u: goto label_19fa34;
        case 0x19fa38u: goto label_19fa38;
        case 0x19fa3cu: goto label_19fa3c;
        case 0x19fa40u: goto label_19fa40;
        case 0x19fa44u: goto label_19fa44;
        case 0x19fa48u: goto label_19fa48;
        case 0x19fa4cu: goto label_19fa4c;
        case 0x19fa50u: goto label_19fa50;
        case 0x19fa54u: goto label_19fa54;
        case 0x19fa58u: goto label_19fa58;
        case 0x19fa5cu: goto label_19fa5c;
        case 0x19fa60u: goto label_19fa60;
        case 0x19fa64u: goto label_19fa64;
        case 0x19fa68u: goto label_19fa68;
        case 0x19fa6cu: goto label_19fa6c;
        case 0x19fa70u: goto label_19fa70;
        case 0x19fa74u: goto label_19fa74;
        case 0x19fa78u: goto label_19fa78;
        case 0x19fa7cu: goto label_19fa7c;
        case 0x19fa80u: goto label_19fa80;
        case 0x19fa84u: goto label_19fa84;
        case 0x19fa88u: goto label_19fa88;
        case 0x19fa8cu: goto label_19fa8c;
        case 0x19fa90u: goto label_19fa90;
        case 0x19fa94u: goto label_19fa94;
        case 0x19fa98u: goto label_19fa98;
        case 0x19fa9cu: goto label_19fa9c;
        case 0x19faa0u: goto label_19faa0;
        case 0x19faa4u: goto label_19faa4;
        case 0x19faa8u: goto label_19faa8;
        case 0x19faacu: goto label_19faac;
        case 0x19fab0u: goto label_19fab0;
        case 0x19fab4u: goto label_19fab4;
        case 0x19fab8u: goto label_19fab8;
        case 0x19fabcu: goto label_19fabc;
        case 0x19fac0u: goto label_19fac0;
        case 0x19fac4u: goto label_19fac4;
        case 0x19fac8u: goto label_19fac8;
        case 0x19faccu: goto label_19facc;
        case 0x19fad0u: goto label_19fad0;
        case 0x19fad4u: goto label_19fad4;
        case 0x19fad8u: goto label_19fad8;
        case 0x19fadcu: goto label_19fadc;
        case 0x19fae0u: goto label_19fae0;
        case 0x19fae4u: goto label_19fae4;
        case 0x19fae8u: goto label_19fae8;
        case 0x19faecu: goto label_19faec;
        case 0x19faf0u: goto label_19faf0;
        case 0x19faf4u: goto label_19faf4;
        case 0x19faf8u: goto label_19faf8;
        case 0x19fafcu: goto label_19fafc;
        case 0x19fb00u: goto label_19fb00;
        case 0x19fb04u: goto label_19fb04;
        case 0x19fb08u: goto label_19fb08;
        case 0x19fb0cu: goto label_19fb0c;
        case 0x19fb10u: goto label_19fb10;
        case 0x19fb14u: goto label_19fb14;
        case 0x19fb18u: goto label_19fb18;
        case 0x19fb1cu: goto label_19fb1c;
        case 0x19fb20u: goto label_19fb20;
        case 0x19fb24u: goto label_19fb24;
        case 0x19fb28u: goto label_19fb28;
        case 0x19fb2cu: goto label_19fb2c;
        case 0x19fb30u: goto label_19fb30;
        case 0x19fb34u: goto label_19fb34;
        case 0x19fb38u: goto label_19fb38;
        case 0x19fb3cu: goto label_19fb3c;
        case 0x19fb40u: goto label_19fb40;
        case 0x19fb44u: goto label_19fb44;
        case 0x19fb48u: goto label_19fb48;
        case 0x19fb4cu: goto label_19fb4c;
        case 0x19fb50u: goto label_19fb50;
        case 0x19fb54u: goto label_19fb54;
        case 0x19fb58u: goto label_19fb58;
        case 0x19fb5cu: goto label_19fb5c;
        case 0x19fb60u: goto label_19fb60;
        case 0x19fb64u: goto label_19fb64;
        case 0x19fb68u: goto label_19fb68;
        case 0x19fb6cu: goto label_19fb6c;
        case 0x19fb70u: goto label_19fb70;
        case 0x19fb74u: goto label_19fb74;
        case 0x19fb78u: goto label_19fb78;
        case 0x19fb7cu: goto label_19fb7c;
        case 0x19fb80u: goto label_19fb80;
        case 0x19fb84u: goto label_19fb84;
        case 0x19fb88u: goto label_19fb88;
        case 0x19fb8cu: goto label_19fb8c;
        case 0x19fb90u: goto label_19fb90;
        case 0x19fb94u: goto label_19fb94;
        case 0x19fb98u: goto label_19fb98;
        case 0x19fb9cu: goto label_19fb9c;
        case 0x19fba0u: goto label_19fba0;
        case 0x19fba4u: goto label_19fba4;
        case 0x19fba8u: goto label_19fba8;
        case 0x19fbacu: goto label_19fbac;
        case 0x19fbb0u: goto label_19fbb0;
        case 0x19fbb4u: goto label_19fbb4;
        case 0x19fbb8u: goto label_19fbb8;
        case 0x19fbbcu: goto label_19fbbc;
        case 0x19fbc0u: goto label_19fbc0;
        case 0x19fbc4u: goto label_19fbc4;
        case 0x19fbc8u: goto label_19fbc8;
        case 0x19fbccu: goto label_19fbcc;
        case 0x19fbd0u: goto label_19fbd0;
        case 0x19fbd4u: goto label_19fbd4;
        case 0x19fbd8u: goto label_19fbd8;
        case 0x19fbdcu: goto label_19fbdc;
        case 0x19fbe0u: goto label_19fbe0;
        case 0x19fbe4u: goto label_19fbe4;
        case 0x19fbe8u: goto label_19fbe8;
        case 0x19fbecu: goto label_19fbec;
        case 0x19fbf0u: goto label_19fbf0;
        case 0x19fbf4u: goto label_19fbf4;
        default: break;
    }

    ctx->pc = 0x19f9f0u;

label_19f9f0:
    // 0x19f9f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19f9f4:
    // 0x19f9f4: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x19f9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_19f9f8:
    // 0x19f9f8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_19f9fc:
    // 0x19f9fc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19f9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_19fa00:
    // 0x19fa00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fa04:
    // 0x19fa04: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_19fa08:
    // 0x19fa08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19fa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fa0c:
    // 0x19fa0c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_19fa10:
    // 0x19fa10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19fa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_19fa14:
    // 0x19fa14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19fa18:
    // 0x19fa18: 0x8e04080c  lw          $a0, 0x80C($s0)
    ctx->pc = 0x19fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
label_19fa1c:
    // 0x19fa1c: 0x8e030804  lw          $v1, 0x804($s0)
    ctx->pc = 0x19fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
label_19fa20:
    // 0x19fa20: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x19fa20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19fa24:
    // 0x19fa24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19fa28:
    // 0x19fa28: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x19fa28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19fa2c:
    // 0x19fa2c: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x19fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_19fa30:
    // 0x19fa30: 0x18600068  blez        $v1, . + 4 + (0x68 << 2)
label_19fa34:
    if (ctx->pc == 0x19FA34u) {
        ctx->pc = 0x19FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA30u;
        // 0x19fa34: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA38u;
        goto label_19fa38;
    }
    ctx->pc = 0x19FA30u;
    {
        const bool branch_taken_0x19fa30 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x19FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA30u;
        // 0x19fa34: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa30) {
            ctx->pc = 0x19FBD4u;
            goto label_19fbd4;
        }
    }
    ctx->pc = 0x19FA38u;
label_19fa38:
    // 0x19fa38: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19fa38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fa3c:
    // 0x19fa3c: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x19fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_19fa40:
    // 0x19fa40: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x19fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_19fa44:
    // 0x19fa44: 0xc602081c  lwc1        $f2, 0x81C($s0)
    ctx->pc = 0x19fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19fa48:
    // 0x19fa48: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x19fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19fa4c:
    // 0x19fa4c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x19fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fa50:
    // 0x19fa50: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x19fa50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fa54:
    // 0x19fa54: 0x0  nop
    ctx->pc = 0x19fa54u;
    // NOP
label_19fa58:
    // 0x19fa58: 0x4502005a  bc1fl       . + 4 + (0x5A << 2)
label_19fa5c:
    if (ctx->pc == 0x19FA5Cu) {
        ctx->pc = 0x19FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA58u;
        // 0x19fa5c: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA60u;
        goto label_19fa60;
    }
    ctx->pc = 0x19FA58u;
    {
        const bool branch_taken_0x19fa58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fa58) {
            ctx->pc = 0x19FA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA58u;
            // 0x19fa5c: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBC4u;
            goto label_19fbc4;
        }
    }
    ctx->pc = 0x19FA60u;
label_19fa60:
    // 0x19fa60: 0xc6000820  lwc1        $f0, 0x820($s0)
    ctx->pc = 0x19fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fa64:
    // 0x19fa64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19fa64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fa68:
    // 0x19fa68: 0x0  nop
    ctx->pc = 0x19fa68u;
    // NOP
label_19fa6c:
    // 0x19fa6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_19fa70:
    if (ctx->pc == 0x19FA70u) {
        ctx->pc = 0x19FA74u;
        goto label_19fa74;
    }
    ctx->pc = 0x19FA6Cu;
    {
        const bool branch_taken_0x19fa6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fa6c) {
            ctx->pc = 0x19FA84u;
            goto label_19fa84;
        }
    }
    ctx->pc = 0x19FA74u;
label_19fa74:
    // 0x19fa74: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19fa74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fa78:
    // 0x19fa78: 0x0  nop
    ctx->pc = 0x19fa78u;
    // NOP
label_19fa7c:
    // 0x19fa7c: 0x45020051  bc1fl       . + 4 + (0x51 << 2)
label_19fa80:
    if (ctx->pc == 0x19FA80u) {
        ctx->pc = 0x19FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA7Cu;
        // 0x19fa80: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA84u;
        goto label_19fa84;
    }
    ctx->pc = 0x19FA7Cu;
    {
        const bool branch_taken_0x19fa7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fa7c) {
            ctx->pc = 0x19FA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA7Cu;
            // 0x19fa80: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBC4u;
            goto label_19fbc4;
        }
    }
    ctx->pc = 0x19FA84u;
label_19fa84:
    // 0x19fa84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19fa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_19fa88:
    // 0x19fa88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fa8c:
    // 0x19fa8c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x19fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_19fa90:
    // 0x19fa90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19fa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19fa94:
    // 0x19fa94: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x19fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_19fa98:
    // 0x19fa98: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x19fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_19fa9c:
    // 0x19fa9c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x19fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_19faa0:
    // 0x19faa0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_19faa4:
    // 0x19faa4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_19faa8:
    // 0x19faa8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_19faac:
    // 0x19faac: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x19faacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_19fab0:
    // 0x19fab0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_19fab4:
    // 0x19fab4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x19fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_19fab8:
    // 0x19fab8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x19fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_19fabc:
    // 0x19fabc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x19fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_19fac0:
    // 0x19fac0: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x19fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fac4:
    // 0x19fac4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19fac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19fac8:
    // 0x19fac8: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x19fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19facc:
    // 0x19facc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19faccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19fad0:
    // 0x19fad0: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x19fad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fad4:
    // 0x19fad4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19fad8:
    // 0x19fad8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x19fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fadc:
    // 0x19fadc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x19fadcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19fae0:
    // 0x19fae0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x19fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fae4:
    // 0x19fae4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19fae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_19fae8:
    // 0x19fae8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x19fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19faec:
    // 0x19faec: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x19faecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19faf0:
    // 0x19faf0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x19faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19faf4:
    // 0x19faf4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_19faf8:
    // 0x19faf8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x19faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fafc:
    // 0x19fafc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x19fafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_19fb00:
    // 0x19fb00: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x19fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fb04:
    // 0x19fb04: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19fb08:
    // 0x19fb08: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x19fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fb0c:
    // 0x19fb0c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x19fb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_19fb10:
    // 0x19fb10: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x19fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_19fb14:
    // 0x19fb14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19fb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19fb18:
    // 0x19fb18: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x19fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_19fb1c:
    // 0x19fb1c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x19fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_19fb20:
    // 0x19fb20: 0x8e04083c  lw          $a0, 0x83C($s0)
    ctx->pc = 0x19fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
label_19fb24:
    // 0x19fb24: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x19fb24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_19fb28:
    // 0x19fb28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19fb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19fb2c:
    // 0x19fb2c: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x19fb2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
label_19fb30:
    // 0x19fb30: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x19fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_19fb34:
    // 0x19fb34: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x19fb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_19fb38:
    // 0x19fb38: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_19fb3c:
    // 0x19fb3c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x19fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_19fb40:
    // 0x19fb40: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x19fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_19fb44:
    // 0x19fb44: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_19fb48:
    if (ctx->pc == 0x19FB48u) {
        ctx->pc = 0x19FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB44u;
        // 0x19fb48: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB4Cu;
        goto label_19fb4c;
    }
    ctx->pc = 0x19FB44u;
    {
        const bool branch_taken_0x19fb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB44u;
        // 0x19fb48: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb44) {
            ctx->pc = 0x19FB50u;
            goto label_19fb50;
        }
    }
    ctx->pc = 0x19FB4Cu;
label_19fb4c:
    // 0x19fb4c: 0xafb40048  sw          $s4, 0x48($sp)
    ctx->pc = 0x19fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 20));
label_19fb50:
    // 0x19fb50: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x19fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
label_19fb54:
    // 0x19fb54: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x19fb54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_19fb58:
    // 0x19fb58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19fb5c:
    // 0x19fb5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19fb60:
    if (ctx->pc == 0x19FB60u) {
        ctx->pc = 0x19FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB5Cu;
        // 0x19fb60: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB64u;
        goto label_19fb64;
    }
    ctx->pc = 0x19FB5Cu;
    {
        const bool branch_taken_0x19fb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB5Cu;
        // 0x19fb60: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb5c) {
            ctx->pc = 0x19FB6Cu;
            goto label_19fb6c;
        }
    }
    ctx->pc = 0x19FB64u;
label_19fb64:
    // 0x19fb64: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19fb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_19fb68:
    // 0x19fb68: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x19fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_19fb6c:
    // 0x19fb6c: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x19fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
label_19fb70:
    // 0x19fb70: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_19fb74:
    // 0x19fb74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19fb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19fb78:
    // 0x19fb78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19fb7c:
    if (ctx->pc == 0x19FB7Cu) {
        ctx->pc = 0x19FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB78u;
        // 0x19fb7c: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB80u;
        goto label_19fb80;
    }
    ctx->pc = 0x19FB78u;
    {
        const bool branch_taken_0x19fb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB78u;
        // 0x19fb7c: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb78) {
            ctx->pc = 0x19FB88u;
            goto label_19fb88;
        }
    }
    ctx->pc = 0x19FB80u;
label_19fb80:
    // 0x19fb80: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19fb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_19fb84:
    // 0x19fb84: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x19fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_19fb88:
    // 0x19fb88: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x19fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_19fb8c:
    // 0x19fb8c: 0x14540006  bne         $v0, $s4, . + 4 + (0x6 << 2)
label_19fb90:
    if (ctx->pc == 0x19FB90u) {
        ctx->pc = 0x19FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB8Cu;
        // 0x19fb90: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB94u;
        goto label_19fb94;
    }
    ctx->pc = 0x19FB8Cu;
    {
        const bool branch_taken_0x19fb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x19FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB8Cu;
        // 0x19fb90: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb8c) {
            ctx->pc = 0x19FBA8u;
            goto label_19fba8;
        }
    }
    ctx->pc = 0x19FB94u;
label_19fb94:
    // 0x19fb94: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x19fb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_19fb98:
    // 0x19fb98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19fb9c:
    if (ctx->pc == 0x19FB9Cu) {
        ctx->pc = 0x19FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB98u;
        // 0x19fb9c: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBA0u;
        goto label_19fba0;
    }
    ctx->pc = 0x19FB98u;
    {
        const bool branch_taken_0x19fb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB98u;
        // 0x19fb9c: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb98) {
            ctx->pc = 0x19FBA8u;
            goto label_19fba8;
        }
    }
    ctx->pc = 0x19FBA0u;
label_19fba0:
    // 0x19fba0: 0x34420016  ori         $v0, $v0, 0x16
    ctx->pc = 0x19fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
label_19fba4:
    // 0x19fba4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x19fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_19fba8:
    // 0x19fba8: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x19fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_19fbac:
    // 0x19fbac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19fbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19fbb0:
    // 0x19fbb0: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_19fbb4:
    // 0x19fbb4: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x19fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_19fbb8:
    // 0x19fbb8: 0x60f809  jalr        $v1
label_19fbbc:
    if (ctx->pc == 0x19FBBCu) {
        ctx->pc = 0x19FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBB8u;
        // 0x19fbbc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBC0u;
        goto label_19fbc0;
    }
    ctx->pc = 0x19FBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19FBC0u);
        ctx->pc = 0x19FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBB8u;
        // 0x19fbbc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FBB8u, 0x19FBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FBC0u;
label_19fbc0:
    // 0x19fbc0: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x19fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_19fbc4:
    // 0x19fbc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19fbc8:
    // 0x19fbc8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x19fbc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19fbcc:
    // 0x19fbcc: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
label_19fbd0:
    if (ctx->pc == 0x19FBD0u) {
        ctx->pc = 0x19FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBCCu;
        // 0x19fbd0: 0x8e430088  lw          $v1, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBD4u;
        goto label_19fbd4;
    }
    ctx->pc = 0x19FBCCu;
    {
        const bool branch_taken_0x19fbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fbcc) {
            ctx->pc = 0x19FBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FBCCu;
            // 0x19fbd0: 0x8e430088  lw          $v1, 0x88($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fa40;
        }
    }
    ctx->pc = 0x19FBD4u;
label_19fbd4:
    // 0x19fbd4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19fbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19fbd8:
    // 0x19fbd8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19fbd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19fbdc:
    // 0x19fbdc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19fbdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19fbe0:
    // 0x19fbe0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19fbe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19fbe4:
    // 0x19fbe4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x19fbe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19fbe8:
    // 0x19fbe8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19fbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19fbec:
    // 0x19fbec: 0x3e00008  jr          $ra
label_19fbf0:
    if (ctx->pc == 0x19FBF0u) {
        ctx->pc = 0x19FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBECu;
        // 0x19fbf0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBF4u;
        goto label_19fbf4;
    }
    ctx->pc = 0x19FBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBECu;
        // 0x19fbf0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FBF4u;
label_19fbf4:
    // 0x19fbf4: 0x0  nop
    ctx->pc = 0x19fbf4u;
    // NOP
    ctx->pc = 0x19fbf8u;
}

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

// Function: sub_00246F40
// Address: 0x246f40 - 0x247148
void sub_00246F40_0x246f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246F40_0x246f40");
#endif

    switch (ctx->pc) {
        case 0x246f40u: goto label_246f40;
        case 0x246f44u: goto label_246f44;
        case 0x246f48u: goto label_246f48;
        case 0x246f4cu: goto label_246f4c;
        case 0x246f50u: goto label_246f50;
        case 0x246f54u: goto label_246f54;
        case 0x246f58u: goto label_246f58;
        case 0x246f5cu: goto label_246f5c;
        case 0x246f60u: goto label_246f60;
        case 0x246f64u: goto label_246f64;
        case 0x246f68u: goto label_246f68;
        case 0x246f6cu: goto label_246f6c;
        case 0x246f70u: goto label_246f70;
        case 0x246f74u: goto label_246f74;
        case 0x246f78u: goto label_246f78;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f80u: goto label_246f80;
        case 0x246f84u: goto label_246f84;
        case 0x246f88u: goto label_246f88;
        case 0x246f8cu: goto label_246f8c;
        case 0x246f90u: goto label_246f90;
        case 0x246f94u: goto label_246f94;
        case 0x246f98u: goto label_246f98;
        case 0x246f9cu: goto label_246f9c;
        case 0x246fa0u: goto label_246fa0;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fa8u: goto label_246fa8;
        case 0x246facu: goto label_246fac;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fb4u: goto label_246fb4;
        case 0x246fb8u: goto label_246fb8;
        case 0x246fbcu: goto label_246fbc;
        case 0x246fc0u: goto label_246fc0;
        case 0x246fc4u: goto label_246fc4;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fccu: goto label_246fcc;
        case 0x246fd0u: goto label_246fd0;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fd8u: goto label_246fd8;
        case 0x246fdcu: goto label_246fdc;
        case 0x246fe0u: goto label_246fe0;
        case 0x246fe4u: goto label_246fe4;
        case 0x246fe8u: goto label_246fe8;
        case 0x246fecu: goto label_246fec;
        case 0x246ff0u: goto label_246ff0;
        case 0x246ff4u: goto label_246ff4;
        case 0x246ff8u: goto label_246ff8;
        case 0x246ffcu: goto label_246ffc;
        case 0x247000u: goto label_247000;
        case 0x247004u: goto label_247004;
        case 0x247008u: goto label_247008;
        case 0x24700cu: goto label_24700c;
        case 0x247010u: goto label_247010;
        case 0x247014u: goto label_247014;
        case 0x247018u: goto label_247018;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247024u: goto label_247024;
        case 0x247028u: goto label_247028;
        case 0x24702cu: goto label_24702c;
        case 0x247030u: goto label_247030;
        case 0x247034u: goto label_247034;
        case 0x247038u: goto label_247038;
        case 0x24703cu: goto label_24703c;
        case 0x247040u: goto label_247040;
        case 0x247044u: goto label_247044;
        case 0x247048u: goto label_247048;
        case 0x24704cu: goto label_24704c;
        case 0x247050u: goto label_247050;
        case 0x247054u: goto label_247054;
        case 0x247058u: goto label_247058;
        case 0x24705cu: goto label_24705c;
        case 0x247060u: goto label_247060;
        case 0x247064u: goto label_247064;
        case 0x247068u: goto label_247068;
        case 0x24706cu: goto label_24706c;
        case 0x247070u: goto label_247070;
        case 0x247074u: goto label_247074;
        case 0x247078u: goto label_247078;
        case 0x24707cu: goto label_24707c;
        case 0x247080u: goto label_247080;
        case 0x247084u: goto label_247084;
        case 0x247088u: goto label_247088;
        case 0x24708cu: goto label_24708c;
        case 0x247090u: goto label_247090;
        case 0x247094u: goto label_247094;
        case 0x247098u: goto label_247098;
        case 0x24709cu: goto label_24709c;
        case 0x2470a0u: goto label_2470a0;
        case 0x2470a4u: goto label_2470a4;
        case 0x2470a8u: goto label_2470a8;
        case 0x2470acu: goto label_2470ac;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b4u: goto label_2470b4;
        case 0x2470b8u: goto label_2470b8;
        case 0x2470bcu: goto label_2470bc;
        case 0x2470c0u: goto label_2470c0;
        case 0x2470c4u: goto label_2470c4;
        case 0x2470c8u: goto label_2470c8;
        case 0x2470ccu: goto label_2470cc;
        case 0x2470d0u: goto label_2470d0;
        case 0x2470d4u: goto label_2470d4;
        case 0x2470d8u: goto label_2470d8;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470e0u: goto label_2470e0;
        case 0x2470e4u: goto label_2470e4;
        case 0x2470e8u: goto label_2470e8;
        case 0x2470ecu: goto label_2470ec;
        case 0x2470f0u: goto label_2470f0;
        case 0x2470f4u: goto label_2470f4;
        case 0x2470f8u: goto label_2470f8;
        case 0x2470fcu: goto label_2470fc;
        case 0x247100u: goto label_247100;
        case 0x247104u: goto label_247104;
        case 0x247108u: goto label_247108;
        case 0x24710cu: goto label_24710c;
        case 0x247110u: goto label_247110;
        case 0x247114u: goto label_247114;
        case 0x247118u: goto label_247118;
        case 0x24711cu: goto label_24711c;
        case 0x247120u: goto label_247120;
        case 0x247124u: goto label_247124;
        case 0x247128u: goto label_247128;
        case 0x24712cu: goto label_24712c;
        case 0x247130u: goto label_247130;
        case 0x247134u: goto label_247134;
        case 0x247138u: goto label_247138;
        case 0x24713cu: goto label_24713c;
        case 0x247140u: goto label_247140;
        case 0x247144u: goto label_247144;
        default: break;
    }

    ctx->pc = 0x246f40u;

label_246f40:
    // 0x246f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x246f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_246f44:
    // 0x246f44: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x246f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_246f48:
    // 0x246f48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x246f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_246f4c:
    // 0x246f4c: 0x24471180  addiu       $a3, $v0, 0x1180
    ctx->pc = 0x246f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
label_246f50:
    // 0x246f50: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x246f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_246f54:
    // 0x246f54: 0x8ca5416c  lw          $a1, 0x416C($a1)
    ctx->pc = 0x246f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16748)));
label_246f58:
    // 0x246f58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x246f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_246f5c:
    // 0x246f5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x246f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_246f60:
    // 0x246f60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x246f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_246f64:
    // 0x246f64: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x246f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_246f68:
    // 0x246f68: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x246f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
label_246f6c:
    // 0x246f6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246f70:
    // 0x246f70: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_246f74:
    if (ctx->pc == 0x246F74u) {
        ctx->pc = 0x246F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F70u;
        // 0x246f74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F78u;
        goto label_246f78;
    }
    ctx->pc = 0x246F70u;
    {
        const bool branch_taken_0x246f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F70u;
        // 0x246f74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f70) {
            ctx->pc = 0x2470F8u;
            goto label_2470f8;
        }
    }
    ctx->pc = 0x246F78u;
label_246f78:
    // 0x246f78: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x246f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_246f7c:
    // 0x246f7c: 0x50800067  beql        $a0, $zero, . + 4 + (0x67 << 2)
label_246f80:
    if (ctx->pc == 0x246F80u) {
        ctx->pc = 0x246F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F7Cu;
        // 0x246f80: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F84u;
        goto label_246f84;
    }
    ctx->pc = 0x246F7Cu;
    {
        const bool branch_taken_0x246f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f7c) {
            ctx->pc = 0x246F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F7Cu;
            // 0x246f80: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24711Cu;
            goto label_24711c;
        }
    }
    ctx->pc = 0x246F84u;
label_246f84:
    // 0x246f84: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x246f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_246f88:
    // 0x246f88: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x246f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_246f8c:
    // 0x246f8c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x246f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_246f90:
    // 0x246f90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x246f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_246f94:
    // 0x246f94: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x246f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_246f98:
    // 0x246f98: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x246f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_246f9c:
    // 0x246f9c: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x246f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_246fa0:
    // 0x246fa0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x246fa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_246fa4:
    // 0x246fa4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_246fa8:
    if (ctx->pc == 0x246FA8u) {
        ctx->pc = 0x246FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FA4u;
        // 0x246fa8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FACu;
        goto label_246fac;
    }
    ctx->pc = 0x246FA4u;
    {
        const bool branch_taken_0x246fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x246FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FA4u;
        // 0x246fa8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fa4) {
            ctx->pc = 0x246FB8u;
            goto label_246fb8;
        }
    }
    ctx->pc = 0x246FACu;
label_246fac:
    // 0x246fac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_246fb0:
    // 0x246fb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_246fb4:
    // 0x246fb4: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x246fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
label_246fb8:
    // 0x246fb8: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x246fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_246fbc:
    // 0x246fbc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_246fc0:
    if (ctx->pc == 0x246FC0u) {
        ctx->pc = 0x246FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FBCu;
        // 0x246fc0: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FC4u;
        goto label_246fc4;
    }
    ctx->pc = 0x246FBCu;
    {
        const bool branch_taken_0x246fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246fbc) {
            ctx->pc = 0x246FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FBCu;
            // 0x246fc0: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FD4u;
            goto label_246fd4;
        }
    }
    ctx->pc = 0x246FC4u;
label_246fc4:
    // 0x246fc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_246fc8:
    // 0x246fc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_246fcc:
    // 0x246fcc: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x246fccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
label_246fd0:
    // 0x246fd0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x246fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_246fd4:
    // 0x246fd4: 0x5466001e  bnel        $v1, $a2, . + 4 + (0x1E << 2)
label_246fd8:
    if (ctx->pc == 0x246FD8u) {
        ctx->pc = 0x246FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FD4u;
        // 0x246fd8: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FDCu;
        goto label_246fdc;
    }
    ctx->pc = 0x246FD4u;
    {
        const bool branch_taken_0x246fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x246fd4) {
            ctx->pc = 0x246FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FD4u;
            // 0x246fd8: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247050u;
            goto label_247050;
        }
    }
    ctx->pc = 0x246FDCu;
label_246fdc:
    // 0x246fdc: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x246fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_246fe0:
    // 0x246fe0: 0x10660037  beq         $v1, $a2, . + 4 + (0x37 << 2)
label_246fe4:
    if (ctx->pc == 0x246FE4u) {
        ctx->pc = 0x246FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FE0u;
        // 0x246fe4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FE8u;
        goto label_246fe8;
    }
    ctx->pc = 0x246FE0u;
    {
        const bool branch_taken_0x246fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x246FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FE0u;
        // 0x246fe4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fe0) {
            ctx->pc = 0x2470C0u;
            goto label_2470c0;
        }
    }
    ctx->pc = 0x246FE8u;
label_246fe8:
    // 0x246fe8: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x246fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_246fec:
    // 0x246fec: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x246fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_246ff0:
    // 0x246ff0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_246ff4:
    // 0x246ff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_246ff8:
    // 0x246ff8: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_246ffc:
    if (ctx->pc == 0x246FFCu) {
        ctx->pc = 0x246FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FF8u;
        // 0x246ffc: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247000u;
        goto label_247000;
    }
    ctx->pc = 0x246FF8u;
    {
        const bool branch_taken_0x246ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FF8u;
        // 0x246ffc: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ff8) {
            ctx->pc = 0x2470C4u;
            goto label_2470c4;
        }
    }
    ctx->pc = 0x247000u;
label_247000:
    // 0x247000: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x247000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_247004:
    // 0x247004: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x247004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_247008:
    // 0x247008: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x247008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24700c:
    // 0x24700c: 0x0  nop
    ctx->pc = 0x24700cu;
    // NOP
label_247010:
    // 0x247010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_247014:
    if (ctx->pc == 0x247014u) {
        ctx->pc = 0x247014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247010u;
        // 0x247014: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247018u;
        goto label_247018;
    }
    ctx->pc = 0x247010u;
    {
        const bool branch_taken_0x247010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247010u;
        // 0x247014: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247010) {
            ctx->pc = 0x247028u;
            goto label_247028;
        }
    }
    ctx->pc = 0x247018u;
label_247018:
    // 0x247018: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x247018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_24701c:
    // 0x24701c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24701cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_247020:
    // 0x247020: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x247020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_247024:
    // 0x247024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x247024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_247028:
    // 0x247028: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
label_24702c:
    if (ctx->pc == 0x24702Cu) {
        ctx->pc = 0x24702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247028u;
        // 0x24702c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247030u;
        goto label_247030;
    }
    ctx->pc = 0x247028u;
    {
        const bool branch_taken_0x247028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x24702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247028u;
        // 0x24702c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247028) {
            ctx->pc = 0x2470C0u;
            goto label_2470c0;
        }
    }
    ctx->pc = 0x247030u;
label_247030:
    // 0x247030: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x247030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_247034:
    // 0x247034: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x247034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_247038:
    // 0x247038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24703c:
    // 0x24703c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247040:
    // 0x247040: 0x5080fff3  beql        $a0, $zero, . + 4 + (-0xD << 2)
label_247044:
    if (ctx->pc == 0x247044u) {
        ctx->pc = 0x247044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247040u;
        // 0x247044: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247048u;
        goto label_247048;
    }
    ctx->pc = 0x247040u;
    {
        const bool branch_taken_0x247040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247040) {
            ctx->pc = 0x247044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247040u;
            // 0x247044: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247010;
        }
    }
    ctx->pc = 0x247048u;
label_247048:
    // 0x247048: 0x1000001e  b           . + 4 + (0x1E << 2)
label_24704c:
    if (ctx->pc == 0x24704Cu) {
        ctx->pc = 0x24704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247048u;
        // 0x24704c: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247050u;
        goto label_247050;
    }
    ctx->pc = 0x247048u;
    {
        const bool branch_taken_0x247048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247048u;
        // 0x24704c: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247048) {
            ctx->pc = 0x2470C4u;
            goto label_2470c4;
        }
    }
    ctx->pc = 0x247050u;
label_247050:
    // 0x247050: 0x54a2001c  bnel        $a1, $v0, . + 4 + (0x1C << 2)
label_247054:
    if (ctx->pc == 0x247054u) {
        ctx->pc = 0x247054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247050u;
        // 0x247054: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247058u;
        goto label_247058;
    }
    ctx->pc = 0x247050u;
    {
        const bool branch_taken_0x247050 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x247050) {
            ctx->pc = 0x247054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247050u;
            // 0x247054: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470C4u;
            goto label_2470c4;
        }
    }
    ctx->pc = 0x247058u;
label_247058:
    // 0x247058: 0x10c50019  beq         $a2, $a1, . + 4 + (0x19 << 2)
label_24705c:
    if (ctx->pc == 0x24705Cu) {
        ctx->pc = 0x24705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247058u;
        // 0x24705c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247060u;
        goto label_247060;
    }
    ctx->pc = 0x247058u;
    {
        const bool branch_taken_0x247058 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x24705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247058u;
        // 0x24705c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247058) {
            ctx->pc = 0x2470C0u;
            goto label_2470c0;
        }
    }
    ctx->pc = 0x247060u;
label_247060:
    // 0x247060: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x247060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_247064:
    // 0x247064: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x247064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_247068:
    // 0x247068: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x247068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24706c:
    // 0x24706c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247070:
    // 0x247070: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_247074:
    if (ctx->pc == 0x247074u) {
        ctx->pc = 0x247074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247070u;
        // 0x247074: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247078u;
        goto label_247078;
    }
    ctx->pc = 0x247070u;
    {
        const bool branch_taken_0x247070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x247074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247070u;
        // 0x247074: 0x26451180  addiu       $a1, $s2, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247070) {
            ctx->pc = 0x2470C4u;
            goto label_2470c4;
        }
    }
    ctx->pc = 0x247078u;
label_247078:
    // 0x247078: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x247078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24707c:
    // 0x24707c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x24707cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_247080:
    // 0x247080: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x247080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_247084:
    // 0x247084: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x247084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_247088:
    // 0x247088: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_24708c:
    // 0x24708c: 0x0  nop
    ctx->pc = 0x24708cu;
    // NOP
label_247090:
    // 0x247090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_247094:
    // 0x247094: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
label_247098:
    if (ctx->pc == 0x247098u) {
        ctx->pc = 0x247098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247094u;
        // 0x247098: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24709Cu;
        goto label_24709c;
    }
    ctx->pc = 0x247094u;
    {
        const bool branch_taken_0x247094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x247098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247094u;
        // 0x247098: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247094) {
            ctx->pc = 0x2470A0u;
            goto label_2470a0;
        }
    }
    ctx->pc = 0x24709Cu;
label_24709c:
    // 0x24709c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x24709cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_2470a0:
    // 0x2470a0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2470a4:
    // 0x2470a4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
label_2470a8:
    if (ctx->pc == 0x2470A8u) {
        ctx->pc = 0x2470A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A4u;
        // 0x2470a8: 0x481018  mult        $v0, $v0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470ACu;
        goto label_2470ac;
    }
    ctx->pc = 0x2470A4u;
    {
        const bool branch_taken_0x2470a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2470A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A4u;
        // 0x2470a8: 0x481018  mult        $v0, $v0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470a4) {
            ctx->pc = 0x2470C0u;
            goto label_2470c0;
        }
    }
    ctx->pc = 0x2470ACu;
label_2470ac:
    // 0x2470ac: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2470acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2470b0:
    // 0x2470b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2470b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2470b4:
    // 0x2470b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2470b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2470b8:
    // 0x2470b8: 0x5080fff5  beql        $a0, $zero, . + 4 + (-0xB << 2)
label_2470bc:
    if (ctx->pc == 0x2470BCu) {
        ctx->pc = 0x2470BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B8u;
        // 0x2470bc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470C0u;
        goto label_2470c0;
    }
    ctx->pc = 0x2470B8u;
    {
        const bool branch_taken_0x2470b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2470b8) {
            ctx->pc = 0x2470BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470B8u;
            // 0x2470bc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247090;
        }
    }
    ctx->pc = 0x2470C0u;
label_2470c0:
    // 0x2470c0: 0x26451180  addiu       $a1, $s2, 0x1180
    ctx->pc = 0x2470c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
label_2470c4:
    // 0x2470c4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2470c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2470c8:
    // 0x2470c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2470c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2470cc:
    // 0x2470cc: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2470ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2470d0:
    // 0x2470d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2470d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2470d4:
    // 0x2470d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2470d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2470d8:
    // 0x2470d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2470d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2470dc:
    // 0x2470dc: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_2470e0:
    if (ctx->pc == 0x2470E0u) {
        ctx->pc = 0x2470E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470DCu;
        // 0x2470e0: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470E4u;
        goto label_2470e4;
    }
    ctx->pc = 0x2470DCu;
    {
        const bool branch_taken_0x2470dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2470dc) {
            ctx->pc = 0x2470E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470DCu;
            // 0x2470e0: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24711Cu;
            goto label_24711c;
        }
    }
    ctx->pc = 0x2470E4u;
label_2470e4:
    // 0x2470e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2470e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2470e8:
    // 0x2470e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2470e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2470ec:
    // 0x2470ec: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2470ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2470f0:
    // 0x2470f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2470f4:
    if (ctx->pc == 0x2470F4u) {
        ctx->pc = 0x2470F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470F0u;
        // 0x2470f4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470F8u;
        goto label_2470f8;
    }
    ctx->pc = 0x2470F0u;
    {
        const bool branch_taken_0x2470f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470F0u;
        // 0x2470f4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470f0) {
            ctx->pc = 0x247118u;
            goto label_247118;
        }
    }
    ctx->pc = 0x2470F8u;
label_2470f8:
    // 0x2470f8: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x2470f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_2470fc:
    // 0x2470fc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_247100:
    if (ctx->pc == 0x247100u) {
        ctx->pc = 0x247100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470FCu;
        // 0x247100: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247104u;
        goto label_247104;
    }
    ctx->pc = 0x2470FCu;
    {
        const bool branch_taken_0x2470fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2470fc) {
            ctx->pc = 0x247100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470FCu;
            // 0x247100: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24711Cu;
            goto label_24711c;
        }
    }
    ctx->pc = 0x247104u;
label_247104:
    // 0x247104: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x247104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_247108:
    // 0x247108: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24710c:
    if (ctx->pc == 0x24710Cu) {
        ctx->pc = 0x24710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247108u;
        // 0x24710c: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247110u;
        goto label_247110;
    }
    ctx->pc = 0x247108u;
    {
        const bool branch_taken_0x247108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247108) {
            ctx->pc = 0x24710Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247108u;
            // 0x24710c: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24711Cu;
            goto label_24711c;
        }
    }
    ctx->pc = 0x247110u;
label_247110:
    // 0x247110: 0x60f809  jalr        $v1
label_247114:
    if (ctx->pc == 0x247114u) {
        ctx->pc = 0x247114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247110u;
        // 0x247114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247118u;
        goto label_247118;
    }
    ctx->pc = 0x247110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247118u);
        ctx->pc = 0x247114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247110u;
        // 0x247114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247110u, 0x247118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247118u;
label_247118:
    // 0x247118: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x247118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_24711c:
    // 0x24711c: 0x26431180  addiu       $v1, $s2, 0x1180
    ctx->pc = 0x24711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4480));
label_247120:
    // 0x247120: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x247120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_247124:
    // 0x247124: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
label_247128:
    if (ctx->pc == 0x247128u) {
        ctx->pc = 0x247128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247124u;
        // 0x247128: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24712Cu;
        goto label_24712c;
    }
    ctx->pc = 0x247124u;
    {
        const bool branch_taken_0x247124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x247124) {
            ctx->pc = 0x247128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247124u;
            // 0x247128: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24712Cu;
            goto label_24712c;
        }
    }
    ctx->pc = 0x24712Cu;
label_24712c:
    // 0x24712c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24712cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_247130:
    // 0x247130: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x247130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247134:
    // 0x247134: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x247134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247138:
    // 0x247138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24713c:
    // 0x24713c: 0x3e00008  jr          $ra
label_247140:
    if (ctx->pc == 0x247140u) {
        ctx->pc = 0x247140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24713Cu;
        // 0x247140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247144u;
        goto label_247144;
    }
    ctx->pc = 0x24713Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24713Cu;
        // 0x247140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24713Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247144u;
label_247144:
    // 0x247144: 0x0  nop
    ctx->pc = 0x247144u;
    // NOP
    ctx->pc = 0x247148u;
}

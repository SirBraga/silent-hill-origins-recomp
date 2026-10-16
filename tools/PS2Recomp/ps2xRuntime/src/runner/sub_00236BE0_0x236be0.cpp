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

// Function: sub_00236BE0
// Address: 0x236be0 - 0x2373d0
void sub_00236BE0_0x236be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236BE0_0x236be0");
#endif

    switch (ctx->pc) {
        case 0x236cacu: goto label_236cac;
        case 0x236cb4u: goto label_236cb4;
        case 0x236cc0u: goto label_236cc0;
        case 0x236d18u: goto label_236d18;
        case 0x236d38u: goto label_236d38;
        case 0x236d68u: goto label_236d68;
        case 0x236d78u: goto label_236d78;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dccu: goto label_236dcc;
        case 0x236dd0u: goto label_236dd0;
        case 0x236dd8u: goto label_236dd8;
        case 0x236de8u: goto label_236de8;
        case 0x236df0u: goto label_236df0;
        case 0x236e08u: goto label_236e08;
        case 0x236e1cu: goto label_236e1c;
        case 0x236e38u: goto label_236e38;
        case 0x236eecu: goto label_236eec;
        case 0x236ef4u: goto label_236ef4;
        case 0x236f00u: goto label_236f00;
        case 0x236f58u: goto label_236f58;
        case 0x236fa8u: goto label_236fa8;
        case 0x236fb8u: goto label_236fb8;
        case 0x236ff4u: goto label_236ff4;
        case 0x237000u: goto label_237000;
        case 0x237008u: goto label_237008;
        case 0x237018u: goto label_237018;
        case 0x237020u: goto label_237020;
        case 0x237038u: goto label_237038;
        case 0x23704cu: goto label_23704c;
        case 0x237068u: goto label_237068;
        case 0x23710cu: goto label_23710c;
        case 0x237118u: goto label_237118;
        case 0x237134u: goto label_237134;
        case 0x237178u: goto label_237178;
        case 0x23720cu: goto label_23720c;
        case 0x237240u: goto label_237240;
        case 0x23730cu: goto label_23730c;
        case 0x237354u: goto label_237354;
        default: break;
    }

    ctx->pc = 0x236be0u;

    // 0x236be0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x236be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x236be4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x236be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x236be8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x236be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x236bec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x236becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bf0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x236bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x236bf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bf8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x236bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x236bfc: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x236bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x236c00: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x236c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x236c04: 0x39202  srl         $s2, $v1, 8
    ctx->pc = 0x236c04u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x236c08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x236c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x236c0c: 0x321000fb  andi        $s0, $s0, 0xFB
    ctx->pc = 0x236c0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)251);
    // 0x236c10: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x236c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x236c14: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x236c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x236c18: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x236c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x236c1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x236c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x236c20: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x236c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x236c24: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x236c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x236c28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x236c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x236c2c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x236C2Cu;
    {
        const bool branch_taken_0x236c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C2Cu;
        // 0x236c30: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c2c) {
            ctx->pc = 0x236C64u;
            goto label_236c64;
        }
    }
    ctx->pc = 0x236C34u;
    // 0x236c34: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x236c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x236c38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236C38u;
    {
        const bool branch_taken_0x236c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C38u;
        // 0x236c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c38) {
            ctx->pc = 0x236C50u;
            goto label_236c50;
        }
    }
    ctx->pc = 0x236C40u;
    // 0x236c40: 0x50620123  beql        $v1, $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x236C40u;
    {
        const bool branch_taken_0x236c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x236c40) {
            ctx->pc = 0x236C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236C40u;
            // 0x236c44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2370D0u;
            goto label_2370d0;
        }
    }
    ctx->pc = 0x236C48u;
    // 0x236c48: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x236C48u;
    {
        const bool branch_taken_0x236c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C48u;
        // 0x236c4c: 0x8f8390fc  lw          $v1, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c48) {
            ctx->pc = 0x2370E0u;
            goto label_2370e0;
        }
    }
    ctx->pc = 0x236C50u;
label_236c50:
    // 0x236c50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x236c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x236c54: 0x10620087  beq         $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x236C54u;
    {
        const bool branch_taken_0x236c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C54u;
        // 0x236c58: 0x8f8390fc  lw          $v1, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c54) {
            ctx->pc = 0x236E74u;
            goto label_236e74;
        }
    }
    ctx->pc = 0x236C5Cu;
    // 0x236c5c: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x236C5Cu;
    {
        const bool branch_taken_0x236c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C5Cu;
        // 0x236c60: 0x2239821  addu        $s3, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c5c) {
            ctx->pc = 0x2370E4u;
            goto label_2370e4;
        }
    }
    ctx->pc = 0x236C64u;
label_236c64:
    // 0x236c64: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x236c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x236c68: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x236c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x236c6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236C6Cu;
    {
        const bool branch_taken_0x236c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C6Cu;
        // 0x236c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c6c) {
            ctx->pc = 0x236C88u;
            goto label_236c88;
        }
    }
    ctx->pc = 0x236C74u;
    // 0x236c74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x236c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x236c78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x236c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x236c7c: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x236C7Cu;
    {
        const bool branch_taken_0x236c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C7Cu;
        // 0x236c80: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c7c) {
            ctx->pc = 0x237104u;
            goto label_237104;
        }
    }
    ctx->pc = 0x236C84u;
    // 0x236c84: 0x0  nop
    ctx->pc = 0x236c84u;
    // NOP
label_236c88:
    // 0x236c88: 0x1640011b  bnez        $s2, . + 4 + (0x11B << 2)
    ctx->pc = 0x236C88u;
    {
        const bool branch_taken_0x236c88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x236c88) {
            ctx->pc = 0x2370F8u;
            goto label_2370f8;
        }
    }
    ctx->pc = 0x236C90u;
    // 0x236c90: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x236c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x236c94: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x236C94u;
    {
        const bool branch_taken_0x236c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C94u;
        // 0x236c98: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c94) {
            ctx->pc = 0x236D38u;
            goto label_236d38;
        }
    }
    ctx->pc = 0x236C9Cu;
    // 0x236c9c: 0x144001c0  bnez        $v0, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x236C9Cu;
    {
        const bool branch_taken_0x236c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C9Cu;
        // 0x236ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c9c) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x236CA4u;
    // 0x236ca4: 0xc08b848  jal         func_22E120
    ctx->pc = 0x236CA4u;
    SET_GPR_U32(ctx, 31, 0x236CACu);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x236CA4u, 0x236CACu)) {
        return;
    }
    ctx->pc = 0x236CACu;
label_236cac:
    // 0x236cac: 0xc08b848  jal         func_22E120
    ctx->pc = 0x236CACu;
    SET_GPR_U32(ctx, 31, 0x236CB4u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x236CACu, 0x236CB4u)) {
        return;
    }
    ctx->pc = 0x236CB4u;
label_236cb4:
    // 0x236cb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x236cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cb8: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x236CB8u;
    SET_GPR_U32(ctx, 31, 0x236CC0u);
    ctx->pc = 0x236CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CB8u;
    // 0x236cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x236CB8u, 0x236CC0u)) {
        return;
    }
    ctx->pc = 0x236CC0u;
label_236cc0:
    // 0x236cc0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x236cc4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x236cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x236cc8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x236cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236ccc: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x236cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x236cd0: 0x8e340010  lw          $s4, 0x10($s1)
    ctx->pc = 0x236cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x236cd4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x236cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x236cd8: 0x8636001e  lh          $s6, 0x1E($s1)
    ctx->pc = 0x236cd8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x236cdc: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x236cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x236ce0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x236ce4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x236ce4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x236ce8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x236CE8u;
    {
        const bool branch_taken_0x236ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x236ce8) {
            ctx->pc = 0x236CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236CE8u;
            // 0x236cec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x236CF0u;
            goto label_236cf0;
        }
    }
    ctx->pc = 0x236CF0u;
label_236cf0:
    // 0x236cf0: 0x1812  mflo        $v1
    ctx->pc = 0x236cf0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x236cf4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x236cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cf8: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x236cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x236cfc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x236CFCu;
    {
        const bool branch_taken_0x236cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CFCu;
        // 0x236d00: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cfc) {
            ctx->pc = 0x236D40u;
            goto label_236d40;
        }
    }
    ctx->pc = 0x236D04u;
    // 0x236d04: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x236d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x236d08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236D08u;
    {
        const bool branch_taken_0x236d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236d08) {
            ctx->pc = 0x236D30u;
            goto label_236d30;
        }
    }
    ctx->pc = 0x236D10u;
    // 0x236d10: 0x42023  negu        $a0, $a0
    ctx->pc = 0x236d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x236d14: 0x0  nop
    ctx->pc = 0x236d14u;
    // NOP
label_236d18:
    // 0x236d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x236d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x236d1c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x236d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x236d20: 0x0  nop
    ctx->pc = 0x236d20u;
    // NOP
    // 0x236d24: 0x0  nop
    ctx->pc = 0x236d24u;
    // NOP
    // 0x236d28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x236D28u;
    {
        const bool branch_taken_0x236d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D28u;
        // 0x236d2c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d28) {
            ctx->pc = 0x236D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236d18;
        }
    }
    ctx->pc = 0x236D30u;
label_236d30:
    // 0x236d30: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236D30u;
    {
        const bool branch_taken_0x236d30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x236d30) {
            ctx->pc = 0x236D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D30u;
            // 0x236d34: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D48u;
            goto label_236d48;
        }
    }
    ctx->pc = 0x236D38u;
label_236d38:
    // 0x236d38: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x236D38u;
    {
        const bool branch_taken_0x236d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D38u;
        // 0x236d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d38) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x236D40u;
label_236d40:
    // 0x236d40: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x236d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d44: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x236d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_236d48:
    // 0x236d48: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x236d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236d4c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x236d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x236d50: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x236d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x236d54: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x236d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x236d58: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x236d58u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x236d5c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x236d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x236d60: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x236D60u;
    SET_GPR_U32(ctx, 31, 0x236D68u);
    ctx->pc = 0x236D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D60u;
    // 0x236d64: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x236D60u, 0x236D68u)) {
        return;
    }
    ctx->pc = 0x236D68u;
label_236d68:
    // 0x236d68: 0x128000cc  beqz        $s4, . + 4 + (0xCC << 2)
    ctx->pc = 0x236D68u;
    {
        const bool branch_taken_0x236d68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D68u;
        // 0x236d6c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d68) {
            ctx->pc = 0x23709Cu;
            goto label_23709c;
        }
    }
    ctx->pc = 0x236D70u;
    // 0x236d70: 0x24574080  addiu       $s7, $v0, 0x4080
    ctx->pc = 0x236d70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x236d74: 0x0  nop
    ctx->pc = 0x236d74u;
    // NOP
label_236d78:
    // 0x236d78: 0xdf868458  ld          $a2, -0x7BA8($gp)
    ctx->pc = 0x236d78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x236d7c: 0x125c00  sll         $t3, $s2, 16
    ctx->pc = 0x236d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x236d80: 0x9628001c  lhu         $t0, 0x1C($s1)
    ctx->pc = 0x236d80u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x236d84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x236d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d88: 0x63e3a  dsrl        $a3, $a2, 24
    ctx->pc = 0x236d88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) >> 24);
    // 0x236d8c: 0x30c501ff  andi        $a1, $a2, 0x1FF
    ctx->pc = 0x236d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x236d90: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x236d90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x236d94: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x236d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x236d98: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x236d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x236d9c: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x236d9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x236da0: 0x862a000c  lh          $t2, 0xC($s1)
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236da4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x236da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x236da8: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x236da8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x236dac: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x236dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x236db0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x236db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x236db4: 0x310807ff  andi        $t0, $t0, 0x7FF
    ctx->pc = 0x236db4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x236db8: 0xc0a5436  jal         func_2950D8
    ctx->pc = 0x236DB8u;
    SET_GPR_U32(ctx, 31, 0x236DC0u);
    ctx->pc = 0x236DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DB8u;
    // 0x236dbc: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2950D8u, 0x236DB8u, 0x236DC0u)) {
        return;
    }
    ctx->pc = 0x236DC0u;
label_236dc0:
    // 0x236dc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x236dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dc4: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x236DC4u;
    SET_GPR_U32(ctx, 31, 0x236DCCu);
    ctx->pc = 0x236DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DC4u;
    // 0x236dc8: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x236DC4u, 0x236DCCu)) {
        return;
    }
    ctx->pc = 0x236DCCu;
label_236dcc:
    // 0x236dcc: 0x0  nop
    ctx->pc = 0x236dccu;
    // NOP
label_236dd0:
    // 0x236dd0: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x236DD0u;
    SET_GPR_U32(ctx, 31, 0x236DD8u);
    ctx->pc = 0x236DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DD0u;
    // 0x236dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x236DD0u, 0x236DD8u)) {
        return;
    }
    ctx->pc = 0x236DD8u;
label_236dd8:
    // 0x236dd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236ddc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x236ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x236de0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x236DE0u;
    {
        const bool branch_taken_0x236de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236de0) {
            ctx->pc = 0x236DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236dd0;
        }
    }
    ctx->pc = 0x236DE8u;
label_236de8:
    // 0x236de8: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x236DE8u;
    SET_GPR_U32(ctx, 31, 0x236DF0u);
    ctx->pc = 0x236DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DE8u;
    // 0x236dec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x236DE8u, 0x236DF0u)) {
        return;
    }
    ctx->pc = 0x236DF0u;
label_236df0:
    // 0x236df0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236df4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x236df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x236df8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x236DF8u;
    {
        const bool branch_taken_0x236df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DF8u;
        // 0x236dfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236df8) {
            ctx->pc = 0x236DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236de8;
        }
    }
    ctx->pc = 0x236E00u;
    // 0x236e00: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x236E00u;
    SET_GPR_U32(ctx, 31, 0x236E08u);
    ctx->pc = 0x236E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E00u;
    // 0x236e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x236E00u, 0x236E08u)) {
        return;
    }
    ctx->pc = 0x236E08u;
label_236e08:
    // 0x236e08: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x236e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x236e0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x236e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e10: 0x24734080  addiu       $s3, $v1, 0x4080
    ctx->pc = 0x236e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
    // 0x236e14: 0xc0a5486  jal         func_295218
    ctx->pc = 0x236E14u;
    SET_GPR_U32(ctx, 31, 0x236E1Cu);
    ctx->pc = 0x236E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E14u;
    // 0x236e18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295218u, 0x236E14u, 0x236E1Cu)) {
        return;
    }
    ctx->pc = 0x236E1Cu;
label_236e1c:
    // 0x236e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x236e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236e24: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236E24u;
    {
        const bool branch_taken_0x236e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x236e24) {
            ctx->pc = 0x236E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E24u;
            // 0x236e28: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E44u;
            goto label_236e44;
        }
    }
    ctx->pc = 0x236E2Cu;
    // 0x236e2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e30: 0xc0a5486  jal         func_295218
    ctx->pc = 0x236E30u;
    SET_GPR_U32(ctx, 31, 0x236E38u);
    ctx->pc = 0x236E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E30u;
    // 0x236e34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295218u, 0x236E30u, 0x236E38u)) {
        return;
    }
    ctx->pc = 0x236E38u;
label_236e38:
    // 0x236e38: 0x10500159  beq         $v0, $s0, . + 4 + (0x159 << 2)
    ctx->pc = 0x236E38u;
    {
        const bool branch_taken_0x236e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x236E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E38u;
        // 0x236e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e38) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x236E40u;
    // 0x236e40: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x236e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_236e44:
    // 0x236e44: 0x292a023  subu        $s4, $s4, $s2
    ctx->pc = 0x236e44u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x236e48: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x236e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236e4c: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x236e4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x236e50: 0x292202a  slt         $a0, $s4, $s2
    ctx->pc = 0x236e50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x236e54: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x236e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x236e58: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x236e58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x236e5c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x236e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236e60: 0x284900b  movn        $s2, $s4, $a0
    ctx->pc = 0x236e60u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20));
    // 0x236e64: 0x1680ffc4  bnez        $s4, . + 4 + (-0x3C << 2)
    ctx->pc = 0x236E64u;
    {
        const bool branch_taken_0x236e64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x236E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E64u;
        // 0x236e68: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e64) {
            ctx->pc = 0x236D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236d78;
        }
    }
    ctx->pc = 0x236E6Cu;
    // 0x236e6c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x236E6Cu;
    {
        const bool branch_taken_0x236e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E6Cu;
        // 0x236e70: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e6c) {
            ctx->pc = 0x2370A0u;
            goto label_2370a0;
        }
    }
    ctx->pc = 0x236E74u;
label_236e74:
    // 0x236e74: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x236e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x236e78: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x236e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x236e7c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x236E7Cu;
    {
        const bool branch_taken_0x236e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E7Cu;
        // 0x236e80: 0x223f021  addu        $fp, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e7c) {
            ctx->pc = 0x236D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236d38;
        }
    }
    ctx->pc = 0x236E84u;
    // 0x236e84: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x236e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x236e88: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x236e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x236e8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236E8Cu;
    {
        const bool branch_taken_0x236e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E8Cu;
        // 0x236e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e8c) {
            ctx->pc = 0x236EA8u;
            goto label_236ea8;
        }
    }
    ctx->pc = 0x236E94u;
    // 0x236e94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x236e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x236e98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x236e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x236e9c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x236E9Cu;
    {
        const bool branch_taken_0x236e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E9Cu;
        // 0x236ea0: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e9c) {
            ctx->pc = 0x237104u;
            goto label_237104;
        }
    }
    ctx->pc = 0x236EA4u;
    // 0x236ea4: 0x0  nop
    ctx->pc = 0x236ea4u;
    // NOP
label_236ea8:
    // 0x236ea8: 0x8fc20058  lw          $v0, 0x58($fp)
    ctx->pc = 0x236ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x236eac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236EACu;
    {
        const bool branch_taken_0x236eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EACu;
        // 0x236eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236eac) {
            ctx->pc = 0x236EC8u;
            goto label_236ec8;
        }
    }
    ctx->pc = 0x236EB4u;
    // 0x236eb4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x236eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x236eb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x236eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x236ebc: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x236EBCu;
    {
        const bool branch_taken_0x236ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EBCu;
        // 0x236ec0: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ebc) {
            ctx->pc = 0x237104u;
            goto label_237104;
        }
    }
    ctx->pc = 0x236EC4u;
    // 0x236ec4: 0x0  nop
    ctx->pc = 0x236ec4u;
    // NOP
label_236ec8:
    // 0x236ec8: 0x1640008b  bnez        $s2, . + 4 + (0x8B << 2)
    ctx->pc = 0x236EC8u;
    {
        const bool branch_taken_0x236ec8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x236ec8) {
            ctx->pc = 0x2370F8u;
            goto label_2370f8;
        }
    }
    ctx->pc = 0x236ED0u;
    // 0x236ed0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x236ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x236ed4: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x236ED4u;
    {
        const bool branch_taken_0x236ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236ED4u;
        // 0x236ed8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ed4) {
            ctx->pc = 0x236D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236d38;
        }
    }
    ctx->pc = 0x236EDCu;
    // 0x236edc: 0x14400130  bnez        $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x236EDCu;
    {
        const bool branch_taken_0x236edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EDCu;
        // 0x236ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236edc) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x236EE4u;
    // 0x236ee4: 0xc08b848  jal         func_22E120
    ctx->pc = 0x236EE4u;
    SET_GPR_U32(ctx, 31, 0x236EECu);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x236EE4u, 0x236EECu)) {
        return;
    }
    ctx->pc = 0x236EECu;
label_236eec:
    // 0x236eec: 0xc08b848  jal         func_22E120
    ctx->pc = 0x236EECu;
    SET_GPR_U32(ctx, 31, 0x236EF4u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x236EECu, 0x236EF4u)) {
        return;
    }
    ctx->pc = 0x236EF4u;
label_236ef4:
    // 0x236ef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x236ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ef8: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x236EF8u;
    SET_GPR_U32(ctx, 31, 0x236F00u);
    ctx->pc = 0x236EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EF8u;
    // 0x236efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x236EF8u, 0x236F00u)) {
        return;
    }
    ctx->pc = 0x236F00u;
label_236f00:
    // 0x236f00: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x236f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x236f04: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x236f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x236f08: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236f0c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x236f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x236f10: 0x8e340010  lw          $s4, 0x10($s1)
    ctx->pc = 0x236f10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x236f14: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x236f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x236f18: 0x8636001e  lh          $s6, 0x1E($s1)
    ctx->pc = 0x236f18u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x236f1c: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x236f1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x236f20: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x236f24: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x236f24u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x236f28: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x236F28u;
    {
        const bool branch_taken_0x236f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x236f28) {
            ctx->pc = 0x236F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236F28u;
            // 0x236f2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x236F30u;
            goto label_236f30;
        }
    }
    ctx->pc = 0x236F30u;
label_236f30:
    // 0x236f30: 0x1812  mflo        $v1
    ctx->pc = 0x236f30u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x236f34: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x236f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f38: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x236f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x236f3c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x236F3Cu;
    {
        const bool branch_taken_0x236f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F3Cu;
        // 0x236f40: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f3c) {
            ctx->pc = 0x236F80u;
            goto label_236f80;
        }
    }
    ctx->pc = 0x236F44u;
    // 0x236f44: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x236f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x236f48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236F48u;
    {
        const bool branch_taken_0x236f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236f48) {
            ctx->pc = 0x236F70u;
            goto label_236f70;
        }
    }
    ctx->pc = 0x236F50u;
    // 0x236f50: 0x42023  negu        $a0, $a0
    ctx->pc = 0x236f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x236f54: 0x0  nop
    ctx->pc = 0x236f54u;
    // NOP
label_236f58:
    // 0x236f58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x236f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x236f5c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x236f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x236f60: 0x0  nop
    ctx->pc = 0x236f60u;
    // NOP
    // 0x236f64: 0x0  nop
    ctx->pc = 0x236f64u;
    // NOP
    // 0x236f68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x236F68u;
    {
        const bool branch_taken_0x236f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F68u;
        // 0x236f6c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f68) {
            ctx->pc = 0x236F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236f58;
        }
    }
    ctx->pc = 0x236F70u;
label_236f70:
    // 0x236f70: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236F70u;
    {
        const bool branch_taken_0x236f70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x236f70) {
            ctx->pc = 0x236F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236F70u;
            // 0x236f74: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236F88u;
            goto label_236f88;
        }
    }
    ctx->pc = 0x236F78u;
    // 0x236f78: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x236F78u;
    {
        const bool branch_taken_0x236f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F78u;
        // 0x236f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f78) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x236F80u;
label_236f80:
    // 0x236f80: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x236f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f84: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x236f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_236f88:
    // 0x236f88: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x236f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236f8c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x236f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x236f90: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x236f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x236f94: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x236f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x236f98: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x236f98u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x236f9c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x236f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x236fa0: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x236FA0u;
    SET_GPR_U32(ctx, 31, 0x236FA8u);
    ctx->pc = 0x236FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FA0u;
    // 0x236fa4: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x236FA0u, 0x236FA8u)) {
        return;
    }
    ctx->pc = 0x236FA8u;
label_236fa8:
    // 0x236fa8: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
    ctx->pc = 0x236FA8u;
    {
        const bool branch_taken_0x236fa8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA8u;
        // 0x236fac: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fa8) {
            ctx->pc = 0x23709Cu;
            goto label_23709c;
        }
    }
    ctx->pc = 0x236FB0u;
    // 0x236fb0: 0x24574080  addiu       $s7, $v0, 0x4080
    ctx->pc = 0x236fb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x236fb4: 0x0  nop
    ctx->pc = 0x236fb4u;
    // NOP
label_236fb8:
    // 0x236fb8: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x236fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x236fbc: 0x125c00  sll         $t3, $s2, 16
    ctx->pc = 0x236fbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x236fc0: 0x97c50008  lhu         $a1, 0x8($fp)
    ctx->pc = 0x236fc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x236fc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x236fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fc8: 0x63d02  srl         $a3, $a2, 20
    ctx->pc = 0x236fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
    // 0x236fcc: 0x9628001c  lhu         $t0, 0x1C($s1)
    ctx->pc = 0x236fccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x236fd0: 0x63382  srl         $a2, $a2, 14
    ctx->pc = 0x236fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x236fd4: 0x862a000c  lh          $t2, 0xC($s1)
    ctx->pc = 0x236fd4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x236fd8: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x236fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x236fdc: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x236fdcu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x236fe0: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x236fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x236fe4: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x236fe8: 0x310807ff  andi        $t0, $t0, 0x7FF
    ctx->pc = 0x236fe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x236fec: 0xc0a5436  jal         func_2950D8
    ctx->pc = 0x236FECu;
    SET_GPR_U32(ctx, 31, 0x236FF4u);
    ctx->pc = 0x236FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FECu;
    // 0x236ff0: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2950D8u, 0x236FECu, 0x236FF4u)) {
        return;
    }
    ctx->pc = 0x236FF4u;
label_236ff4:
    // 0x236ff4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x236ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ff8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x236FF8u;
    SET_GPR_U32(ctx, 31, 0x237000u);
    ctx->pc = 0x236FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FF8u;
    // 0x236ffc: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x236FF8u, 0x237000u)) {
        return;
    }
    ctx->pc = 0x237000u;
label_237000:
    // 0x237000: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x237000u;
    SET_GPR_U32(ctx, 31, 0x237008u);
    ctx->pc = 0x237004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237000u;
    // 0x237004: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x237000u, 0x237008u)) {
        return;
    }
    ctx->pc = 0x237008u;
label_237008:
    // 0x237008: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23700c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x23700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x237010: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x237010u;
    {
        const bool branch_taken_0x237010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x237010) {
            ctx->pc = 0x237000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237000;
        }
    }
    ctx->pc = 0x237018u;
label_237018:
    // 0x237018: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x237018u;
    SET_GPR_U32(ctx, 31, 0x237020u);
    ctx->pc = 0x23701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237018u;
    // 0x23701c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x237018u, 0x237020u)) {
        return;
    }
    ctx->pc = 0x237020u;
label_237020:
    // 0x237020: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x237020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237024: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x237024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x237028: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x237028u;
    {
        const bool branch_taken_0x237028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237028u;
        // 0x23702c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237028) {
            ctx->pc = 0x237018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237018;
        }
    }
    ctx->pc = 0x237030u;
    // 0x237030: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x237030u;
    SET_GPR_U32(ctx, 31, 0x237038u);
    ctx->pc = 0x237034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237030u;
    // 0x237034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x237030u, 0x237038u)) {
        return;
    }
    ctx->pc = 0x237038u;
label_237038:
    // 0x237038: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x237038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x23703c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23703cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237040: 0x24734080  addiu       $s3, $v1, 0x4080
    ctx->pc = 0x237040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
    // 0x237044: 0xc0a5486  jal         func_295218
    ctx->pc = 0x237044u;
    SET_GPR_U32(ctx, 31, 0x23704Cu);
    ctx->pc = 0x237048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237044u;
    // 0x237048: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295218u, 0x237044u, 0x23704Cu)) {
        return;
    }
    ctx->pc = 0x23704Cu;
label_23704c:
    // 0x23704c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23704cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237050: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237054: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x237054u;
    {
        const bool branch_taken_0x237054 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x237054) {
            ctx->pc = 0x237058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237054u;
            // 0x237058: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237074u;
            goto label_237074;
        }
    }
    ctx->pc = 0x23705Cu;
    // 0x23705c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237060: 0xc0a5486  jal         func_295218
    ctx->pc = 0x237060u;
    SET_GPR_U32(ctx, 31, 0x237068u);
    ctx->pc = 0x237064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237060u;
    // 0x237064: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295218u, 0x237060u, 0x237068u)) {
        return;
    }
    ctx->pc = 0x237068u;
label_237068:
    // 0x237068: 0x105000cd  beq         $v0, $s0, . + 4 + (0xCD << 2)
    ctx->pc = 0x237068u;
    {
        const bool branch_taken_0x237068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237068u;
        // 0x23706c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237068) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x237070u;
    // 0x237070: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x237070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_237074:
    // 0x237074: 0x292a023  subu        $s4, $s4, $s2
    ctx->pc = 0x237074u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x237078: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x237078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23707c: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x23707cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x237080: 0x292202a  slt         $a0, $s4, $s2
    ctx->pc = 0x237080u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x237084: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x237084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x237088: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x237088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x23708c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x23708cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x237090: 0x284900b  movn        $s2, $s4, $a0
    ctx->pc = 0x237090u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20));
    // 0x237094: 0x1680ffc8  bnez        $s4, . + 4 + (-0x38 << 2)
    ctx->pc = 0x237094u;
    {
        const bool branch_taken_0x237094 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x237098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237094u;
        // 0x237098: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237094) {
            ctx->pc = 0x236FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236fb8;
        }
    }
    ctx->pc = 0x23709Cu;
label_23709c:
    // 0x23709c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2370a0:
    // 0x2370a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2370a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2370a4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2370a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2370a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2370a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2370ac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2370acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2370b0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2370b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2370b4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2370b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x2370b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2370b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2370bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2370bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2370c0: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x2370c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2370c4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2370c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2370c8: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2370C8u;
    {
        const bool branch_taken_0x2370c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C8u;
        // 0x2370cc: 0xa2230022  sb          $v1, 0x22($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370c8) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x2370D0u;
label_2370d0:
    // 0x2370d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2370d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2370d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2370D4u;
    {
        const bool branch_taken_0x2370d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370D4u;
        // 0x2370d8: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370d4) {
            ctx->pc = 0x237104u;
            goto label_237104;
        }
    }
    ctx->pc = 0x2370DCu;
    // 0x2370dc: 0x0  nop
    ctx->pc = 0x2370dcu;
    // NOP
label_2370e0:
    // 0x2370e0: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x2370e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2370e4:
    // 0x2370e4: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x2370e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x2370e8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2370e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2370ec: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2370ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2370f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2370F0u;
    {
        const bool branch_taken_0x2370f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F0u;
        // 0x2370f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370f0) {
            ctx->pc = 0x237120u;
            goto label_237120;
        }
    }
    ctx->pc = 0x2370F8u;
label_2370f8:
    // 0x2370f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2370f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2370fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2370fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x237100: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x237100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_237104:
    // 0x237104: 0xc092848  jal         func_24A120
    ctx->pc = 0x237104u;
    SET_GPR_U32(ctx, 31, 0x23710Cu);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x237104u, 0x23710Cu)) {
        return;
    }
    ctx->pc = 0x23710Cu;
label_23710c:
    // 0x23710c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237110: 0xc09281a  jal         func_24A068
    ctx->pc = 0x237110u;
    SET_GPR_U32(ctx, 31, 0x237118u);
    ctx->pc = 0x237114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237110u;
    // 0x237114: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x237110u, 0x237118u)) {
        return;
    }
    ctx->pc = 0x237118u;
label_237118:
    // 0x237118: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x237118u;
    {
        const bool branch_taken_0x237118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237118u;
        // 0x23711c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237118) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x237120u;
label_237120:
    // 0x237120: 0x32150001  andi        $s5, $s0, 0x1
    ctx->pc = 0x237120u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x237124: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237124u;
    {
        const bool branch_taken_0x237124 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x237124) {
            ctx->pc = 0x237128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237124u;
            // 0x237128: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237138u;
            goto label_237138;
        }
    }
    ctx->pc = 0x23712Cu;
    // 0x23712c: 0xc091bd0  jal         func_246F40
    ctx->pc = 0x23712Cu;
    SET_GPR_U32(ctx, 31, 0x237134u);
    ctx->pc = 0x237130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23712Cu;
    // 0x237130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246F40u, 0x23712Cu, 0x237134u)) {
        return;
    }
    ctx->pc = 0x237134u;
label_237134:
    // 0x237134: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x237134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_237138:
    // 0x237138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23713c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x23713Cu;
    {
        const bool branch_taken_0x23713c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23713c) {
            ctx->pc = 0x237140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23713Cu;
            // 0x237140: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2371ECu;
            goto label_2371ec;
        }
    }
    ctx->pc = 0x237144u;
    // 0x237144: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x237144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x237148: 0x32140008  andi        $s4, $s0, 0x8
    ctx->pc = 0x237148u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x23714c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23714cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237150: 0x32100002  andi        $s0, $s0, 0x2
    ctx->pc = 0x237150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x237154: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x237154u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x237158: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237158) {
            ctx->pc = 0x2371C0u;
            goto label_2371c0;
        }
    }
    ctx->pc = 0x237160u;
    // 0x237160: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x237160u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x237164: 0x8e2c0014  lw          $t4, 0x14($s1)
    ctx->pc = 0x237164u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x237168: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x237168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23716c: 0x356bfff0  ori         $t3, $t3, 0xFFF0
    ctx->pc = 0x23716cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65520);
    // 0x237170: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x237170u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x237174: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x237174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_237178:
    // 0x237178: 0x1862018  mult        $a0, $t4, $a2
    ctx->pc = 0x237178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23717c: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x23717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x237180: 0x4b2824  and         $a1, $v0, $t3
    ctx->pc = 0x237180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x237184: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x237184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x237188: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x237188u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23718c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x23718cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x237190: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x237194: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x237194u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x237198: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x237198u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x23719c: 0x132182b  sltu        $v1, $t1, $s2
    ctx->pc = 0x23719cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2371a0: 0x8a1018  mult        $v0, $a0, $t2
    ctx->pc = 0x2371a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2371a4: 0xa5043  sra         $t2, $t2, 1
    ctx->pc = 0x2371a4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
    // 0x2371a8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2371A8u;
    {
        const bool branch_taken_0x2371a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2371ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371A8u;
        // 0x2371ac: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371a8) {
            ctx->pc = 0x237178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237178;
        }
    }
    ctx->pc = 0x2371B0u;
    // 0x2371b0: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x2371b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x2371b4: 0xae28000c  sw          $t0, 0xC($s1)
    ctx->pc = 0x2371b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 8));
    // 0x2371b8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x2371b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x2371bc: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x2371bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_2371c0:
    // 0x2371c0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2371c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2371c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2371c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2371c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2371c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2371cc: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2371ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2371d0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x2371d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2371d4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2371d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2371d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2371d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2371dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2371dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2371e0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2371e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x2371e4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2371E4u;
    {
        const bool branch_taken_0x2371e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371E4u;
        // 0x2371e8: 0xae240018  sw          $a0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371e4) {
            ctx->pc = 0x2372BCu;
            goto label_2372bc;
        }
    }
    ctx->pc = 0x2371ECu;
label_2371ec:
    // 0x2371ec: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x2371ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2371f0: 0x92650036  lbu         $a1, 0x36($s3)
    ctx->pc = 0x2371f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x2371f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2371f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2371f8: 0x42502  srl         $a0, $a0, 20
    ctx->pc = 0x2371f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 20));
    // 0x2371fc: 0x32140008  andi        $s4, $s0, 0x8
    ctx->pc = 0x2371fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x237200: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x237200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x237204: 0xc08d102  jal         func_234408
    ctx->pc = 0x237204u;
    SET_GPR_U32(ctx, 31, 0x23720Cu);
    ctx->pc = 0x237208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237204u;
    // 0x237208: 0x32100002  andi        $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x234408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x234408u, 0x237204u, 0x23720Cu)) {
        return;
    }
    ctx->pc = 0x23720Cu;
label_23720c:
    // 0x23720c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x237210: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237214: 0x8e2c000c  lw          $t4, 0xC($s1)
    ctx->pc = 0x237214u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x237218: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x237218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x23721c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x23721cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x237220: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x237220u;
    {
        const bool branch_taken_0x237220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x237224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237220u;
        // 0x237224: 0x8e2b0010  lw          $t3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237220) {
            ctx->pc = 0x237298u;
            goto label_237298;
        }
    }
    ctx->pc = 0x237228u;
    // 0x237228: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x237228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23722c: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x23722cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x237230: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x237230u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x237234: 0x8e2d0014  lw          $t5, 0x14($s1)
    ctx->pc = 0x237234u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x237238: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x237238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23723c: 0x0  nop
    ctx->pc = 0x23723cu;
    // NOP
label_237240:
    // 0x237240: 0xea182a  slt         $v1, $a3, $t2
    ctx->pc = 0x237240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x237244: 0x10e282a  slt         $a1, $t0, $t6
    ctx->pc = 0x237244u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x237248: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x237248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23724c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x23724cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237250: 0xe3200a  movz        $a0, $a3, $v1
    ctx->pc = 0x237250u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7));
    // 0x237254: 0x105100a  movz        $v0, $t0, $a1
    ctx->pc = 0x237254u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8));
    // 0x237258: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x237258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23725c: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x23725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x237260: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x237264: 0xc6043  sra         $t4, $t4, 1
    ctx->pc = 0x237264u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
    // 0x237268: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x237268u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x23726c: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x23726cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x237270: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x237270u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x237274: 0x132102b  sltu        $v0, $t1, $s2
    ctx->pc = 0x237274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x237278: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x237278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23727c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x23727cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x237280: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x237280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x237284: 0x8f2024  and         $a0, $a0, $t7
    ctx->pc = 0x237284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x237288: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x237288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23728c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23728Cu;
    {
        const bool branch_taken_0x23728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23728Cu;
        // 0x237290: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23728c) {
            ctx->pc = 0x237240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237240;
        }
    }
    ctx->pc = 0x237294u;
    // 0x237294: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x237294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
label_237298:
    // 0x237298: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x237298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23729c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x23729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2372a0: 0xe3202a  slt         $a0, $a3, $v1
    ctx->pc = 0x2372a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2372a4: 0xae2c000c  sw          $t4, 0xC($s1)
    ctx->pc = 0x2372a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 12));
    // 0x2372a8: 0xe4180a  movz        $v1, $a3, $a0
    ctx->pc = 0x2372a8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7));
    // 0x2372ac: 0xae2b0010  sw          $t3, 0x10($s1)
    ctx->pc = 0x2372acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 11));
    // 0x2372b0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2372b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2372b4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2372b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2372b8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2372b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2372bc:
    // 0x2372bc: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2372BCu;
    {
        const bool branch_taken_0x2372bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2372bc) {
            ctx->pc = 0x2372C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2372BCu;
            // 0x2372c0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237358u;
            goto label_237358;
        }
    }
    ctx->pc = 0x2372C4u;
    // 0x2372c4: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x2372c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x2372c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2372c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2372ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2372d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2372D0u;
    {
        const bool branch_taken_0x2372d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D0u;
        // 0x2372d4: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d0) {
            ctx->pc = 0x237314u;
            goto label_237314;
        }
    }
    ctx->pc = 0x2372D8u;
    // 0x2372d8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2372dc: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x2372dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x2372e0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2372e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2372e4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2372E4u;
    {
        const bool branch_taken_0x2372e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2372E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372E4u;
        // 0x2372e8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372e4) {
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x2372ECu;
    // 0x2372ec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2372f0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x2372f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2372f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2372F4u;
    {
        const bool branch_taken_0x2372f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2372F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372F4u;
        // 0x2372f8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372f4) {
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x2372FCu;
    // 0x2372fc: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2372FCu;
    {
        const bool branch_taken_0x2372fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2372fc) {
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x237304u;
    // 0x237304: 0xc08d83e  jal         func_2360F8
    ctx->pc = 0x237304u;
    SET_GPR_U32(ctx, 31, 0x23730Cu);
    ctx->pc = 0x237308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237304u;
    // 0x237308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2360F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2360F8u, 0x237304u, 0x23730Cu)) {
        return;
    }
    ctx->pc = 0x23730Cu;
label_23730c:
    // 0x23730c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23730Cu;
    {
        const bool branch_taken_0x23730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23730Cu;
        // 0x237310: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23730c) {
            ctx->pc = 0x237358u;
            goto label_237358;
        }
    }
    ctx->pc = 0x237314u;
label_237314:
    // 0x237314: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x237314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_237318:
    // 0x237318: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x237318u;
    {
        const bool branch_taken_0x237318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237318u;
        // 0x23731c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237318) {
            ctx->pc = 0x237354u;
            goto label_237354;
        }
    }
    ctx->pc = 0x237320u;
    // 0x237320: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x237320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x237324: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x237324u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x237328: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x237328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x23732c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23732Cu;
    {
        const bool branch_taken_0x23732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23732c) {
            ctx->pc = 0x237330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23732Cu;
            // 0x237330: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237358u;
            goto label_237358;
        }
    }
    ctx->pc = 0x237334u;
    // 0x237334: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x237338: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x237338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23733c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23733Cu;
    {
        const bool branch_taken_0x23733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23733c) {
            ctx->pc = 0x237340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23733Cu;
            // 0x237340: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237358u;
            goto label_237358;
        }
    }
    ctx->pc = 0x237344u;
    // 0x237344: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237344u;
    {
        const bool branch_taken_0x237344 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x237344) {
            ctx->pc = 0x237348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237344u;
            // 0x237348: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237358u;
            goto label_237358;
        }
    }
    ctx->pc = 0x23734Cu;
    // 0x23734c: 0xc08d8d0  jal         func_236340
    ctx->pc = 0x23734Cu;
    SET_GPR_U32(ctx, 31, 0x237354u);
    ctx->pc = 0x237350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23734Cu;
    // 0x237350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x236340u, 0x23734Cu, 0x237354u)) {
        return;
    }
    ctx->pc = 0x237354u;
label_237354:
    // 0x237354: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x237354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_237358:
    // 0x237358: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x237358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23735c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23735cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x237360: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237360u;
    {
        const bool branch_taken_0x237360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237360u;
        // 0x237364: 0xa2720035  sb          $s2, 0x35($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237360) {
            ctx->pc = 0x237374u;
            goto label_237374;
        }
    }
    ctx->pc = 0x237368u;
    // 0x237368: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x237368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x23736c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x237370: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x237370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_237374:
    // 0x237374: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x237374u;
    {
        const bool branch_taken_0x237374 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x237374) {
            ctx->pc = 0x237388u;
            goto label_237388;
        }
    }
    ctx->pc = 0x23737Cu;
    // 0x23737c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x23737cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x237380: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x237380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x237384: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x237384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_237388:
    // 0x237388: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x237388u;
    {
        const bool branch_taken_0x237388 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237388u;
        // 0x23738c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237388) {
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x237390u;
    // 0x237390: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x237390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x237394: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x237394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x237398: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x237398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x23739c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2373a0:
    // 0x2373a0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2373a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2373a4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2373a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2373a8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2373a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2373ac: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2373acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2373b0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2373b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2373b4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2373b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2373b8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2373b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2373bc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2373bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2373c0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2373c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2373c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2373c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2373c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2373C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2373CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373C8u;
        // 0x2373cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2373C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2373D0u;
}

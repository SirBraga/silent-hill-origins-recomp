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

// Function: sub_002DFB18
// Address: 0x2dfb18 - 0x2dfd58
void sub_002DFB18_0x2dfb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFB18_0x2dfb18");
#endif

    switch (ctx->pc) {
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfb6cu: goto label_2dfb6c;
        case 0x2dfbc4u: goto label_2dfbc4;
        case 0x2dfc14u: goto label_2dfc14;
        case 0x2dfc24u: goto label_2dfc24;
        case 0x2dfc50u: goto label_2dfc50;
        case 0x2dfc74u: goto label_2dfc74;
        case 0x2dfcb0u: goto label_2dfcb0;
        case 0x2dfcc8u: goto label_2dfcc8;
        case 0x2dfcdcu: goto label_2dfcdc;
        case 0x2dfd24u: goto label_2dfd24;
        default: break;
    }

    ctx->pc = 0x2dfb18u;

    // 0x2dfb18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2dfb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2dfb1c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2dfb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2dfb20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dfb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb24: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2dfb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2dfb28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dfb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dfb2c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2dfb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2dfb30: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2dfb30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb34: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2dfb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2dfb38: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2dfb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2dfb3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2dfb3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb40: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2dfb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2dfb44: 0x2484f3d0  addiu       $a0, $a0, -0xC30
    ctx->pc = 0x2dfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964176));
    // 0x2dfb48: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2dfb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2dfb4c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2dfb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2dfb50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dfb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2dfb54: 0xc0b6cd2  jal         func_2DB348
    ctx->pc = 0x2DFB54u;
    SET_GPR_U32(ctx, 31, 0x2DFB5Cu);
    ctx->pc = 0x2DFB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB54u;
    // 0x2dfb58: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB348u, 0x2DFB54u, 0x2DFB5Cu)) {
        return;
    }
    ctx->pc = 0x2DFB5Cu;
label_2dfb5c:
    // 0x2dfb5c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2dfb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2dfb60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb64: 0xc0b6cd2  jal         func_2DB348
    ctx->pc = 0x2DFB64u;
    SET_GPR_U32(ctx, 31, 0x2DFB6Cu);
    ctx->pc = 0x2DFB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB64u;
    // 0x2dfb68: 0x2484f220  addiu       $a0, $a0, -0xDE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB348u, 0x2DFB64u, 0x2DFB6Cu)) {
        return;
    }
    ctx->pc = 0x2DFB6Cu;
label_2dfb6c:
    // 0x2dfb6c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dfb6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb70: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x2dfb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dfb74: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2dfb78: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x2dfb78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2dfb7c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2dfb7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2dfb80: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x2dfb80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dfb84: 0x96a20016  lhu         $v0, 0x16($s5)
    ctx->pc = 0x2dfb84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x2dfb88: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2dfb88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2dfb8c: 0x96a60014  lhu         $a2, 0x14($s5)
    ctx->pc = 0x2dfb8cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2dfb90: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x2dfb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x2dfb94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dfb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dfb98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2dfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2dfb9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2dfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dfba0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2dfba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2dfba4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2dfba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2dfba8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2dfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dfbac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2dfbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dfbb0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2dfbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2dfbb4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2dfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2dfbb8: 0x34a5080d  ori         $a1, $a1, 0x80D
    ctx->pc = 0x2dfbb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2061);
    // 0x2dfbbc: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2DFBBCu;
    SET_GPR_U32(ctx, 31, 0x2DFBC4u);
    ctx->pc = 0x2DFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBBCu;
    // 0x2dfbc0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DFBBCu, 0x2DFBC4u)) {
        return;
    }
    ctx->pc = 0x2DFBC4u;
label_2dfbc4:
    // 0x2dfbc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dfbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbc8: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2DFBC8u;
    {
        const bool branch_taken_0x2dfbc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBC8u;
        // 0x2dfbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfbc8) {
            ctx->pc = 0x2DFD28u;
            goto label_2dfd28;
        }
    }
    ctx->pc = 0x2DFBD0u;
    // 0x2dfbd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfbd4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2dfbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2dfbd8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2dfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2dfbdc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2dfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2dfbe0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dfbe4: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x2dfbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2dfbe8: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x2dfbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x2dfbec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2dfbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dfbf0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2dfbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dfbf4: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2dfbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2dfbf8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2dfbf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbfc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2dfbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2dfc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc04: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2dfc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2dfc08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc0c: 0xc0b6664  jal         func_2D9990
    ctx->pc = 0x2DFC0Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC14u);
    ctx->pc = 0x2DFC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC0Cu;
    // 0x2dfc10: 0xafb20024  sw          $s2, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9990u, 0x2DFC0Cu, 0x2DFC14u)) {
        return;
    }
    ctx->pc = 0x2DFC14u;
label_2dfc14:
    // 0x2dfc14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DFC14u;
    {
        const bool branch_taken_0x2dfc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC14u;
        // 0x2dfc18: 0xaf828c10  sw          $v0, -0x73F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc14) {
            ctx->pc = 0x2DFC30u;
            goto label_2dfc30;
        }
    }
    ctx->pc = 0x2DFC1Cu;
    // 0x2dfc1c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DFC1Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC24u);
    ctx->pc = 0x2DFC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC1Cu;
    // 0x2dfc20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DFC1Cu, 0x2DFC24u)) {
        return;
    }
    ctx->pc = 0x2DFC24u;
label_2dfc24:
    // 0x2dfc24: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2DFC24u;
    {
        const bool branch_taken_0x2dfc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC24u;
        // 0x2dfc28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc24) {
            ctx->pc = 0x2DFD28u;
            goto label_2dfd28;
        }
    }
    ctx->pc = 0x2DFC2Cu;
    // 0x2dfc2c: 0x0  nop
    ctx->pc = 0x2dfc2cu;
    // NOP
label_2dfc30:
    // 0x2dfc30: 0x8fb20030  lw          $s2, 0x30($sp)
    ctx->pc = 0x2dfc30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfc34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dfc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc38: 0xaf929038  sw          $s2, -0x6FC8($gp)
    ctx->pc = 0x2dfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938680), GPR_U32(ctx, 18));
    // 0x2dfc3c: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DFC3Cu;
    {
        const bool branch_taken_0x2dfc3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC3Cu;
        // 0x2dfc40: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc3c) {
            ctx->pc = 0x2DFCF8u;
            goto label_2dfcf8;
        }
    }
    ctx->pc = 0x2DFC44u;
    // 0x2dfc44: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2dfc44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2dfc48: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2dfc48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2dfc4c: 0x0  nop
    ctx->pc = 0x2dfc4cu;
    // NOP
label_2dfc50:
    // 0x2dfc50: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x2dfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2dfc54: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2dfc54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2dfc58: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2dfc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2dfc5c: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x2dfc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2dfc60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dfc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc64: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2dfc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dfc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dfc6c: 0xc0b6664  jal         func_2D9990
    ctx->pc = 0x2DFC6Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC74u);
    ctx->pc = 0x2DFC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC6Cu;
    // 0x2dfc70: 0xafb20024  sw          $s2, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9990u, 0x2DFC6Cu, 0x2DFC74u)) {
        return;
    }
    ctx->pc = 0x2DFC74u;
label_2dfc74:
    // 0x2dfc74: 0x8f839038  lw          $v1, -0x6FC8($gp)
    ctx->pc = 0x2dfc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
    // 0x2dfc78: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2dfc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2dfc7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2dfc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2dfc80: 0x8f829038  lw          $v0, -0x6FC8($gp)
    ctx->pc = 0x2dfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
    // 0x2dfc84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dfc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dfc88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dfc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfc8c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DFC8Cu;
    {
        const bool branch_taken_0x2dfc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc8c) {
            ctx->pc = 0x2DFC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFC8Cu;
            // 0x2dfc90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFCECu;
            goto label_2dfcec;
        }
    }
    ctx->pc = 0x2DFC94u;
    // 0x2dfc94: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2dfc94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2dfc98: 0x1233000e  beq         $s1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x2DFC98u;
    {
        const bool branch_taken_0x2dfc98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2DFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC98u;
        // 0x2dfc9c: 0x8f848c10  lw          $a0, -0x73F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc98) {
            ctx->pc = 0x2DFCD4u;
            goto label_2dfcd4;
        }
    }
    ctx->pc = 0x2DFCA0u;
    // 0x2dfca0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2dfca0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2dfca4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2dfca4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2dfca8: 0x8f839038  lw          $v1, -0x6FC8($gp)
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
    // 0x2dfcac: 0x0  nop
    ctx->pc = 0x2dfcacu;
    // NOP
label_2dfcb0:
    // 0x2dfcb0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2dfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2dfcb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcb8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2dfcb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2dfcbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dfcc0: 0xc0b66b4  jal         func_2D9AD0
    ctx->pc = 0x2DFCC0u;
    SET_GPR_U32(ctx, 31, 0x2DFCC8u);
    ctx->pc = 0x2DFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCC0u;
    // 0x2dfcc4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9AD0u, 0x2DFCC0u, 0x2DFCC8u)) {
        return;
    }
    ctx->pc = 0x2DFCC8u;
label_2dfcc8:
    // 0x2dfcc8: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DFCC8u;
    {
        const bool branch_taken_0x2dfcc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2DFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCC8u;
        // 0x2dfccc: 0x8f839038  lw          $v1, -0x6FC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfcc8) {
            ctx->pc = 0x2DFCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dfcb0;
        }
    }
    ctx->pc = 0x2DFCD0u;
    // 0x2dfcd0: 0x8f848c10  lw          $a0, -0x73F0($gp)
    ctx->pc = 0x2dfcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
label_2dfcd4:
    // 0x2dfcd4: 0xc0b66b4  jal         func_2D9AD0
    ctx->pc = 0x2DFCD4u;
    SET_GPR_U32(ctx, 31, 0x2DFCDCu);
    ctx->pc = 0x2DFCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCD4u;
    // 0x2dfcd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9AD0u, 0x2DFCD4u, 0x2DFCDCu)) {
        return;
    }
    ctx->pc = 0x2DFCDCu;
label_2dfcdc:
    // 0x2dfcdc: 0xaf808c14  sw          $zero, -0x73EC($gp)
    ctx->pc = 0x2dfcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 0));
    // 0x2dfce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dfce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfce4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DFCE4u;
    {
        const bool branch_taken_0x2dfce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCE4u;
        // 0x2dfce8: 0xaf808c10  sw          $zero, -0x73F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfce4) {
            ctx->pc = 0x2DFD28u;
            goto label_2dfd28;
        }
    }
    ctx->pc = 0x2DFCECu;
label_2dfcec:
    // 0x2dfcec: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x2dfcecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2dfcf0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2DFCF0u;
    {
        const bool branch_taken_0x2dfcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCF0u;
        // 0x2dfcf4: 0x8fb20030  lw          $s2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfcf0) {
            ctx->pc = 0x2DFC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dfc50;
        }
    }
    ctx->pc = 0x2DFCF8u;
label_2dfcf8:
    // 0x2dfcf8: 0x8f839038  lw          $v1, -0x6FC8($gp)
    ctx->pc = 0x2dfcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
    // 0x2dfcfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfd00: 0x8f848c10  lw          $a0, -0x73F0($gp)
    ctx->pc = 0x2dfd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x2dfd04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2dfd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dfd08: 0xaf828c0c  sw          $v0, -0x73F4($gp)
    ctx->pc = 0x2dfd08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 2));
    // 0x2dfd0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dfd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfd10: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x2dfd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x2dfd14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2dfd14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd18: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2dfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2dfd1c: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2DFD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD24u);
    ctx->pc = 0x2DFD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD1Cu;
    // 0x2dfd20: 0xaf948c14  sw          $s4, -0x73EC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2DFD1Cu, 0x2DFD24u)) {
        return;
    }
    ctx->pc = 0x2DFD24u;
label_2dfd24:
    // 0x2dfd24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfd28:
    // 0x2dfd28: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2dfd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dfd2c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2dfd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dfd30: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2dfd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dfd34: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2dfd34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dfd38: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2dfd38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfd3c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2dfd3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfd40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dfd40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfd44: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2dfd44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfd48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dfd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD4Cu;
        // 0x2dfd50: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFD54u;
    // 0x2dfd54: 0x0  nop
    ctx->pc = 0x2dfd54u;
    // NOP
    ctx->pc = 0x2dfd58u;
}

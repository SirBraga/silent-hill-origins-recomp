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

// Function: sub_001AAB18
// Address: 0x1aab18 - 0x1aace8
void sub_001AAB18_0x1aab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAB18_0x1aab18");
#endif

    switch (ctx->pc) {
        case 0x1aab18u: goto label_1aab18;
        case 0x1aab1cu: goto label_1aab1c;
        case 0x1aab20u: goto label_1aab20;
        case 0x1aab24u: goto label_1aab24;
        case 0x1aab28u: goto label_1aab28;
        case 0x1aab2cu: goto label_1aab2c;
        case 0x1aab30u: goto label_1aab30;
        case 0x1aab34u: goto label_1aab34;
        case 0x1aab38u: goto label_1aab38;
        case 0x1aab3cu: goto label_1aab3c;
        case 0x1aab40u: goto label_1aab40;
        case 0x1aab44u: goto label_1aab44;
        case 0x1aab48u: goto label_1aab48;
        case 0x1aab4cu: goto label_1aab4c;
        case 0x1aab50u: goto label_1aab50;
        case 0x1aab54u: goto label_1aab54;
        case 0x1aab58u: goto label_1aab58;
        case 0x1aab5cu: goto label_1aab5c;
        case 0x1aab60u: goto label_1aab60;
        case 0x1aab64u: goto label_1aab64;
        case 0x1aab68u: goto label_1aab68;
        case 0x1aab6cu: goto label_1aab6c;
        case 0x1aab70u: goto label_1aab70;
        case 0x1aab74u: goto label_1aab74;
        case 0x1aab78u: goto label_1aab78;
        case 0x1aab7cu: goto label_1aab7c;
        case 0x1aab80u: goto label_1aab80;
        case 0x1aab84u: goto label_1aab84;
        case 0x1aab88u: goto label_1aab88;
        case 0x1aab8cu: goto label_1aab8c;
        case 0x1aab90u: goto label_1aab90;
        case 0x1aab94u: goto label_1aab94;
        case 0x1aab98u: goto label_1aab98;
        case 0x1aab9cu: goto label_1aab9c;
        case 0x1aaba0u: goto label_1aaba0;
        case 0x1aaba4u: goto label_1aaba4;
        case 0x1aaba8u: goto label_1aaba8;
        case 0x1aabacu: goto label_1aabac;
        case 0x1aabb0u: goto label_1aabb0;
        case 0x1aabb4u: goto label_1aabb4;
        case 0x1aabb8u: goto label_1aabb8;
        case 0x1aabbcu: goto label_1aabbc;
        case 0x1aabc0u: goto label_1aabc0;
        case 0x1aabc4u: goto label_1aabc4;
        case 0x1aabc8u: goto label_1aabc8;
        case 0x1aabccu: goto label_1aabcc;
        case 0x1aabd0u: goto label_1aabd0;
        case 0x1aabd4u: goto label_1aabd4;
        case 0x1aabd8u: goto label_1aabd8;
        case 0x1aabdcu: goto label_1aabdc;
        case 0x1aabe0u: goto label_1aabe0;
        case 0x1aabe4u: goto label_1aabe4;
        case 0x1aabe8u: goto label_1aabe8;
        case 0x1aabecu: goto label_1aabec;
        case 0x1aabf0u: goto label_1aabf0;
        case 0x1aabf4u: goto label_1aabf4;
        case 0x1aabf8u: goto label_1aabf8;
        case 0x1aabfcu: goto label_1aabfc;
        case 0x1aac00u: goto label_1aac00;
        case 0x1aac04u: goto label_1aac04;
        case 0x1aac08u: goto label_1aac08;
        case 0x1aac0cu: goto label_1aac0c;
        case 0x1aac10u: goto label_1aac10;
        case 0x1aac14u: goto label_1aac14;
        case 0x1aac18u: goto label_1aac18;
        case 0x1aac1cu: goto label_1aac1c;
        case 0x1aac20u: goto label_1aac20;
        case 0x1aac24u: goto label_1aac24;
        case 0x1aac28u: goto label_1aac28;
        case 0x1aac2cu: goto label_1aac2c;
        case 0x1aac30u: goto label_1aac30;
        case 0x1aac34u: goto label_1aac34;
        case 0x1aac38u: goto label_1aac38;
        case 0x1aac3cu: goto label_1aac3c;
        case 0x1aac40u: goto label_1aac40;
        case 0x1aac44u: goto label_1aac44;
        case 0x1aac48u: goto label_1aac48;
        case 0x1aac4cu: goto label_1aac4c;
        case 0x1aac50u: goto label_1aac50;
        case 0x1aac54u: goto label_1aac54;
        case 0x1aac58u: goto label_1aac58;
        case 0x1aac5cu: goto label_1aac5c;
        case 0x1aac60u: goto label_1aac60;
        case 0x1aac64u: goto label_1aac64;
        case 0x1aac68u: goto label_1aac68;
        case 0x1aac6cu: goto label_1aac6c;
        case 0x1aac70u: goto label_1aac70;
        case 0x1aac74u: goto label_1aac74;
        case 0x1aac78u: goto label_1aac78;
        case 0x1aac7cu: goto label_1aac7c;
        case 0x1aac80u: goto label_1aac80;
        case 0x1aac84u: goto label_1aac84;
        case 0x1aac88u: goto label_1aac88;
        case 0x1aac8cu: goto label_1aac8c;
        case 0x1aac90u: goto label_1aac90;
        case 0x1aac94u: goto label_1aac94;
        case 0x1aac98u: goto label_1aac98;
        case 0x1aac9cu: goto label_1aac9c;
        case 0x1aaca0u: goto label_1aaca0;
        case 0x1aaca4u: goto label_1aaca4;
        case 0x1aaca8u: goto label_1aaca8;
        case 0x1aacacu: goto label_1aacac;
        case 0x1aacb0u: goto label_1aacb0;
        case 0x1aacb4u: goto label_1aacb4;
        case 0x1aacb8u: goto label_1aacb8;
        case 0x1aacbcu: goto label_1aacbc;
        case 0x1aacc0u: goto label_1aacc0;
        case 0x1aacc4u: goto label_1aacc4;
        case 0x1aacc8u: goto label_1aacc8;
        case 0x1aacccu: goto label_1aaccc;
        case 0x1aacd0u: goto label_1aacd0;
        case 0x1aacd4u: goto label_1aacd4;
        case 0x1aacd8u: goto label_1aacd8;
        case 0x1aacdcu: goto label_1aacdc;
        case 0x1aace0u: goto label_1aace0;
        case 0x1aace4u: goto label_1aace4;
        default: break;
    }

    ctx->pc = 0x1aab18u;

label_1aab18:
    // 0x1aab18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1aab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1aab1c:
    // 0x1aab1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1aab1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aab20:
    // 0x1aab20: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1aab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1aab24:
    // 0x1aab24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aab24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aab28:
    // 0x1aab28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1aab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1aab2c:
    // 0x1aab2c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1aab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1aab30:
    // 0x1aab30: 0x26220170  addiu       $v0, $s1, 0x170
    ctx->pc = 0x1aab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_1aab34:
    // 0x1aab34: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1aab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1aab38:
    // 0x1aab38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1aab38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aab3c:
    // 0x1aab3c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1aab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1aab40:
    // 0x1aab40: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1aab40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aab44:
    // 0x1aab44: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1aab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1aab48:
    // 0x1aab48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1aab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1aab4c:
    // 0x1aab4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1aab50:
    // 0x1aab50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1aab50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1aab54:
    // 0x1aab54: 0xac401078  sw          $zero, 0x1078($v0)
    ctx->pc = 0x1aab54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4216), GPR_U32(ctx, 0));
label_1aab58:
    // 0x1aab58: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x1aab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1aab5c:
    // 0x1aab5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1aab60:
    if (ctx->pc == 0x1AAB60u) {
        ctx->pc = 0x1AAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB5Cu;
        // 0x1aab60: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB64u;
        goto label_1aab64;
    }
    ctx->pc = 0x1AAB5Cu;
    {
        const bool branch_taken_0x1aab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB5Cu;
        // 0x1aab60: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab5c) {
            ctx->pc = 0x1AAB7Cu;
            goto label_1aab7c;
        }
    }
    ctx->pc = 0x1AAB64u;
label_1aab64:
    // 0x1aab64: 0xc06a928  jal         func_1AA4A0
label_1aab68:
    if (ctx->pc == 0x1AAB68u) {
        ctx->pc = 0x1AAB6Cu;
        goto label_1aab6c;
    }
    ctx->pc = 0x1AAB64u;
    SET_GPR_U32(ctx, 31, 0x1AAB6Cu);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AAB64u, 0x1AAB6Cu)) {
        return;
    }
    ctx->pc = 0x1AAB6Cu;
label_1aab6c:
    // 0x1aab6c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x1aab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1aab70:
    // 0x1aab70: 0xc06a9a4  jal         func_1AA690
label_1aab74:
    if (ctx->pc == 0x1AAB74u) {
        ctx->pc = 0x1AAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB70u;
        // 0x1aab74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB78u;
        goto label_1aab78;
    }
    ctx->pc = 0x1AAB70u;
    SET_GPR_U32(ctx, 31, 0x1AAB78u);
    ctx->pc = 0x1AAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB70u;
    // 0x1aab74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA690u, 0x1AAB70u, 0x1AAB78u)) {
        return;
    }
    ctx->pc = 0x1AAB78u;
label_1aab78:
    // 0x1aab78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aab7c:
    // 0x1aab7c: 0x8e221200  lw          $v0, 0x1200($s1)
    ctx->pc = 0x1aab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4608)));
label_1aab80:
    // 0x1aab80: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1aab84:
    if (ctx->pc == 0x1AAB84u) {
        ctx->pc = 0x1AAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB80u;
        // 0x1aab84: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB88u;
        goto label_1aab88;
    }
    ctx->pc = 0x1AAB80u;
    {
        const bool branch_taken_0x1aab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aab80) {
            ctx->pc = 0x1AAB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAB80u;
            // 0x1aab84: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AABD0u;
            goto label_1aabd0;
        }
    }
    ctx->pc = 0x1AAB88u;
label_1aab88:
    // 0x1aab88: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1aab8c:
    if (ctx->pc == 0x1AAB8Cu) {
        ctx->pc = 0x1AAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB88u;
        // 0x1aab8c: 0x263200d0  addiu       $s2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB90u;
        goto label_1aab90;
    }
    ctx->pc = 0x1AAB88u;
    {
        const bool branch_taken_0x1aab88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB88u;
        // 0x1aab8c: 0x263200d0  addiu       $s2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab88) {
            ctx->pc = 0x1AABB8u;
            goto label_1aabb8;
        }
    }
    ctx->pc = 0x1AAB90u;
label_1aab90:
    // 0x1aab90: 0xc06a4b4  jal         func_1A92D0
label_1aab94:
    if (ctx->pc == 0x1AAB94u) {
        ctx->pc = 0x1AAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB90u;
        // 0x1aab94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB98u;
        goto label_1aab98;
    }
    ctx->pc = 0x1AAB90u;
    SET_GPR_U32(ctx, 31, 0x1AAB98u);
    ctx->pc = 0x1AAB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB90u;
    // 0x1aab94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A92D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A92D0u, 0x1AAB90u, 0x1AAB98u)) {
        return;
    }
    ctx->pc = 0x1AAB98u;
label_1aab98:
    // 0x1aab98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aab98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aab9c:
    // 0x1aab9c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1aaba0:
    if (ctx->pc == 0x1AABA0u) {
        ctx->pc = 0x1AABA4u;
        goto label_1aaba4;
    }
    ctx->pc = 0x1AAB9Cu;
    {
        const bool branch_taken_0x1aab9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aab9c) {
            ctx->pc = 0x1AABB8u;
            goto label_1aabb8;
        }
    }
    ctx->pc = 0x1AABA4u;
label_1aaba4:
    // 0x1aaba4: 0xc06a928  jal         func_1AA4A0
label_1aaba8:
    if (ctx->pc == 0x1AABA8u) {
        ctx->pc = 0x1AABACu;
        goto label_1aabac;
    }
    ctx->pc = 0x1AABA4u;
    SET_GPR_U32(ctx, 31, 0x1AABACu);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AABA4u, 0x1AABACu)) {
        return;
    }
    ctx->pc = 0x1AABACu;
label_1aabac:
    // 0x1aabac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aabacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aabb0:
    // 0x1aabb0: 0xc06a9a4  jal         func_1AA690
label_1aabb4:
    if (ctx->pc == 0x1AABB4u) {
        ctx->pc = 0x1AABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABB0u;
        // 0x1aabb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AABB8u;
        goto label_1aabb8;
    }
    ctx->pc = 0x1AABB0u;
    SET_GPR_U32(ctx, 31, 0x1AABB8u);
    ctx->pc = 0x1AABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AABB0u;
    // 0x1aabb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA690u, 0x1AABB0u, 0x1AABB8u)) {
        return;
    }
    ctx->pc = 0x1AABB8u;
label_1aabb8:
    // 0x1aabb8: 0xc06a7c4  jal         func_1A9F10
label_1aabbc:
    if (ctx->pc == 0x1AABBCu) {
        ctx->pc = 0x1AABC0u;
        goto label_1aabc0;
    }
    ctx->pc = 0x1AABB8u;
    SET_GPR_U32(ctx, 31, 0x1AABC0u);
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1AABB8u, 0x1AABC0u)) {
        return;
    }
    ctx->pc = 0x1AABC0u;
label_1aabc0:
    // 0x1aabc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aabc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aabc4:
    // 0x1aabc4: 0xc06a858  jal         func_1AA160
label_1aabc8:
    if (ctx->pc == 0x1AABC8u) {
        ctx->pc = 0x1AABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABC4u;
        // 0x1aabc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AABCCu;
        goto label_1aabcc;
    }
    ctx->pc = 0x1AABC4u;
    SET_GPR_U32(ctx, 31, 0x1AABCCu);
    ctx->pc = 0x1AABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AABC4u;
    // 0x1aabc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA160u, 0x1AABC4u, 0x1AABCCu)) {
        return;
    }
    ctx->pc = 0x1AABCCu;
label_1aabcc:
    // 0x1aabcc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1aabccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_1aabd0:
    // 0x1aabd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aabd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aabd4:
    // 0x1aabd4: 0xae201200  sw          $zero, 0x1200($s1)
    ctx->pc = 0x1aabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4608), GPR_U32(ctx, 0));
label_1aabd8:
    // 0x1aabd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1aabd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aabdc:
    // 0x1aabdc: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x1aabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
label_1aabe0:
    // 0x1aabe0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1aabe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aabe4:
    // 0x1aabe4: 0xae201204  sw          $zero, 0x1204($s1)
    ctx->pc = 0x1aabe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4612), GPR_U32(ctx, 0));
label_1aabe8:
    // 0x1aabe8: 0xc06ac26  jal         func_1AB098
label_1aabec:
    if (ctx->pc == 0x1AABECu) {
        ctx->pc = 0x1AABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABE8u;
        // 0x1aabec: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AABF0u;
        goto label_1aabf0;
    }
    ctx->pc = 0x1AABE8u;
    SET_GPR_U32(ctx, 31, 0x1AABF0u);
    ctx->pc = 0x1AABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AABE8u;
    // 0x1aabec: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB098u, 0x1AABE8u, 0x1AABF0u)) {
        return;
    }
    ctx->pc = 0x1AABF0u;
label_1aabf0:
    // 0x1aabf0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1aabf4:
    if (ctx->pc == 0x1AABF4u) {
        ctx->pc = 0x1AABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABF0u;
        // 0x1aabf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AABF8u;
        goto label_1aabf8;
    }
    ctx->pc = 0x1AABF0u;
    {
        const bool branch_taken_0x1aabf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABF0u;
        // 0x1aabf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabf0) {
            ctx->pc = 0x1AAC30u;
            goto label_1aac30;
        }
    }
    ctx->pc = 0x1AABF8u;
label_1aabf8:
    // 0x1aabf8: 0x97a80000  lhu         $t0, 0x0($sp)
    ctx->pc = 0x1aabf8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_1aabfc:
    // 0x1aabfc: 0x94a60044  lhu         $a2, 0x44($a1)
    ctx->pc = 0x1aabfcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
label_1aac00:
    // 0x1aac00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aac00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aac04:
    // 0x1aac04: 0xc06ac5e  jal         func_1AB178
label_1aac08:
    if (ctx->pc == 0x1AAC08u) {
        ctx->pc = 0x1AAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC04u;
        // 0x1aac08: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC0Cu;
        goto label_1aac0c;
    }
    ctx->pc = 0x1AAC04u;
    SET_GPR_U32(ctx, 31, 0x1AAC0Cu);
    ctx->pc = 0x1AAC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC04u;
    // 0x1aac08: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB178u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB178u, 0x1AAC04u, 0x1AAC0Cu)) {
        return;
    }
    ctx->pc = 0x1AAC0Cu;
label_1aac0c:
    // 0x1aac0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aac10:
    // 0x1aac10: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x1aac10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1aac14:
    // 0x1aac14: 0xae201204  sw          $zero, 0x1204($s1)
    ctx->pc = 0x1aac14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4612), GPR_U32(ctx, 0));
label_1aac18:
    // 0x1aac18: 0x26240170  addiu       $a0, $s1, 0x170
    ctx->pc = 0x1aac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_1aac1c:
    // 0x1aac1c: 0xae201200  sw          $zero, 0x1200($s1)
    ctx->pc = 0x1aac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4608), GPR_U32(ctx, 0));
label_1aac20:
    // 0x1aac20: 0xc06b018  jal         func_1AC060
label_1aac24:
    if (ctx->pc == 0x1AAC24u) {
        ctx->pc = 0x1AAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC20u;
        // 0x1aac24: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC28u;
        goto label_1aac28;
    }
    ctx->pc = 0x1AAC20u;
    SET_GPR_U32(ctx, 31, 0x1AAC28u);
    ctx->pc = 0x1AAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC20u;
    // 0x1aac24: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AC060u, 0x1AAC20u, 0x1AAC28u)) {
        return;
    }
    ctx->pc = 0x1AAC28u;
label_1aac28:
    // 0x1aac28: 0x10000026  b           . + 4 + (0x26 << 2)
label_1aac2c:
    if (ctx->pc == 0x1AAC2Cu) {
        ctx->pc = 0x1AAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC28u;
        // 0x1aac2c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC30u;
        goto label_1aac30;
    }
    ctx->pc = 0x1AAC28u;
    {
        const bool branch_taken_0x1aac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC28u;
        // 0x1aac2c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac28) {
            ctx->pc = 0x1AACC4u;
            goto label_1aacc4;
        }
    }
    ctx->pc = 0x1AAC30u;
label_1aac30:
    // 0x1aac30: 0xc06a7c4  jal         func_1A9F10
label_1aac34:
    if (ctx->pc == 0x1AAC34u) {
        ctx->pc = 0x1AAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC30u;
        // 0x1aac34: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC38u;
        goto label_1aac38;
    }
    ctx->pc = 0x1AAC30u;
    SET_GPR_U32(ctx, 31, 0x1AAC38u);
    ctx->pc = 0x1AAC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC30u;
    // 0x1aac34: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1AAC30u, 0x1AAC38u)) {
        return;
    }
    ctx->pc = 0x1AAC38u;
label_1aac38:
    // 0x1aac38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aac3c:
    // 0x1aac3c: 0xc06a84a  jal         func_1AA128
label_1aac40:
    if (ctx->pc == 0x1AAC40u) {
        ctx->pc = 0x1AAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC3Cu;
        // 0x1aac40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC44u;
        goto label_1aac44;
    }
    ctx->pc = 0x1AAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC44u);
    ctx->pc = 0x1AAC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC3Cu;
    // 0x1aac40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA128u, 0x1AAC3Cu, 0x1AAC44u)) {
        return;
    }
    ctx->pc = 0x1AAC44u;
label_1aac44:
    // 0x1aac44: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1aac44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aac48:
    // 0x1aac48: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1aac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1aac4c:
    // 0x1aac4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aac50:
    // 0x1aac50: 0x245381b0  addiu       $s3, $v0, -0x7E50
    ctx->pc = 0x1aac50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
label_1aac54:
    // 0x1aac54: 0xc069c0a  jal         func_1A7028
label_1aac58:
    if (ctx->pc == 0x1AAC58u) {
        ctx->pc = 0x1AAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC54u;
        // 0x1aac58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC5Cu;
        goto label_1aac5c;
    }
    ctx->pc = 0x1AAC54u;
    SET_GPR_U32(ctx, 31, 0x1AAC5Cu);
    ctx->pc = 0x1AAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC54u;
    // 0x1aac58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7028u, 0x1AAC54u, 0x1AAC5Cu)) {
        return;
    }
    ctx->pc = 0x1AAC5Cu;
label_1aac5c:
    // 0x1aac5c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1aac5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1aac60:
    // 0x1aac60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aac60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aac64:
    // 0x1aac64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aac68:
    // 0x1aac68: 0xa6020080  sh          $v0, 0x80($s0)
    ctx->pc = 0x1aac68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
label_1aac6c:
    // 0x1aac6c: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_1aac70:
    if (ctx->pc == 0x1AAC70u) {
        ctx->pc = 0x1AAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC6Cu;
        // 0x1aac70: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC74u;
        goto label_1aac74;
    }
    ctx->pc = 0x1AAC6Cu;
    {
        const bool branch_taken_0x1aac6c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC6Cu;
        // 0x1aac70: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac6c) {
            ctx->pc = 0x1AAC7Cu;
            goto label_1aac7c;
        }
    }
    ctx->pc = 0x1AAC74u;
label_1aac74:
    // 0x1aac74: 0x2c0f809  jalr        $s6
label_1aac78:
    if (ctx->pc == 0x1AAC78u) {
        ctx->pc = 0x1AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC74u;
        // 0x1aac78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC7Cu;
        goto label_1aac7c;
    }
    ctx->pc = 0x1AAC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1AAC7Cu);
        ctx->pc = 0x1AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC74u;
        // 0x1aac78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAC74u, 0x1AAC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAC7Cu;
label_1aac7c:
    // 0x1aac7c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1aac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1aac80:
    // 0x1aac80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1aac84:
    if (ctx->pc == 0x1AAC84u) {
        ctx->pc = 0x1AAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC80u;
        // 0x1aac84: 0x96850044  lhu         $a1, 0x44($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC88u;
        goto label_1aac88;
    }
    ctx->pc = 0x1AAC80u;
    {
        const bool branch_taken_0x1aac80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC80u;
        // 0x1aac84: 0x96850044  lhu         $a1, 0x44($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac80) {
            ctx->pc = 0x1AAC98u;
            goto label_1aac98;
        }
    }
    ctx->pc = 0x1AAC88u;
label_1aac88:
    // 0x1aac88: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1aac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1aac8c:
    // 0x1aac8c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1aac8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1aac90:
    // 0x1aac90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1aac94:
    if (ctx->pc == 0x1AAC94u) {
        ctx->pc = 0x1AAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC90u;
        // 0x1aac94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC98u;
        goto label_1aac98;
    }
    ctx->pc = 0x1AAC90u;
    {
        const bool branch_taken_0x1aac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC90u;
        // 0x1aac94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac90) {
            ctx->pc = 0x1AACA0u;
            goto label_1aaca0;
        }
    }
    ctx->pc = 0x1AAC98u;
label_1aac98:
    // 0x1aac98: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aac9c:
    if (ctx->pc == 0x1AAC9Cu) {
        ctx->pc = 0x1AAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC98u;
        // 0x1aac9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACA0u;
        goto label_1aaca0;
    }
    ctx->pc = 0x1AAC98u;
    {
        const bool branch_taken_0x1aac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC98u;
        // 0x1aac9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac98) {
            ctx->pc = 0x1AACA8u;
            goto label_1aaca8;
        }
    }
    ctx->pc = 0x1AACA0u;
label_1aaca0:
    // 0x1aaca0: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x1aaca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aaca4:
    // 0x1aaca4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1aaca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aaca8:
    // 0x1aaca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aacac:
    // 0x1aacac: 0xc0696ee  jal         func_1A5BB8
label_1aacb0:
    if (ctx->pc == 0x1AACB0u) {
        ctx->pc = 0x1AACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACACu;
        // 0x1aacb0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACB4u;
        goto label_1aacb4;
    }
    ctx->pc = 0x1AACACu;
    SET_GPR_U32(ctx, 31, 0x1AACB4u);
    ctx->pc = 0x1AACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACACu;
    // 0x1aacb0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5BB8u, 0x1AACACu, 0x1AACB4u)) {
        return;
    }
    ctx->pc = 0x1AACB4u;
label_1aacb4:
    // 0x1aacb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aacb8:
    // 0x1aacb8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1aacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_1aacbc:
    // 0x1aacbc: 0xae221200  sw          $v0, 0x1200($s1)
    ctx->pc = 0x1aacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4608), GPR_U32(ctx, 2));
label_1aacc0:
    // 0x1aacc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1aacc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1aacc4:
    // 0x1aacc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1aacc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1aacc8:
    // 0x1aacc8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1aacc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aaccc:
    // 0x1aaccc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1aacccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aacd0:
    // 0x1aacd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1aacd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aacd4:
    // 0x1aacd4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1aacd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aacd8:
    // 0x1aacd8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1aacd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aacdc:
    // 0x1aacdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aacdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aace0:
    // 0x1aace0: 0x3e00008  jr          $ra
label_1aace4:
    if (ctx->pc == 0x1AACE4u) {
        ctx->pc = 0x1AACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE0u;
        // 0x1aace4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACE8u;
        goto label_fallthrough_0x1aace0;
    }
    ctx->pc = 0x1AACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE0u;
        // 0x1aace4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aace0:
    ctx->pc = 0x1AACE8u;
}

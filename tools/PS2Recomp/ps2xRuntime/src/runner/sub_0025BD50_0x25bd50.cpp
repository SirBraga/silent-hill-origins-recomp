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

// Function: sub_0025BD50
// Address: 0x25bd50 - 0x25bf58
void sub_0025BD50_0x25bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BD50_0x25bd50");
#endif

    switch (ctx->pc) {
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        case 0x25be10u: goto label_25be10;
        case 0x25be14u: goto label_25be14;
        case 0x25be18u: goto label_25be18;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be20u: goto label_25be20;
        case 0x25be24u: goto label_25be24;
        case 0x25be28u: goto label_25be28;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be30u: goto label_25be30;
        case 0x25be34u: goto label_25be34;
        case 0x25be38u: goto label_25be38;
        case 0x25be3cu: goto label_25be3c;
        case 0x25be40u: goto label_25be40;
        case 0x25be44u: goto label_25be44;
        case 0x25be48u: goto label_25be48;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be50u: goto label_25be50;
        case 0x25be54u: goto label_25be54;
        case 0x25be58u: goto label_25be58;
        case 0x25be5cu: goto label_25be5c;
        case 0x25be60u: goto label_25be60;
        case 0x25be64u: goto label_25be64;
        case 0x25be68u: goto label_25be68;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be70u: goto label_25be70;
        case 0x25be74u: goto label_25be74;
        case 0x25be78u: goto label_25be78;
        case 0x25be7cu: goto label_25be7c;
        case 0x25be80u: goto label_25be80;
        case 0x25be84u: goto label_25be84;
        case 0x25be88u: goto label_25be88;
        case 0x25be8cu: goto label_25be8c;
        case 0x25be90u: goto label_25be90;
        case 0x25be94u: goto label_25be94;
        case 0x25be98u: goto label_25be98;
        case 0x25be9cu: goto label_25be9c;
        case 0x25bea0u: goto label_25bea0;
        case 0x25bea4u: goto label_25bea4;
        case 0x25bea8u: goto label_25bea8;
        case 0x25beacu: goto label_25beac;
        case 0x25beb0u: goto label_25beb0;
        case 0x25beb4u: goto label_25beb4;
        case 0x25beb8u: goto label_25beb8;
        case 0x25bebcu: goto label_25bebc;
        case 0x25bec0u: goto label_25bec0;
        case 0x25bec4u: goto label_25bec4;
        case 0x25bec8u: goto label_25bec8;
        case 0x25beccu: goto label_25becc;
        case 0x25bed0u: goto label_25bed0;
        case 0x25bed4u: goto label_25bed4;
        case 0x25bed8u: goto label_25bed8;
        case 0x25bedcu: goto label_25bedc;
        case 0x25bee0u: goto label_25bee0;
        case 0x25bee4u: goto label_25bee4;
        case 0x25bee8u: goto label_25bee8;
        case 0x25beecu: goto label_25beec;
        case 0x25bef0u: goto label_25bef0;
        case 0x25bef4u: goto label_25bef4;
        case 0x25bef8u: goto label_25bef8;
        case 0x25befcu: goto label_25befc;
        case 0x25bf00u: goto label_25bf00;
        case 0x25bf04u: goto label_25bf04;
        case 0x25bf08u: goto label_25bf08;
        case 0x25bf0cu: goto label_25bf0c;
        case 0x25bf10u: goto label_25bf10;
        case 0x25bf14u: goto label_25bf14;
        case 0x25bf18u: goto label_25bf18;
        case 0x25bf1cu: goto label_25bf1c;
        case 0x25bf20u: goto label_25bf20;
        case 0x25bf24u: goto label_25bf24;
        case 0x25bf28u: goto label_25bf28;
        case 0x25bf2cu: goto label_25bf2c;
        case 0x25bf30u: goto label_25bf30;
        case 0x25bf34u: goto label_25bf34;
        case 0x25bf38u: goto label_25bf38;
        case 0x25bf3cu: goto label_25bf3c;
        case 0x25bf40u: goto label_25bf40;
        case 0x25bf44u: goto label_25bf44;
        case 0x25bf48u: goto label_25bf48;
        case 0x25bf4cu: goto label_25bf4c;
        case 0x25bf50u: goto label_25bf50;
        case 0x25bf54u: goto label_25bf54;
        default: break;
    }

    ctx->pc = 0x25bd50u;

label_25bd50:
    // 0x25bd50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25bd54:
    // 0x25bd54: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x25bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_25bd58:
    // 0x25bd58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_25bd5c:
    // 0x25bd5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_25bd60:
    // 0x25bd60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25bd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25bd64:
    // 0x25bd64: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25bd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_25bd68:
    // 0x25bd68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25bd6c:
    // 0x25bd6c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x25bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_25bd70:
    // 0x25bd70: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x25bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_25bd74:
    // 0x25bd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25bd78:
    // 0x25bd78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25bd7c:
    // 0x25bd7c: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_25bd80:
    if (ctx->pc == 0x25BD80u) {
        ctx->pc = 0x25BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD7Cu;
        // 0x25bd80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD84u;
        goto label_25bd84;
    }
    ctx->pc = 0x25BD7Cu;
    {
        const bool branch_taken_0x25bd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD7Cu;
        // 0x25bd80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd7c) {
            ctx->pc = 0x25BEE4u;
            goto label_25bee4;
        }
    }
    ctx->pc = 0x25BD84u;
label_25bd84:
    // 0x25bd84: 0x5462005d  bnel        $v1, $v0, . + 4 + (0x5D << 2)
label_25bd88:
    if (ctx->pc == 0x25BD88u) {
        ctx->pc = 0x25BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD84u;
        // 0x25bd88: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD8Cu;
        goto label_25bd8c;
    }
    ctx->pc = 0x25BD84u;
    {
        const bool branch_taken_0x25bd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bd84) {
            ctx->pc = 0x25BD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD84u;
            // 0x25bd88: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BEFCu;
            goto label_25befc;
        }
    }
    ctx->pc = 0x25BD8Cu;
label_25bd8c:
    // 0x25bd8c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x25bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_25bd90:
    // 0x25bd90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25bd94:
    if (ctx->pc == 0x25BD94u) {
        ctx->pc = 0x25BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD90u;
        // 0x25bd94: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD98u;
        goto label_25bd98;
    }
    ctx->pc = 0x25BD90u;
    {
        const bool branch_taken_0x25bd90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd90) {
            ctx->pc = 0x25BD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD90u;
            // 0x25bd94: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BDA4u;
            goto label_25bda4;
        }
    }
    ctx->pc = 0x25BD98u;
label_25bd98:
    // 0x25bd98: 0xc093356  jal         func_24CD58
label_25bd9c:
    if (ctx->pc == 0x25BD9Cu) {
        ctx->pc = 0x25BDA0u;
        goto label_25bda0;
    }
    ctx->pc = 0x25BD98u;
    SET_GPR_U32(ctx, 31, 0x25BDA0u);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x25BD98u, 0x25BDA0u)) {
        return;
    }
    ctx->pc = 0x25BDA0u;
label_25bda0:
    // 0x25bda0: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x25bda0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_25bda4:
    // 0x25bda4: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x25bda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_25bda8:
    // 0x25bda8: 0x26330040  addiu       $s3, $s1, 0x40
    ctx->pc = 0x25bda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_25bdac:
    // 0x25bdac: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x25bdacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
label_25bdb0:
    // 0x25bdb0: 0x12120009  beq         $s0, $s2, . + 4 + (0x9 << 2)
label_25bdb4:
    if (ctx->pc == 0x25BDB4u) {
        ctx->pc = 0x25BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDB0u;
        // 0x25bdb4: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDB8u;
        goto label_25bdb8;
    }
    ctx->pc = 0x25BDB0u;
    {
        const bool branch_taken_0x25bdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x25BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDB0u;
        // 0x25bdb4: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bdb0) {
            ctx->pc = 0x25BDD8u;
            goto label_25bdd8;
        }
    }
    ctx->pc = 0x25BDB8u;
label_25bdb8:
    // 0x25bdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bdbc:
    // 0x25bdbc: 0x0  nop
    ctx->pc = 0x25bdbcu;
    // NOP
label_25bdc0:
    // 0x25bdc0: 0xc0974de  jal         func_25D378
label_25bdc4:
    if (ctx->pc == 0x25BDC4u) {
        ctx->pc = 0x25BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDC0u;
        // 0x25bdc4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDC8u;
        goto label_25bdc8;
    }
    ctx->pc = 0x25BDC0u;
    SET_GPR_U32(ctx, 31, 0x25BDC8u);
    ctx->pc = 0x25BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDC0u;
    // 0x25bdc4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D378u, 0x25BDC0u, 0x25BDC8u)) {
        return;
    }
    ctx->pc = 0x25BDC8u;
label_25bdc8:
    // 0x25bdc8: 0x0  nop
    ctx->pc = 0x25bdc8u;
    // NOP
label_25bdcc:
    // 0x25bdcc: 0x0  nop
    ctx->pc = 0x25bdccu;
    // NOP
label_25bdd0:
    // 0x25bdd0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_25bdd4:
    if (ctx->pc == 0x25BDD4u) {
        ctx->pc = 0x25BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDD0u;
        // 0x25bdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDD8u;
        goto label_25bdd8;
    }
    ctx->pc = 0x25BDD0u;
    {
        const bool branch_taken_0x25bdd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x25BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDD0u;
        // 0x25bdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bdd0) {
            ctx->pc = 0x25BDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25bdc0;
        }
    }
    ctx->pc = 0x25BDD8u;
label_25bdd8:
    // 0x25bdd8: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x25bdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_25bddc:
    // 0x25bddc: 0x12130009  beq         $s0, $s3, . + 4 + (0x9 << 2)
label_25bde0:
    if (ctx->pc == 0x25BDE0u) {
        ctx->pc = 0x25BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDDCu;
        // 0x25bde0: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDE4u;
        goto label_25bde4;
    }
    ctx->pc = 0x25BDDCu;
    {
        const bool branch_taken_0x25bddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x25BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDDCu;
        // 0x25bde0: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bddc) {
            ctx->pc = 0x25BE04u;
            goto label_25be04;
        }
    }
    ctx->pc = 0x25BDE4u;
label_25bde4:
    // 0x25bde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bde8:
    // 0x25bde8: 0xc0974c2  jal         func_25D308
label_25bdec:
    if (ctx->pc == 0x25BDECu) {
        ctx->pc = 0x25BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDE8u;
        // 0x25bdec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDF0u;
        goto label_25bdf0;
    }
    ctx->pc = 0x25BDE8u;
    SET_GPR_U32(ctx, 31, 0x25BDF0u);
    ctx->pc = 0x25BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDE8u;
    // 0x25bdec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D308u, 0x25BDE8u, 0x25BDF0u)) {
        return;
    }
    ctx->pc = 0x25BDF0u;
label_25bdf0:
    // 0x25bdf0: 0x0  nop
    ctx->pc = 0x25bdf0u;
    // NOP
label_25bdf4:
    // 0x25bdf4: 0x0  nop
    ctx->pc = 0x25bdf4u;
    // NOP
label_25bdf8:
    // 0x25bdf8: 0x5613fffb  bnel        $s0, $s3, . + 4 + (-0x5 << 2)
label_25bdfc:
    if (ctx->pc == 0x25BDFCu) {
        ctx->pc = 0x25BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDF8u;
        // 0x25bdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE00u;
        goto label_25be00;
    }
    ctx->pc = 0x25BDF8u;
    {
        const bool branch_taken_0x25bdf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x25bdf8) {
            ctx->pc = 0x25BDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BDF8u;
            // 0x25bdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25bde8;
        }
    }
    ctx->pc = 0x25BE00u;
label_25be00:
    // 0x25be00: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x25be00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_25be04:
    // 0x25be04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25be08:
    // 0x25be08: 0xc09397e  jal         func_24E5F8
label_25be0c:
    if (ctx->pc == 0x25BE0Cu) {
        ctx->pc = 0x25BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE08u;
        // 0x25be0c: 0x24841280  addiu       $a0, $a0, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE10u;
        goto label_25be10;
    }
    ctx->pc = 0x25BE08u;
    SET_GPR_U32(ctx, 31, 0x25BE10u);
    ctx->pc = 0x25BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE08u;
    // 0x25be0c: 0x24841280  addiu       $a0, $a0, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x25BE08u, 0x25BE10u)) {
        return;
    }
    ctx->pc = 0x25BE10u;
label_25be10:
    // 0x25be10: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x25be10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25be14:
    // 0x25be14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25be18:
    if (ctx->pc == 0x25BE18u) {
        ctx->pc = 0x25BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE14u;
        // 0x25be18: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE1Cu;
        goto label_25be1c;
    }
    ctx->pc = 0x25BE14u;
    {
        const bool branch_taken_0x25be14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE14u;
        // 0x25be18: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be14) {
            ctx->pc = 0x25BE2Cu;
            goto label_25be2c;
        }
    }
    ctx->pc = 0x25BE1Cu;
label_25be1c:
    // 0x25be1c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x25be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_25be20:
    // 0x25be20: 0x40f809  jalr        $v0
label_25be24:
    if (ctx->pc == 0x25BE24u) {
        ctx->pc = 0x25BE28u;
        goto label_25be28;
    }
    ctx->pc = 0x25BE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BE28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE20u, 0x25BE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BE28u;
label_25be28:
    // 0x25be28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x25be28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_25be2c:
    // 0x25be2c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x25be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25be30:
    // 0x25be30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25be34:
    if (ctx->pc == 0x25BE34u) {
        ctx->pc = 0x25BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE30u;
        // 0x25be34: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE38u;
        goto label_25be38;
    }
    ctx->pc = 0x25BE30u;
    {
        const bool branch_taken_0x25be30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE30u;
        // 0x25be34: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be30) {
            ctx->pc = 0x25BE48u;
            goto label_25be48;
        }
    }
    ctx->pc = 0x25BE38u;
label_25be38:
    // 0x25be38: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x25be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_25be3c:
    // 0x25be3c: 0x40f809  jalr        $v0
label_25be40:
    if (ctx->pc == 0x25BE40u) {
        ctx->pc = 0x25BE44u;
        goto label_25be44;
    }
    ctx->pc = 0x25BE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BE44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE3Cu, 0x25BE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BE44u;
label_25be44:
    // 0x25be44: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25be44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_25be48:
    // 0x25be48: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x25be48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_25be4c:
    // 0x25be4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25be50:
    if (ctx->pc == 0x25BE50u) {
        ctx->pc = 0x25BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE4Cu;
        // 0x25be50: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE54u;
        goto label_25be54;
    }
    ctx->pc = 0x25BE4Cu;
    {
        const bool branch_taken_0x25be4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE4Cu;
        // 0x25be50: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be4c) {
            ctx->pc = 0x25BE64u;
            goto label_25be64;
        }
    }
    ctx->pc = 0x25BE54u;
label_25be54:
    // 0x25be54: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x25be54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_25be58:
    // 0x25be58: 0x40f809  jalr        $v0
label_25be5c:
    if (ctx->pc == 0x25BE5Cu) {
        ctx->pc = 0x25BE60u;
        goto label_25be60;
    }
    ctx->pc = 0x25BE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BE60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE58u, 0x25BE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BE60u;
label_25be60:
    // 0x25be60: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x25be60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_25be64:
    // 0x25be64: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x25be64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25be68:
    // 0x25be68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25be6c:
    if (ctx->pc == 0x25BE6Cu) {
        ctx->pc = 0x25BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE68u;
        // 0x25be6c: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE70u;
        goto label_25be70;
    }
    ctx->pc = 0x25BE68u;
    {
        const bool branch_taken_0x25be68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE68u;
        // 0x25be6c: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be68) {
            ctx->pc = 0x25BE80u;
            goto label_25be80;
        }
    }
    ctx->pc = 0x25BE70u;
label_25be70:
    // 0x25be70: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x25be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_25be74:
    // 0x25be74: 0x40f809  jalr        $v0
label_25be78:
    if (ctx->pc == 0x25BE78u) {
        ctx->pc = 0x25BE7Cu;
        goto label_25be7c;
    }
    ctx->pc = 0x25BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BE7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE74u, 0x25BE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BE7Cu;
label_25be7c:
    // 0x25be7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x25be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_25be80:
    // 0x25be80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25be84:
    // 0x25be84: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x25be84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25be88:
    // 0x25be88: 0x24530fc8  addiu       $s3, $v0, 0xFC8
    ctx->pc = 0x25be88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_25be8c:
    // 0x25be8c: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x25be8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25be90:
    // 0x25be90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25be90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25be94:
    // 0x25be94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25be98:
    if (ctx->pc == 0x25BE98u) {
        ctx->pc = 0x25BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE94u;
        // 0x25be98: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE9Cu;
        goto label_25be9c;
    }
    ctx->pc = 0x25BE94u;
    {
        const bool branch_taken_0x25be94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE94u;
        // 0x25be98: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be94) {
            ctx->pc = 0x25BEACu;
            goto label_25beac;
        }
    }
    ctx->pc = 0x25BE9Cu;
label_25be9c:
    // 0x25be9c: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x25be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_25bea0:
    // 0x25bea0: 0x40f809  jalr        $v0
label_25bea4:
    if (ctx->pc == 0x25BEA4u) {
        ctx->pc = 0x25BEA8u;
        goto label_25bea8;
    }
    ctx->pc = 0x25BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BEA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BEA0u, 0x25BEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BEA8u;
label_25bea8:
    // 0x25bea8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_25beac:
    // 0x25beac: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
label_25beb0:
    if (ctx->pc == 0x25BEB0u) {
        ctx->pc = 0x25BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEACu;
        // 0x25beb0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEB4u;
        goto label_25beb4;
    }
    ctx->pc = 0x25BEACu;
    {
        const bool branch_taken_0x25beac = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x25BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEACu;
        // 0x25beb0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25beac) {
            ctx->pc = 0x25BE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25be90;
        }
    }
    ctx->pc = 0x25BEB4u;
label_25beb4:
    // 0x25beb4: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x25beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_25beb8:
    // 0x25beb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25bebc:
    if (ctx->pc == 0x25BEBCu) {
        ctx->pc = 0x25BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEB8u;
        // 0x25bebc: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEC0u;
        goto label_25bec0;
    }
    ctx->pc = 0x25BEB8u;
    {
        const bool branch_taken_0x25beb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEB8u;
        // 0x25bebc: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25beb8) {
            ctx->pc = 0x25BED0u;
            goto label_25bed0;
        }
    }
    ctx->pc = 0x25BEC0u;
label_25bec0:
    // 0x25bec0: 0xc096264  jal         func_258990
label_25bec4:
    if (ctx->pc == 0x25BEC4u) {
        ctx->pc = 0x25BEC8u;
        goto label_25bec8;
    }
    ctx->pc = 0x25BEC0u;
    SET_GPR_U32(ctx, 31, 0x25BEC8u);
    ctx->pc = 0x258990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258990u, 0x25BEC0u, 0x25BEC8u)) {
        return;
    }
    ctx->pc = 0x25BEC8u;
label_25bec8:
    // 0x25bec8: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x25bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_25becc:
    // 0x25becc: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x25beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_25bed0:
    // 0x25bed0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x25bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_25bed4:
    // 0x25bed4: 0x40f809  jalr        $v0
label_25bed8:
    if (ctx->pc == 0x25BED8u) {
        ctx->pc = 0x25BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BED4u;
        // 0x25bed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEDCu;
        goto label_25bedc;
    }
    ctx->pc = 0x25BED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BEDCu);
        ctx->pc = 0x25BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BED4u;
        // 0x25bed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BED4u, 0x25BEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BEDCu;
label_25bedc:
    // 0x25bedc: 0x10000016  b           . + 4 + (0x16 << 2)
label_25bee0:
    if (ctx->pc == 0x25BEE0u) {
        ctx->pc = 0x25BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEDCu;
        // 0x25bee0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEE4u;
        goto label_25bee4;
    }
    ctx->pc = 0x25BEDCu;
    {
        const bool branch_taken_0x25bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEDCu;
        // 0x25bee0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bedc) {
            ctx->pc = 0x25BF38u;
            goto label_25bf38;
        }
    }
    ctx->pc = 0x25BEE4u;
label_25bee4:
    // 0x25bee4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25bee8:
    // 0x25bee8: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x25bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_25beec:
    // 0x25beec: 0x40f809  jalr        $v0
label_25bef0:
    if (ctx->pc == 0x25BEF0u) {
        ctx->pc = 0x25BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEECu;
        // 0x25bef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEF4u;
        goto label_25bef4;
    }
    ctx->pc = 0x25BEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BEF4u);
        ctx->pc = 0x25BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEECu;
        // 0x25bef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BEECu, 0x25BEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BEF4u;
label_25bef4:
    // 0x25bef4: 0x10000010  b           . + 4 + (0x10 << 2)
label_25bef8:
    if (ctx->pc == 0x25BEF8u) {
        ctx->pc = 0x25BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEF4u;
        // 0x25bef8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BEFCu;
        goto label_25befc;
    }
    ctx->pc = 0x25BEF4u;
    {
        const bool branch_taken_0x25bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEF4u;
        // 0x25bef8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bef4) {
            ctx->pc = 0x25BF38u;
            goto label_25bf38;
        }
    }
    ctx->pc = 0x25BEFCu;
label_25befc:
    // 0x25befc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25bf00:
    if (ctx->pc == 0x25BF00u) {
        ctx->pc = 0x25BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEFCu;
        // 0x25bf00: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF04u;
        goto label_25bf04;
    }
    ctx->pc = 0x25BEFCu;
    {
        const bool branch_taken_0x25befc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25befc) {
            ctx->pc = 0x25BF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BEFCu;
            // 0x25bf00: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BF10u;
            goto label_25bf10;
        }
    }
    ctx->pc = 0x25BF04u;
label_25bf04:
    // 0x25bf04: 0xc096f54  jal         func_25BD50
label_25bf08:
    if (ctx->pc == 0x25BF08u) {
        ctx->pc = 0x25BF0Cu;
        goto label_25bf0c;
    }
    ctx->pc = 0x25BF04u;
    SET_GPR_U32(ctx, 31, 0x25BF0Cu);
    ctx->pc = 0x25BD50u;
    goto label_25bd50;
    ctx->pc = 0x25BF0Cu;
label_25bf0c:
    // 0x25bf0c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x25bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25bf10:
    // 0x25bf10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_25bf14:
    if (ctx->pc == 0x25BF14u) {
        ctx->pc = 0x25BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF10u;
        // 0x25bf14: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF18u;
        goto label_25bf18;
    }
    ctx->pc = 0x25BF10u;
    {
        const bool branch_taken_0x25bf10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF10u;
        // 0x25bf14: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf10) {
            ctx->pc = 0x25BF20u;
            goto label_25bf20;
        }
    }
    ctx->pc = 0x25BF18u;
label_25bf18:
    // 0x25bf18: 0xc096f54  jal         func_25BD50
label_25bf1c:
    if (ctx->pc == 0x25BF1Cu) {
        ctx->pc = 0x25BF20u;
        goto label_25bf20;
    }
    ctx->pc = 0x25BF18u;
    SET_GPR_U32(ctx, 31, 0x25BF20u);
    ctx->pc = 0x25BD50u;
    goto label_25bd50;
    ctx->pc = 0x25BF20u;
label_25bf20:
    // 0x25bf20: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_25bf24:
    // 0x25bf24: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25bf28:
    // 0x25bf28: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x25bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_25bf2c:
    // 0x25bf2c: 0x40f809  jalr        $v0
label_25bf30:
    if (ctx->pc == 0x25BF30u) {
        ctx->pc = 0x25BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF2Cu;
        // 0x25bf30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF34u;
        goto label_25bf34;
    }
    ctx->pc = 0x25BF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BF34u);
        ctx->pc = 0x25BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF2Cu;
        // 0x25bf30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF2Cu, 0x25BF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BF34u;
label_25bf34:
    // 0x25bf34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25bf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25bf38:
    // 0x25bf38: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25bf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25bf3c:
    // 0x25bf3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25bf3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25bf40:
    // 0x25bf40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25bf40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25bf44:
    // 0x25bf44: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x25bf44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25bf48:
    // 0x25bf48: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x25bf48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25bf4c:
    // 0x25bf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25bf50:
    // 0x25bf50: 0x3e00008  jr          $ra
label_25bf54:
    if (ctx->pc == 0x25BF54u) {
        ctx->pc = 0x25BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF50u;
        // 0x25bf54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BF58u;
        goto label_fallthrough_0x25bf50;
    }
    ctx->pc = 0x25BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF50u;
        // 0x25bf54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25bf50:
    ctx->pc = 0x25BF58u;
}

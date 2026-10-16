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

// Function: sub_002DAB60
// Address: 0x2dab60 - 0x2dae40
void sub_002DAB60_0x2dab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB60_0x2dab60");
#endif

    switch (ctx->pc) {
        case 0x2dab60u: goto label_2dab60;
        case 0x2dab64u: goto label_2dab64;
        case 0x2dab68u: goto label_2dab68;
        case 0x2dab6cu: goto label_2dab6c;
        case 0x2dab70u: goto label_2dab70;
        case 0x2dab74u: goto label_2dab74;
        case 0x2dab78u: goto label_2dab78;
        case 0x2dab7cu: goto label_2dab7c;
        case 0x2dab80u: goto label_2dab80;
        case 0x2dab84u: goto label_2dab84;
        case 0x2dab88u: goto label_2dab88;
        case 0x2dab8cu: goto label_2dab8c;
        case 0x2dab90u: goto label_2dab90;
        case 0x2dab94u: goto label_2dab94;
        case 0x2dab98u: goto label_2dab98;
        case 0x2dab9cu: goto label_2dab9c;
        case 0x2daba0u: goto label_2daba0;
        case 0x2daba4u: goto label_2daba4;
        case 0x2daba8u: goto label_2daba8;
        case 0x2dabacu: goto label_2dabac;
        case 0x2dabb0u: goto label_2dabb0;
        case 0x2dabb4u: goto label_2dabb4;
        case 0x2dabb8u: goto label_2dabb8;
        case 0x2dabbcu: goto label_2dabbc;
        case 0x2dabc0u: goto label_2dabc0;
        case 0x2dabc4u: goto label_2dabc4;
        case 0x2dabc8u: goto label_2dabc8;
        case 0x2dabccu: goto label_2dabcc;
        case 0x2dabd0u: goto label_2dabd0;
        case 0x2dabd4u: goto label_2dabd4;
        case 0x2dabd8u: goto label_2dabd8;
        case 0x2dabdcu: goto label_2dabdc;
        case 0x2dabe0u: goto label_2dabe0;
        case 0x2dabe4u: goto label_2dabe4;
        case 0x2dabe8u: goto label_2dabe8;
        case 0x2dabecu: goto label_2dabec;
        case 0x2dabf0u: goto label_2dabf0;
        case 0x2dabf4u: goto label_2dabf4;
        case 0x2dabf8u: goto label_2dabf8;
        case 0x2dabfcu: goto label_2dabfc;
        case 0x2dac00u: goto label_2dac00;
        case 0x2dac04u: goto label_2dac04;
        case 0x2dac08u: goto label_2dac08;
        case 0x2dac0cu: goto label_2dac0c;
        case 0x2dac10u: goto label_2dac10;
        case 0x2dac14u: goto label_2dac14;
        case 0x2dac18u: goto label_2dac18;
        case 0x2dac1cu: goto label_2dac1c;
        case 0x2dac20u: goto label_2dac20;
        case 0x2dac24u: goto label_2dac24;
        case 0x2dac28u: goto label_2dac28;
        case 0x2dac2cu: goto label_2dac2c;
        case 0x2dac30u: goto label_2dac30;
        case 0x2dac34u: goto label_2dac34;
        case 0x2dac38u: goto label_2dac38;
        case 0x2dac3cu: goto label_2dac3c;
        case 0x2dac40u: goto label_2dac40;
        case 0x2dac44u: goto label_2dac44;
        case 0x2dac48u: goto label_2dac48;
        case 0x2dac4cu: goto label_2dac4c;
        case 0x2dac50u: goto label_2dac50;
        case 0x2dac54u: goto label_2dac54;
        case 0x2dac58u: goto label_2dac58;
        case 0x2dac5cu: goto label_2dac5c;
        case 0x2dac60u: goto label_2dac60;
        case 0x2dac64u: goto label_2dac64;
        case 0x2dac68u: goto label_2dac68;
        case 0x2dac6cu: goto label_2dac6c;
        case 0x2dac70u: goto label_2dac70;
        case 0x2dac74u: goto label_2dac74;
        case 0x2dac78u: goto label_2dac78;
        case 0x2dac7cu: goto label_2dac7c;
        case 0x2dac80u: goto label_2dac80;
        case 0x2dac84u: goto label_2dac84;
        case 0x2dac88u: goto label_2dac88;
        case 0x2dac8cu: goto label_2dac8c;
        case 0x2dac90u: goto label_2dac90;
        case 0x2dac94u: goto label_2dac94;
        case 0x2dac98u: goto label_2dac98;
        case 0x2dac9cu: goto label_2dac9c;
        case 0x2daca0u: goto label_2daca0;
        case 0x2daca4u: goto label_2daca4;
        case 0x2daca8u: goto label_2daca8;
        case 0x2dacacu: goto label_2dacac;
        case 0x2dacb0u: goto label_2dacb0;
        case 0x2dacb4u: goto label_2dacb4;
        case 0x2dacb8u: goto label_2dacb8;
        case 0x2dacbcu: goto label_2dacbc;
        case 0x2dacc0u: goto label_2dacc0;
        case 0x2dacc4u: goto label_2dacc4;
        case 0x2dacc8u: goto label_2dacc8;
        case 0x2dacccu: goto label_2daccc;
        case 0x2dacd0u: goto label_2dacd0;
        case 0x2dacd4u: goto label_2dacd4;
        case 0x2dacd8u: goto label_2dacd8;
        case 0x2dacdcu: goto label_2dacdc;
        case 0x2dace0u: goto label_2dace0;
        case 0x2dace4u: goto label_2dace4;
        case 0x2dace8u: goto label_2dace8;
        case 0x2dacecu: goto label_2dacec;
        case 0x2dacf0u: goto label_2dacf0;
        case 0x2dacf4u: goto label_2dacf4;
        case 0x2dacf8u: goto label_2dacf8;
        case 0x2dacfcu: goto label_2dacfc;
        case 0x2dad00u: goto label_2dad00;
        case 0x2dad04u: goto label_2dad04;
        case 0x2dad08u: goto label_2dad08;
        case 0x2dad0cu: goto label_2dad0c;
        case 0x2dad10u: goto label_2dad10;
        case 0x2dad14u: goto label_2dad14;
        case 0x2dad18u: goto label_2dad18;
        case 0x2dad1cu: goto label_2dad1c;
        case 0x2dad20u: goto label_2dad20;
        case 0x2dad24u: goto label_2dad24;
        case 0x2dad28u: goto label_2dad28;
        case 0x2dad2cu: goto label_2dad2c;
        case 0x2dad30u: goto label_2dad30;
        case 0x2dad34u: goto label_2dad34;
        case 0x2dad38u: goto label_2dad38;
        case 0x2dad3cu: goto label_2dad3c;
        case 0x2dad40u: goto label_2dad40;
        case 0x2dad44u: goto label_2dad44;
        case 0x2dad48u: goto label_2dad48;
        case 0x2dad4cu: goto label_2dad4c;
        case 0x2dad50u: goto label_2dad50;
        case 0x2dad54u: goto label_2dad54;
        case 0x2dad58u: goto label_2dad58;
        case 0x2dad5cu: goto label_2dad5c;
        case 0x2dad60u: goto label_2dad60;
        case 0x2dad64u: goto label_2dad64;
        case 0x2dad68u: goto label_2dad68;
        case 0x2dad6cu: goto label_2dad6c;
        case 0x2dad70u: goto label_2dad70;
        case 0x2dad74u: goto label_2dad74;
        case 0x2dad78u: goto label_2dad78;
        case 0x2dad7cu: goto label_2dad7c;
        case 0x2dad80u: goto label_2dad80;
        case 0x2dad84u: goto label_2dad84;
        case 0x2dad88u: goto label_2dad88;
        case 0x2dad8cu: goto label_2dad8c;
        case 0x2dad90u: goto label_2dad90;
        case 0x2dad94u: goto label_2dad94;
        case 0x2dad98u: goto label_2dad98;
        case 0x2dad9cu: goto label_2dad9c;
        case 0x2dada0u: goto label_2dada0;
        case 0x2dada4u: goto label_2dada4;
        case 0x2dada8u: goto label_2dada8;
        case 0x2dadacu: goto label_2dadac;
        case 0x2dadb0u: goto label_2dadb0;
        case 0x2dadb4u: goto label_2dadb4;
        case 0x2dadb8u: goto label_2dadb8;
        case 0x2dadbcu: goto label_2dadbc;
        case 0x2dadc0u: goto label_2dadc0;
        case 0x2dadc4u: goto label_2dadc4;
        case 0x2dadc8u: goto label_2dadc8;
        case 0x2dadccu: goto label_2dadcc;
        case 0x2dadd0u: goto label_2dadd0;
        case 0x2dadd4u: goto label_2dadd4;
        case 0x2dadd8u: goto label_2dadd8;
        case 0x2daddcu: goto label_2daddc;
        case 0x2dade0u: goto label_2dade0;
        case 0x2dade4u: goto label_2dade4;
        case 0x2dade8u: goto label_2dade8;
        case 0x2dadecu: goto label_2dadec;
        case 0x2dadf0u: goto label_2dadf0;
        case 0x2dadf4u: goto label_2dadf4;
        case 0x2dadf8u: goto label_2dadf8;
        case 0x2dadfcu: goto label_2dadfc;
        case 0x2dae00u: goto label_2dae00;
        case 0x2dae04u: goto label_2dae04;
        case 0x2dae08u: goto label_2dae08;
        case 0x2dae0cu: goto label_2dae0c;
        case 0x2dae10u: goto label_2dae10;
        case 0x2dae14u: goto label_2dae14;
        case 0x2dae18u: goto label_2dae18;
        case 0x2dae1cu: goto label_2dae1c;
        case 0x2dae20u: goto label_2dae20;
        case 0x2dae24u: goto label_2dae24;
        case 0x2dae28u: goto label_2dae28;
        case 0x2dae2cu: goto label_2dae2c;
        case 0x2dae30u: goto label_2dae30;
        case 0x2dae34u: goto label_2dae34;
        case 0x2dae38u: goto label_2dae38;
        case 0x2dae3cu: goto label_2dae3c;
        default: break;
    }

    ctx->pc = 0x2dab60u;

label_2dab60:
    // 0x2dab60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2dab64:
    // 0x2dab64: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2dab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2dab68:
    // 0x2dab68: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2dab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2dab6c:
    // 0x2dab6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2dab6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2dab70:
    // 0x2dab70: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2dab70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2dab74:
    // 0x2dab74: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2dab74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2dab78:
    // 0x2dab78: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2dab78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dab7c:
    // 0x2dab7c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2dab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2dab80:
    // 0x2dab80: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2dab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2dab84:
    // 0x2dab84: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2dab84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2dab88:
    // 0x2dab88: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2dab88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2dab8c:
    // 0x2dab8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2dab90:
    // 0x2dab90: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2dab90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2dab94:
    // 0x2dab94: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2dab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2dab98:
    // 0x2dab98: 0x8cb4004c  lw          $s4, 0x4C($a1)
    ctx->pc = 0x2dab98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2dab9c:
    // 0x2dab9c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2dab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2daba0:
    // 0x2daba0: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x2daba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2daba4:
    // 0x2daba4: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_2daba8:
    if (ctx->pc == 0x2DABA8u) {
        ctx->pc = 0x2DABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABA4u;
        // 0x2daba8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DABACu;
        goto label_2dabac;
    }
    ctx->pc = 0x2DABA4u;
    {
        const bool branch_taken_0x2daba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABA4u;
        // 0x2daba8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daba4) {
            ctx->pc = 0x2DABC4u;
            goto label_2dabc4;
        }
    }
    ctx->pc = 0x2DABACu;
label_2dabac:
    // 0x2dabac: 0x8c62ffec  lw          $v0, -0x14($v1)
    ctx->pc = 0x2dabacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
label_2dabb0:
    // 0x2dabb0: 0x10560023  beq         $v0, $s6, . + 4 + (0x23 << 2)
label_2dabb4:
    if (ctx->pc == 0x2DABB4u) {
        ctx->pc = 0x2DABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABB0u;
        // 0x2dabb4: 0x2472ffec  addiu       $s2, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DABB8u;
        goto label_2dabb8;
    }
    ctx->pc = 0x2DABB0u;
    {
        const bool branch_taken_0x2dabb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABB0u;
        // 0x2dabb4: 0x2472ffec  addiu       $s2, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabb0) {
            ctx->pc = 0x2DAC40u;
            goto label_2dac40;
        }
    }
    ctx->pc = 0x2DABB8u;
label_2dabb8:
    // 0x2dabb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dabbc:
    // 0x2dabbc: 0x5464fffc  bnel        $v1, $a0, . + 4 + (-0x4 << 2)
label_2dabc0:
    if (ctx->pc == 0x2DABC0u) {
        ctx->pc = 0x2DABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABBCu;
        // 0x2dabc0: 0x8c62ffec  lw          $v0, -0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DABC4u;
        goto label_2dabc4;
    }
    ctx->pc = 0x2DABBCu;
    {
        const bool branch_taken_0x2dabbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2dabbc) {
            ctx->pc = 0x2DABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DABBCu;
            // 0x2dabc0: 0x8c62ffec  lw          $v0, -0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dabb0;
        }
    }
    ctx->pc = 0x2DABC4u;
label_2dabc4:
    // 0x2dabc4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2dabc8:
    // 0x2dabc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2dabc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dabcc:
    // 0x2dabcc: 0xc0b6b90  jal         func_2DAE40
label_2dabd0:
    if (ctx->pc == 0x2DABD0u) {
        ctx->pc = 0x2DABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABCCu;
        // 0x2dabd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DABD4u;
        goto label_2dabd4;
    }
    ctx->pc = 0x2DABCCu;
    SET_GPR_U32(ctx, 31, 0x2DABD4u);
    ctx->pc = 0x2DABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABCCu;
    // 0x2dabd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAE40u, 0x2DABCCu, 0x2DABD4u)) {
        return;
    }
    ctx->pc = 0x2DABD4u;
label_2dabd4:
    // 0x2dabd4: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_2dabd8:
    if (ctx->pc == 0x2DABD8u) {
        ctx->pc = 0x2DABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABD4u;
        // 0x2dabd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DABDCu;
        goto label_2dabdc;
    }
    ctx->pc = 0x2DABD4u;
    {
        const bool branch_taken_0x2dabd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABD4u;
        // 0x2dabd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabd4) {
            ctx->pc = 0x2DAE10u;
            goto label_2dae10;
        }
    }
    ctx->pc = 0x2DABDCu;
label_2dabdc:
    // 0x2dabdc: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x2dabdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_2dabe0:
    // 0x2dabe0: 0x96c30014  lhu         $v1, 0x14($s6)
    ctx->pc = 0x2dabe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_2dabe4:
    // 0x2dabe4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2dabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2dabe8:
    // 0x2dabe8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2dabec:
    // 0x2dabec: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x2dabecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_2dabf0:
    // 0x2dabf0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2dabf4:
    if (ctx->pc == 0x2DABF4u) {
        ctx->pc = 0x2DABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABF0u;
        // 0x2dabf4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DABF8u;
        goto label_2dabf8;
    }
    ctx->pc = 0x2DABF0u;
    {
        const bool branch_taken_0x2dabf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABF0u;
        // 0x2dabf4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabf0) {
            ctx->pc = 0x2DAC14u;
            goto label_2dac14;
        }
    }
    ctx->pc = 0x2DABF8u;
label_2dabf8:
    // 0x2dabf8: 0x200f809  jalr        $s0
label_2dabfc:
    if (ctx->pc == 0x2DABFCu) {
        ctx->pc = 0x2DABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABF8u;
        // 0x2dabfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC00u;
        goto label_2dac00;
    }
    ctx->pc = 0x2DABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2DAC00u);
        ctx->pc = 0x2DABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABF8u;
        // 0x2dabfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DABF8u, 0x2DAC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DAC00u;
label_2dac00:
    // 0x2dac00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dac00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dac04:
    // 0x2dac04: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2dac08:
    if (ctx->pc == 0x2DAC08u) {
        ctx->pc = 0x2DAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC04u;
        // 0x2dac08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC0Cu;
        goto label_2dac0c;
    }
    ctx->pc = 0x2DAC04u;
    {
        const bool branch_taken_0x2dac04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC04u;
        // 0x2dac08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac04) {
            ctx->pc = 0x2DAC38u;
            goto label_2dac38;
        }
    }
    ctx->pc = 0x2DAC0Cu;
label_2dac0c:
    // 0x2dac0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2dac10:
    if (ctx->pc == 0x2DAC10u) {
        ctx->pc = 0x2DAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC0Cu;
        // 0x2dac10: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC14u;
        goto label_2dac14;
    }
    ctx->pc = 0x2DAC0Cu;
    {
        const bool branch_taken_0x2dac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC0Cu;
        // 0x2dac10: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac0c) {
            ctx->pc = 0x2DAC30u;
            goto label_2dac30;
        }
    }
    ctx->pc = 0x2DAC14u;
label_2dac14:
    // 0x2dac14: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2dac14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2dac18:
    // 0x2dac18: 0xc0b7076  jal         func_2DC1D8
label_2dac1c:
    if (ctx->pc == 0x2DAC1Cu) {
        ctx->pc = 0x2DAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC18u;
        // 0x2dac1c: 0x34a5080a  ori         $a1, $a1, 0x80A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC20u;
        goto label_2dac20;
    }
    ctx->pc = 0x2DAC18u;
    SET_GPR_U32(ctx, 31, 0x2DAC20u);
    ctx->pc = 0x2DAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC18u;
    // 0x2dac1c: 0x34a5080a  ori         $a1, $a1, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DAC18u, 0x2DAC20u)) {
        return;
    }
    ctx->pc = 0x2DAC20u;
label_2dac20:
    // 0x2dac20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dac20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dac24:
    // 0x2dac24: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
label_2dac28:
    if (ctx->pc == 0x2DAC28u) {
        ctx->pc = 0x2DAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC24u;
        // 0x2dac28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC2Cu;
        goto label_2dac2c;
    }
    ctx->pc = 0x2DAC24u;
    {
        const bool branch_taken_0x2dac24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC24u;
        // 0x2dac28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac24) {
            ctx->pc = 0x2DAE10u;
            goto label_2dae10;
        }
    }
    ctx->pc = 0x2DAC2Cu;
label_2dac2c:
    // 0x2dac2c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2dac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2dac30:
    // 0x2dac30: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_2dac34:
    if (ctx->pc == 0x2DAC34u) {
        ctx->pc = 0x2DAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC30u;
        // 0x2dac34: 0x2642001c  addiu       $v0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC38u;
        goto label_2dac38;
    }
    ctx->pc = 0x2DAC30u;
    {
        const bool branch_taken_0x2dac30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC30u;
        // 0x2dac34: 0x2642001c  addiu       $v0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac30) {
            ctx->pc = 0x2DAC54u;
            goto label_2dac54;
        }
    }
    ctx->pc = 0x2DAC38u;
label_2dac38:
    // 0x2dac38: 0x10000075  b           . + 4 + (0x75 << 2)
label_2dac3c:
    if (ctx->pc == 0x2DAC3Cu) {
        ctx->pc = 0x2DAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC38u;
        // 0x2dac3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC40u;
        goto label_2dac40;
    }
    ctx->pc = 0x2DAC38u;
    {
        const bool branch_taken_0x2dac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC38u;
        // 0x2dac3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac38) {
            ctx->pc = 0x2DAE10u;
            goto label_2dae10;
        }
    }
    ctx->pc = 0x2DAC40u;
label_2dac40:
    // 0x2dac40: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2dac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2dac44:
    // 0x2dac44: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2dac44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dac48:
    // 0x2dac48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dac4c:
    // 0x2dac4c: 0x10000070  b           . + 4 + (0x70 << 2)
label_2dac50:
    if (ctx->pc == 0x2DAC50u) {
        ctx->pc = 0x2DAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC4Cu;
        // 0x2dac50: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC54u;
        goto label_2dac54;
    }
    ctx->pc = 0x2DAC4Cu;
    {
        const bool branch_taken_0x2dac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC4Cu;
        // 0x2dac50: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac4c) {
            ctx->pc = 0x2DAE10u;
            goto label_2dae10;
        }
    }
    ctx->pc = 0x2DAC54u;
label_2dac54:
    // 0x2dac54: 0x26830004  addiu       $v1, $s4, 0x4
    ctx->pc = 0x2dac54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2dac58:
    // 0x2dac58: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2dac58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2dac5c:
    // 0x2dac5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dac60:
    // 0x2dac60: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2dac60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2dac64:
    // 0x2dac64: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x2dac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2dac68:
    // 0x2dac68: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2dac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2dac6c:
    // 0x2dac6c: 0x96c30014  lhu         $v1, 0x14($s6)
    ctx->pc = 0x2dac6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_2dac70:
    // 0x2dac70: 0xae560000  sw          $s6, 0x0($s2)
    ctx->pc = 0x2dac70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
label_2dac74:
    // 0x2dac74: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dac74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2dac78:
    // 0x2dac78: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2dac78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_2dac7c:
    // 0x2dac7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dac80:
    // 0x2dac80: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2dac80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2dac84:
    // 0x2dac84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2dac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2dac88:
    // 0x2dac88: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2dac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2dac8c:
    // 0x2dac8c: 0x96c20014  lhu         $v0, 0x14($s6)
    ctx->pc = 0x2dac8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_2dac90:
    // 0x2dac90: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2dac90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2dac94:
    // 0x2dac94: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2dac98:
    if (ctx->pc == 0x2DAC98u) {
        ctx->pc = 0x2DAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC94u;
        // 0x2dac98: 0x9475000c  lhu         $s5, 0xC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAC9Cu;
        goto label_2dac9c;
    }
    ctx->pc = 0x2DAC94u;
    {
        const bool branch_taken_0x2dac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC94u;
        // 0x2dac98: 0x9475000c  lhu         $s5, 0xC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac94) {
            ctx->pc = 0x2DAD34u;
            goto label_2dad34;
        }
    }
    ctx->pc = 0x2DAC9Cu;
label_2dac9c:
    // 0x2dac9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dac9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daca0:
    // 0x2daca0: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
label_2daca4:
    if (ctx->pc == 0x2DACA4u) {
        ctx->pc = 0x2DACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACA0u;
        // 0x2daca4: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DACA8u;
        goto label_2daca8;
    }
    ctx->pc = 0x2DACA0u;
    {
        const bool branch_taken_0x2daca0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACA0u;
        // 0x2daca4: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daca0) {
            ctx->pc = 0x2DAD20u;
            goto label_2dad20;
        }
    }
    ctx->pc = 0x2DACA8u;
label_2daca8:
    // 0x2daca8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2daca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dacac:
    // 0x2dacac: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x2dacacu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2dacb0:
    // 0x2dacb0: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x2dacb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_2dacb4:
    // 0x2dacb4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2dacb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2dacb8:
    // 0x2dacb8: 0x2068818  mult        $s1, $s0, $a2
    ctx->pc = 0x2dacb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2dacbc:
    // 0x2dacbc: 0x0  nop
    ctx->pc = 0x2dacbcu;
    // NOP
label_2dacc0:
    // 0x2dacc0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2dacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2dacc4:
    // 0x2dacc4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2dacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2dacc8:
    // 0x2dacc8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2dacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2daccc:
    // 0x2daccc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2dacccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2dacd0:
    // 0x2dacd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dacd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dacd4:
    // 0x2dacd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dacd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dacd8:
    // 0x2dacd8: 0xc0b7d14  jal         func_2DF450
label_2dacdc:
    if (ctx->pc == 0x2DACDCu) {
        ctx->pc = 0x2DACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACD8u;
        // 0x2dacdc: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DACE0u;
        goto label_2dace0;
    }
    ctx->pc = 0x2DACD8u;
    SET_GPR_U32(ctx, 31, 0x2DACE0u);
    ctx->pc = 0x2DACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACD8u;
    // 0x2dacdc: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DACD8u, 0x2DACE0u)) {
        return;
    }
    ctx->pc = 0x2DACE0u;
label_2dace0:
    // 0x2dace0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2dace4:
    if (ctx->pc == 0x2DACE4u) {
        ctx->pc = 0x2DACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACE0u;
        // 0x2dace4: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DACE8u;
        goto label_2dace8;
    }
    ctx->pc = 0x2DACE0u;
    {
        const bool branch_taken_0x2dace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACE0u;
        // 0x2dace4: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dace0) {
            ctx->pc = 0x2DAD0Cu;
            goto label_2dad0c;
        }
    }
    ctx->pc = 0x2DACE8u;
label_2dace8:
    // 0x2dace8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2dace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dacec:
    // 0x2dacec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2dacecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2dacf0:
    // 0x2dacf0: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x2dacf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
label_2dacf4:
    // 0x2dacf4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2dacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2dacf8:
    // 0x2dacf8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2dacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dacfc:
    // 0x2dacfc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2dacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2dad00:
    // 0x2dad00: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2dad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2dad04:
    // 0x2dad04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2dad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2dad08:
    // 0x2dad08: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2dad08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2dad0c:
    // 0x2dad0c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2dad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2dad10:
    // 0x2dad10: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2dad10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2dad14:
    // 0x2dad14: 0x215182b  sltu        $v1, $s0, $s5
    ctx->pc = 0x2dad14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2dad18:
    // 0x2dad18: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_2dad1c:
    if (ctx->pc == 0x2DAD1Cu) {
        ctx->pc = 0x2DAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD18u;
        // 0x2dad1c: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD20u;
        goto label_2dad20;
    }
    ctx->pc = 0x2DAD18u;
    {
        const bool branch_taken_0x2dad18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD18u;
        // 0x2dad1c: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad18) {
            ctx->pc = 0x2DACC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dacc0;
        }
    }
    ctx->pc = 0x2DAD20u;
label_2dad20:
    // 0x2dad20: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2dad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2dad24:
    // 0x2dad24: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x2dad24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_2dad28:
    // 0x2dad28: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2dad28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2dad2c:
    // 0x2dad2c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_2dad30:
    if (ctx->pc == 0x2DAD30u) {
        ctx->pc = 0x2DAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD2Cu;
        // 0x2dad30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD34u;
        goto label_2dad34;
    }
    ctx->pc = 0x2DAD2Cu;
    {
        const bool branch_taken_0x2dad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD2Cu;
        // 0x2dad30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad2c) {
            ctx->pc = 0x2DACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2daca0;
        }
    }
    ctx->pc = 0x2DAD34u;
label_2dad34:
    // 0x2dad34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2dad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2dad38:
    // 0x2dad38: 0x96c30016  lhu         $v1, 0x16($s6)
    ctx->pc = 0x2dad38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_2dad3c:
    // 0x2dad3c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2dad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2dad40:
    // 0x2dad40: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2dad40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2dad44:
    // 0x2dad44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dad44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dad48:
    // 0x2dad48: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_2dad4c:
    if (ctx->pc == 0x2DAD4Cu) {
        ctx->pc = 0x2DAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD48u;
        // 0x2dad4c: 0x9455000e  lhu         $s5, 0xE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD50u;
        goto label_2dad50;
    }
    ctx->pc = 0x2DAD48u;
    {
        const bool branch_taken_0x2dad48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD48u;
        // 0x2dad4c: 0x9455000e  lhu         $s5, 0xE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad48) {
            ctx->pc = 0x2DADECu;
            goto label_2dadec;
        }
    }
    ctx->pc = 0x2DAD50u;
label_2dad50:
    // 0x2dad50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dad50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dad54:
    // 0x2dad54: 0x0  nop
    ctx->pc = 0x2dad54u;
    // NOP
label_2dad58:
    // 0x2dad58: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
label_2dad5c:
    if (ctx->pc == 0x2DAD5Cu) {
        ctx->pc = 0x2DAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD58u;
        // 0x2dad5c: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD60u;
        goto label_2dad60;
    }
    ctx->pc = 0x2DAD58u;
    {
        const bool branch_taken_0x2dad58 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD58u;
        // 0x2dad5c: 0x24970001  addiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad58) {
            ctx->pc = 0x2DADD8u;
            goto label_2dadd8;
        }
    }
    ctx->pc = 0x2DAD60u;
label_2dad60:
    // 0x2dad60: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2dad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dad64:
    // 0x2dad64: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x2dad64u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2dad68:
    // 0x2dad68: 0x82f018  mult        $fp, $a0, $v0
    ctx->pc = 0x2dad68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_2dad6c:
    // 0x2dad6c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2dad6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2dad70:
    // 0x2dad70: 0x2068818  mult        $s1, $s0, $a2
    ctx->pc = 0x2dad70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2dad74:
    // 0x2dad74: 0x0  nop
    ctx->pc = 0x2dad74u;
    // NOP
label_2dad78:
    // 0x2dad78: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2dad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2dad7c:
    // 0x2dad7c: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x2dad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_2dad80:
    // 0x2dad80: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2dad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2dad84:
    // 0x2dad84: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2dad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2dad88:
    // 0x2dad88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dad88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dad8c:
    // 0x2dad8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dad90:
    // 0x2dad90: 0xc0b7d14  jal         func_2DF450
label_2dad94:
    if (ctx->pc == 0x2DAD94u) {
        ctx->pc = 0x2DAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD90u;
        // 0x2dad94: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAD98u;
        goto label_2dad98;
    }
    ctx->pc = 0x2DAD90u;
    SET_GPR_U32(ctx, 31, 0x2DAD98u);
    ctx->pc = 0x2DAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD90u;
    // 0x2dad94: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DAD90u, 0x2DAD98u)) {
        return;
    }
    ctx->pc = 0x2DAD98u;
label_2dad98:
    // 0x2dad98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2dad9c:
    if (ctx->pc == 0x2DAD9Cu) {
        ctx->pc = 0x2DAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD98u;
        // 0x2dad9c: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADA0u;
        goto label_2dada0;
    }
    ctx->pc = 0x2DAD98u;
    {
        const bool branch_taken_0x2dad98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD98u;
        // 0x2dad9c: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad98) {
            ctx->pc = 0x2DADC4u;
            goto label_2dadc4;
        }
    }
    ctx->pc = 0x2DADA0u;
label_2dada0:
    // 0x2dada0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2dada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2dada4:
    // 0x2dada4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2dada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2dada8:
    // 0x2dada8: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x2dada8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
label_2dadac:
    // 0x2dadac: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2dadacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2dadb0:
    // 0x2dadb0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2dadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2dadb4:
    // 0x2dadb4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2dadb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2dadb8:
    // 0x2dadb8: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2dadb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2dadbc:
    // 0x2dadbc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2dadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2dadc0:
    // 0x2dadc0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2dadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2dadc4:
    // 0x2dadc4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2dadc8:
    // 0x2dadc8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2dadc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2dadcc:
    // 0x2dadcc: 0x215182b  sltu        $v1, $s0, $s5
    ctx->pc = 0x2dadccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2dadd0:
    // 0x2dadd0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_2dadd4:
    if (ctx->pc == 0x2DADD4u) {
        ctx->pc = 0x2DADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADD0u;
        // 0x2dadd4: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADD8u;
        goto label_2dadd8;
    }
    ctx->pc = 0x2DADD0u;
    {
        const bool branch_taken_0x2dadd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADD0u;
        // 0x2dadd4: 0x2068818  mult        $s1, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dadd0) {
            ctx->pc = 0x2DAD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dad78;
        }
    }
    ctx->pc = 0x2DADD8u;
label_2dadd8:
    // 0x2dadd8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2dadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2daddc:
    // 0x2daddc: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x2daddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_2dade0:
    // 0x2dade0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2dade0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2dade4:
    // 0x2dade4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_2dade8:
    if (ctx->pc == 0x2DADE8u) {
        ctx->pc = 0x2DADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADE4u;
        // 0x2dade8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DADECu;
        goto label_2dadec;
    }
    ctx->pc = 0x2DADE4u;
    {
        const bool branch_taken_0x2dade4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADE4u;
        // 0x2dade8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dade4) {
            ctx->pc = 0x2DAD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dad58;
        }
    }
    ctx->pc = 0x2DADECu;
label_2dadec:
    // 0x2dadec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2dadecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2dadf0:
    // 0x2dadf0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2dadf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dadf4:
    // 0x2dadf4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2dadf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2dadf8:
    // 0x2dadf8: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x2dadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_2dadfc:
    // 0x2dadfc: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x2dadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_2dae00:
    // 0x2dae00: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2dae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2dae04:
    // 0x2dae04: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2dae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2dae08:
    // 0x2dae08: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2dae08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2dae0c:
    // 0x2dae0c: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x2dae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
label_2dae10:
    // 0x2dae10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2dae10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2dae14:
    // 0x2dae14: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2dae14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2dae18:
    // 0x2dae18: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2dae18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2dae1c:
    // 0x2dae1c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2dae1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dae20:
    // 0x2dae20: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2dae20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dae24:
    // 0x2dae24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2dae24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dae28:
    // 0x2dae28: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2dae28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dae2c:
    // 0x2dae2c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2dae2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dae30:
    // 0x2dae30: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2dae30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dae34:
    // 0x2dae34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dae38:
    // 0x2dae38: 0x3e00008  jr          $ra
label_2dae3c:
    if (ctx->pc == 0x2DAE3Cu) {
        ctx->pc = 0x2DAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE38u;
        // 0x2dae3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAE40u;
        goto label_fallthrough_0x2dae38;
    }
    ctx->pc = 0x2DAE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE38u;
        // 0x2dae3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dae38:
    ctx->pc = 0x2DAE40u;
}

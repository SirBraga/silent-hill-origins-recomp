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

// Function: sub_002E4898
// Address: 0x2e4898 - 0x2e4ae8
void sub_002E4898_0x2e4898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4898_0x2e4898");
#endif

    switch (ctx->pc) {
        case 0x2e4898u: goto label_2e4898;
        case 0x2e489cu: goto label_2e489c;
        case 0x2e48a0u: goto label_2e48a0;
        case 0x2e48a4u: goto label_2e48a4;
        case 0x2e48a8u: goto label_2e48a8;
        case 0x2e48acu: goto label_2e48ac;
        case 0x2e48b0u: goto label_2e48b0;
        case 0x2e48b4u: goto label_2e48b4;
        case 0x2e48b8u: goto label_2e48b8;
        case 0x2e48bcu: goto label_2e48bc;
        case 0x2e48c0u: goto label_2e48c0;
        case 0x2e48c4u: goto label_2e48c4;
        case 0x2e48c8u: goto label_2e48c8;
        case 0x2e48ccu: goto label_2e48cc;
        case 0x2e48d0u: goto label_2e48d0;
        case 0x2e48d4u: goto label_2e48d4;
        case 0x2e48d8u: goto label_2e48d8;
        case 0x2e48dcu: goto label_2e48dc;
        case 0x2e48e0u: goto label_2e48e0;
        case 0x2e48e4u: goto label_2e48e4;
        case 0x2e48e8u: goto label_2e48e8;
        case 0x2e48ecu: goto label_2e48ec;
        case 0x2e48f0u: goto label_2e48f0;
        case 0x2e48f4u: goto label_2e48f4;
        case 0x2e48f8u: goto label_2e48f8;
        case 0x2e48fcu: goto label_2e48fc;
        case 0x2e4900u: goto label_2e4900;
        case 0x2e4904u: goto label_2e4904;
        case 0x2e4908u: goto label_2e4908;
        case 0x2e490cu: goto label_2e490c;
        case 0x2e4910u: goto label_2e4910;
        case 0x2e4914u: goto label_2e4914;
        case 0x2e4918u: goto label_2e4918;
        case 0x2e491cu: goto label_2e491c;
        case 0x2e4920u: goto label_2e4920;
        case 0x2e4924u: goto label_2e4924;
        case 0x2e4928u: goto label_2e4928;
        case 0x2e492cu: goto label_2e492c;
        case 0x2e4930u: goto label_2e4930;
        case 0x2e4934u: goto label_2e4934;
        case 0x2e4938u: goto label_2e4938;
        case 0x2e493cu: goto label_2e493c;
        case 0x2e4940u: goto label_2e4940;
        case 0x2e4944u: goto label_2e4944;
        case 0x2e4948u: goto label_2e4948;
        case 0x2e494cu: goto label_2e494c;
        case 0x2e4950u: goto label_2e4950;
        case 0x2e4954u: goto label_2e4954;
        case 0x2e4958u: goto label_2e4958;
        case 0x2e495cu: goto label_2e495c;
        case 0x2e4960u: goto label_2e4960;
        case 0x2e4964u: goto label_2e4964;
        case 0x2e4968u: goto label_2e4968;
        case 0x2e496cu: goto label_2e496c;
        case 0x2e4970u: goto label_2e4970;
        case 0x2e4974u: goto label_2e4974;
        case 0x2e4978u: goto label_2e4978;
        case 0x2e497cu: goto label_2e497c;
        case 0x2e4980u: goto label_2e4980;
        case 0x2e4984u: goto label_2e4984;
        case 0x2e4988u: goto label_2e4988;
        case 0x2e498cu: goto label_2e498c;
        case 0x2e4990u: goto label_2e4990;
        case 0x2e4994u: goto label_2e4994;
        case 0x2e4998u: goto label_2e4998;
        case 0x2e499cu: goto label_2e499c;
        case 0x2e49a0u: goto label_2e49a0;
        case 0x2e49a4u: goto label_2e49a4;
        case 0x2e49a8u: goto label_2e49a8;
        case 0x2e49acu: goto label_2e49ac;
        case 0x2e49b0u: goto label_2e49b0;
        case 0x2e49b4u: goto label_2e49b4;
        case 0x2e49b8u: goto label_2e49b8;
        case 0x2e49bcu: goto label_2e49bc;
        case 0x2e49c0u: goto label_2e49c0;
        case 0x2e49c4u: goto label_2e49c4;
        case 0x2e49c8u: goto label_2e49c8;
        case 0x2e49ccu: goto label_2e49cc;
        case 0x2e49d0u: goto label_2e49d0;
        case 0x2e49d4u: goto label_2e49d4;
        case 0x2e49d8u: goto label_2e49d8;
        case 0x2e49dcu: goto label_2e49dc;
        case 0x2e49e0u: goto label_2e49e0;
        case 0x2e49e4u: goto label_2e49e4;
        case 0x2e49e8u: goto label_2e49e8;
        case 0x2e49ecu: goto label_2e49ec;
        case 0x2e49f0u: goto label_2e49f0;
        case 0x2e49f4u: goto label_2e49f4;
        case 0x2e49f8u: goto label_2e49f8;
        case 0x2e49fcu: goto label_2e49fc;
        case 0x2e4a00u: goto label_2e4a00;
        case 0x2e4a04u: goto label_2e4a04;
        case 0x2e4a08u: goto label_2e4a08;
        case 0x2e4a0cu: goto label_2e4a0c;
        case 0x2e4a10u: goto label_2e4a10;
        case 0x2e4a14u: goto label_2e4a14;
        case 0x2e4a18u: goto label_2e4a18;
        case 0x2e4a1cu: goto label_2e4a1c;
        case 0x2e4a20u: goto label_2e4a20;
        case 0x2e4a24u: goto label_2e4a24;
        case 0x2e4a28u: goto label_2e4a28;
        case 0x2e4a2cu: goto label_2e4a2c;
        case 0x2e4a30u: goto label_2e4a30;
        case 0x2e4a34u: goto label_2e4a34;
        case 0x2e4a38u: goto label_2e4a38;
        case 0x2e4a3cu: goto label_2e4a3c;
        case 0x2e4a40u: goto label_2e4a40;
        case 0x2e4a44u: goto label_2e4a44;
        case 0x2e4a48u: goto label_2e4a48;
        case 0x2e4a4cu: goto label_2e4a4c;
        case 0x2e4a50u: goto label_2e4a50;
        case 0x2e4a54u: goto label_2e4a54;
        case 0x2e4a58u: goto label_2e4a58;
        case 0x2e4a5cu: goto label_2e4a5c;
        case 0x2e4a60u: goto label_2e4a60;
        case 0x2e4a64u: goto label_2e4a64;
        case 0x2e4a68u: goto label_2e4a68;
        case 0x2e4a6cu: goto label_2e4a6c;
        case 0x2e4a70u: goto label_2e4a70;
        case 0x2e4a74u: goto label_2e4a74;
        case 0x2e4a78u: goto label_2e4a78;
        case 0x2e4a7cu: goto label_2e4a7c;
        case 0x2e4a80u: goto label_2e4a80;
        case 0x2e4a84u: goto label_2e4a84;
        case 0x2e4a88u: goto label_2e4a88;
        case 0x2e4a8cu: goto label_2e4a8c;
        case 0x2e4a90u: goto label_2e4a90;
        case 0x2e4a94u: goto label_2e4a94;
        case 0x2e4a98u: goto label_2e4a98;
        case 0x2e4a9cu: goto label_2e4a9c;
        case 0x2e4aa0u: goto label_2e4aa0;
        case 0x2e4aa4u: goto label_2e4aa4;
        case 0x2e4aa8u: goto label_2e4aa8;
        case 0x2e4aacu: goto label_2e4aac;
        case 0x2e4ab0u: goto label_2e4ab0;
        case 0x2e4ab4u: goto label_2e4ab4;
        case 0x2e4ab8u: goto label_2e4ab8;
        case 0x2e4abcu: goto label_2e4abc;
        case 0x2e4ac0u: goto label_2e4ac0;
        case 0x2e4ac4u: goto label_2e4ac4;
        case 0x2e4ac8u: goto label_2e4ac8;
        case 0x2e4accu: goto label_2e4acc;
        case 0x2e4ad0u: goto label_2e4ad0;
        case 0x2e4ad4u: goto label_2e4ad4;
        case 0x2e4ad8u: goto label_2e4ad8;
        case 0x2e4adcu: goto label_2e4adc;
        case 0x2e4ae0u: goto label_2e4ae0;
        case 0x2e4ae4u: goto label_2e4ae4;
        default: break;
    }

    ctx->pc = 0x2e4898u;

label_2e4898:
    // 0x2e4898: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2e4898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2e489c:
    // 0x2e489c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2e489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_2e48a0:
    // 0x2e48a0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2e48a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_2e48a4:
    // 0x2e48a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e48a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e48a8:
    // 0x2e48a8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2e48a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_2e48ac:
    // 0x2e48ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e48acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e48b0:
    // 0x2e48b0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2e48b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_2e48b4:
    // 0x2e48b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e48b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e48b8:
    // 0x2e48b8: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x2e48b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_2e48bc:
    // 0x2e48bc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2e48bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e48c0:
    // 0x2e48c0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2e48c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_2e48c4:
    // 0x2e48c4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2e48c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_2e48c8:
    // 0x2e48c8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2e48c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_2e48cc:
    // 0x2e48cc: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2e48ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_2e48d0:
    // 0x2e48d0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e48d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2e48d4:
    // 0x2e48d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e48d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2e48d8:
    // 0x2e48d8: 0xc0b76b0  jal         func_2DDAC0
label_2e48dc:
    if (ctx->pc == 0x2E48DCu) {
        ctx->pc = 0x2E48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48D8u;
        // 0x2e48dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E48E0u;
        goto label_2e48e0;
    }
    ctx->pc = 0x2E48D8u;
    SET_GPR_U32(ctx, 31, 0x2E48E0u);
    ctx->pc = 0x2E48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48D8u;
    // 0x2e48dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDAC0u, 0x2E48D8u, 0x2E48E0u)) {
        return;
    }
    ctx->pc = 0x2E48E0u;
label_2e48e0:
    // 0x2e48e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e48e4:
    if (ctx->pc == 0x2E48E4u) {
        ctx->pc = 0x2E48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48E0u;
        // 0x2e48e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E48E8u;
        goto label_2e48e8;
    }
    ctx->pc = 0x2E48E0u;
    {
        const bool branch_taken_0x2e48e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48E0u;
        // 0x2e48e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48e0) {
            ctx->pc = 0x2E4918u;
            goto label_2e4918;
        }
    }
    ctx->pc = 0x2E48E8u;
label_2e48e8:
    // 0x2e48e8: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
label_2e48ec:
    if (ctx->pc == 0x2E48ECu) {
        ctx->pc = 0x2E48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48E8u;
        // 0x2e48ec: 0xaef40000  sw          $s4, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E48F0u;
        goto label_2e48f0;
    }
    ctx->pc = 0x2E48E8u;
    {
        const bool branch_taken_0x2e48e8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e48e8) {
            ctx->pc = 0x2E48ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E48E8u;
            // 0x2e48ec: 0xaef40000  sw          $s4, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E48F0u;
            goto label_2e48f0;
        }
    }
    ctx->pc = 0x2E48F0u;
label_2e48f0:
    // 0x2e48f0: 0x10000070  b           . + 4 + (0x70 << 2)
label_2e48f4:
    if (ctx->pc == 0x2E48F4u) {
        ctx->pc = 0x2E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48F0u;
        // 0x2e48f4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E48F8u;
        goto label_2e48f8;
    }
    ctx->pc = 0x2E48F0u;
    {
        const bool branch_taken_0x2e48f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48F0u;
        // 0x2e48f4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48f0) {
            ctx->pc = 0x2E4AB4u;
            goto label_2e4ab4;
        }
    }
    ctx->pc = 0x2E48F8u;
label_2e48f8:
    // 0x2e48f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e48fc:
    // 0x2e48fc: 0x10000015  b           . + 4 + (0x15 << 2)
label_2e4900:
    if (ctx->pc == 0x2E4900u) {
        ctx->pc = 0x2E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48FCu;
        // 0x2e4900: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4904u;
        goto label_2e4904;
    }
    ctx->pc = 0x2E48FCu;
    {
        const bool branch_taken_0x2e48fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48FCu;
        // 0x2e4900: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48fc) {
            ctx->pc = 0x2E4954u;
            goto label_2e4954;
        }
    }
    ctx->pc = 0x2E4904u;
label_2e4904:
    // 0x2e4904: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e4908:
    // 0x2e4908: 0x10000022  b           . + 4 + (0x22 << 2)
label_2e490c:
    if (ctx->pc == 0x2E490Cu) {
        ctx->pc = 0x2E490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4908u;
        // 0x2e490c: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4910u;
        goto label_2e4910;
    }
    ctx->pc = 0x2E4908u;
    {
        const bool branch_taken_0x2e4908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4908u;
        // 0x2e490c: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4908) {
            ctx->pc = 0x2E4994u;
            goto label_2e4994;
        }
    }
    ctx->pc = 0x2E4910u;
label_2e4910:
    // 0x2e4910: 0x10000068  b           . + 4 + (0x68 << 2)
label_2e4914:
    if (ctx->pc == 0x2E4914u) {
        ctx->pc = 0x2E4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4910u;
        // 0x2e4914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4918u;
        goto label_2e4918;
    }
    ctx->pc = 0x2E4910u;
    {
        const bool branch_taken_0x2e4910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4910u;
        // 0x2e4914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4910) {
            ctx->pc = 0x2E4AB4u;
            goto label_2e4ab4;
        }
    }
    ctx->pc = 0x2E4918u;
label_2e4918:
    // 0x2e4918: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e4918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e491c:
    // 0x2e491c: 0x24505518  addiu       $s0, $v0, 0x5518
    ctx->pc = 0x2e491cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
label_2e4920:
    // 0x2e4920: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x2e4920u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4924:
    // 0x2e4924: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e4924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4928:
    // 0x2e4928: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e492c:
    // 0x2e492c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e4930:
    // 0x2e4930: 0xc0b7742  jal         func_2DDD08
label_2e4934:
    if (ctx->pc == 0x2E4934u) {
        ctx->pc = 0x2E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4930u;
        // 0x2e4934: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4938u;
        goto label_2e4938;
    }
    ctx->pc = 0x2E4930u;
    SET_GPR_U32(ctx, 31, 0x2E4938u);
    ctx->pc = 0x2E4934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4930u;
    // 0x2e4934: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDD08u, 0x2E4930u, 0x2E4938u)) {
        return;
    }
    ctx->pc = 0x2E4938u;
label_2e4938:
    // 0x2e4938: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2e493c:
    if (ctx->pc == 0x2E493Cu) {
        ctx->pc = 0x2E493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4938u;
        // 0x2e493c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4940u;
        goto label_2e4940;
    }
    ctx->pc = 0x2E4938u;
    {
        const bool branch_taken_0x2e4938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4938u;
        // 0x2e493c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4938) {
            ctx->pc = 0x2E48F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e48f8;
        }
    }
    ctx->pc = 0x2E4940u;
label_2e4940:
    // 0x2e4940: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2e4940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2e4944:
    // 0x2e4944: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x2e4944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_2e4948:
    // 0x2e4948: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2e494c:
    if (ctx->pc == 0x2E494Cu) {
        ctx->pc = 0x2E494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4948u;
        // 0x2e494c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4950u;
        goto label_2e4950;
    }
    ctx->pc = 0x2E4948u;
    {
        const bool branch_taken_0x2e4948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4948u;
        // 0x2e494c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4948) {
            ctx->pc = 0x2E4928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4928;
        }
    }
    ctx->pc = 0x2E4950u;
label_2e4950:
    // 0x2e4950: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e4950u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4954:
    // 0x2e4954: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2e4958:
    // 0x2e4958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e4958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e495c:
    // 0x2e495c: 0x24505518  addiu       $s0, $v0, 0x5518
    ctx->pc = 0x2e495cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
label_2e4960:
    // 0x2e4960: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e4960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4964:
    // 0x2e4964: 0x0  nop
    ctx->pc = 0x2e4964u;
    // NOP
label_2e4968:
    // 0x2e4968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e496c:
    // 0x2e496c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e4970:
    // 0x2e4970: 0xc0b7742  jal         func_2DDD08
label_2e4974:
    if (ctx->pc == 0x2E4974u) {
        ctx->pc = 0x2E4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4970u;
        // 0x2e4974: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4978u;
        goto label_2e4978;
    }
    ctx->pc = 0x2E4970u;
    SET_GPR_U32(ctx, 31, 0x2E4978u);
    ctx->pc = 0x2E4974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4970u;
    // 0x2e4974: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDD08u, 0x2E4970u, 0x2E4978u)) {
        return;
    }
    ctx->pc = 0x2E4978u;
label_2e4978:
    // 0x2e4978: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2e497c:
    if (ctx->pc == 0x2E497Cu) {
        ctx->pc = 0x2E497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4978u;
        // 0x2e497c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4980u;
        goto label_2e4980;
    }
    ctx->pc = 0x2E4978u;
    {
        const bool branch_taken_0x2e4978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4978u;
        // 0x2e497c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4978) {
            ctx->pc = 0x2E4904u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4904;
        }
    }
    ctx->pc = 0x2E4980u;
label_2e4980:
    // 0x2e4980: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2e4980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2e4984:
    // 0x2e4984: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x2e4984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_2e4988:
    // 0x2e4988: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2e498c:
    if (ctx->pc == 0x2E498Cu) {
        ctx->pc = 0x2E498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4988u;
        // 0x2e498c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4990u;
        goto label_2e4990;
    }
    ctx->pc = 0x2E4988u;
    {
        const bool branch_taken_0x2e4988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4988u;
        // 0x2e498c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4988) {
            ctx->pc = 0x2E4968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4968;
        }
    }
    ctx->pc = 0x2E4990u;
label_2e4990:
    // 0x2e4990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4994:
    // 0x2e4994: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e4994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e4998:
    // 0x2e4998: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2e4998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e499c:
    // 0x2e499c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e49a0:
    // 0x2e49a0: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x2e49a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e49a4:
    // 0x2e49a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e49a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e49a8:
    // 0x2e49a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2e49ac:
    // 0x2e49ac: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2e49acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e49b0:
    // 0x2e49b0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2e49b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e49b4:
    // 0x2e49b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2e49b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e49b8:
    // 0x2e49b8: 0xc0b9144  jal         func_2E4510
label_2e49bc:
    if (ctx->pc == 0x2E49BCu) {
        ctx->pc = 0x2E49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49B8u;
        // 0x2e49bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E49C0u;
        goto label_2e49c0;
    }
    ctx->pc = 0x2E49B8u;
    SET_GPR_U32(ctx, 31, 0x2E49C0u);
    ctx->pc = 0x2E49BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E49B8u;
    // 0x2e49bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4510u, 0x2E49B8u, 0x2E49C0u)) {
        return;
    }
    ctx->pc = 0x2E49C0u;
label_2e49c0:
    // 0x2e49c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e49c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e49c4:
    // 0x2e49c4: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x2e49c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2e49c8:
    // 0x2e49c8: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x2e49c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2e49cc:
    // 0x2e49cc: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x2e49ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2e49d0:
    // 0x2e49d0: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x2e49d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2e49d4:
    // 0x2e49d4: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x2e49d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2e49d8:
    // 0x2e49d8: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x2e49d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2e49dc:
    // 0x2e49dc: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x2e49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2e49e0:
    // 0x2e49e0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x2e49e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e49e4:
    // 0x2e49e4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x2e49e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e49e8:
    // 0x2e49e8: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x2e49e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e49ec:
    // 0x2e49ec: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x2e49ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e49f0:
    // 0x2e49f0: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x2e49f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e49f4:
    // 0x2e49f4: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x2e49f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e49f8:
    // 0x2e49f8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2e49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2e49fc:
    // 0x2e49fc: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_2e4a00:
    if (ctx->pc == 0x2E4A00u) {
        ctx->pc = 0x2E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49FCu;
        // 0x2e4a00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A04u;
        goto label_2e4a04;
    }
    ctx->pc = 0x2E49FCu;
    {
        const bool branch_taken_0x2e49fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49FCu;
        // 0x2e4a00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49fc) {
            ctx->pc = 0x2E4AA0u;
            goto label_2e4aa0;
        }
    }
    ctx->pc = 0x2E4A04u;
label_2e4a04:
    // 0x2e4a04: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2e4a04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e4a08:
    // 0x2e4a08: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e4a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e4a0c:
    // 0x2e4a0c: 0x0  nop
    ctx->pc = 0x2e4a0cu;
    // NOP
label_2e4a10:
    // 0x2e4a10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e4a14:
    // 0x2e4a14: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e4a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e4a18:
    // 0x2e4a18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4a1c:
    // 0x2e4a1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e4a20:
    // 0x2e4a20: 0xc0b7720  jal         func_2DDC80
label_2e4a24:
    if (ctx->pc == 0x2E4A24u) {
        ctx->pc = 0x2E4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A20u;
        // 0x2e4a24: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A28u;
        goto label_2e4a28;
    }
    ctx->pc = 0x2E4A20u;
    SET_GPR_U32(ctx, 31, 0x2E4A28u);
    ctx->pc = 0x2E4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A20u;
    // 0x2e4a24: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2E4A20u, 0x2E4A28u)) {
        return;
    }
    ctx->pc = 0x2E4A28u;
label_2e4a28:
    // 0x2e4a28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e4a2c:
    // 0x2e4a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e4a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e4a30:
    // 0x2e4a30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2e4a34:
    // 0x2e4a34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e4a38:
    // 0x2e4a38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e4a3c:
    if (ctx->pc == 0x2E4A3Cu) {
        ctx->pc = 0x2E4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A38u;
        // 0x2e4a3c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A40u;
        goto label_2e4a40;
    }
    ctx->pc = 0x2E4A38u;
    {
        const bool branch_taken_0x2e4a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A38u;
        // 0x2e4a3c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a38) {
            ctx->pc = 0x2E4A44u;
            goto label_2e4a44;
        }
    }
    ctx->pc = 0x2E4A40u;
label_2e4a40:
    // 0x2e4a40: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e4a44:
    // 0x2e4a44: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2e4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2e4a48:
    // 0x2e4a48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e4a4c:
    // 0x2e4a4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e4a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e4a50:
    // 0x2e4a50: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2e4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e4a54:
    // 0x2e4a54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e4a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e4a58:
    // 0x2e4a58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e4a5c:
    // 0x2e4a5c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e4a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e4a60:
    // 0x2e4a60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e4a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4a64:
    // 0x2e4a64: 0x40f809  jalr        $v0
label_2e4a68:
    if (ctx->pc == 0x2E4A68u) {
        ctx->pc = 0x2E4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A64u;
        // 0x2e4a68: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A6Cu;
        goto label_2e4a6c;
    }
    ctx->pc = 0x2E4A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4A6Cu);
        ctx->pc = 0x2E4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A64u;
        // 0x2e4a68: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4A64u, 0x2E4A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4A6Cu;
label_2e4a6c:
    // 0x2e4a6c: 0x1040ffa8  beqz        $v0, . + 4 + (-0x58 << 2)
label_2e4a70:
    if (ctx->pc == 0x2E4A70u) {
        ctx->pc = 0x2E4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A6Cu;
        // 0x2e4a70: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A74u;
        goto label_2e4a74;
    }
    ctx->pc = 0x2E4A6Cu;
    {
        const bool branch_taken_0x2e4a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A6Cu;
        // 0x2e4a70: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a6c) {
            ctx->pc = 0x2E4910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4910;
        }
    }
    ctx->pc = 0x2E4A74u;
label_2e4a74:
    // 0x2e4a74: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2e4a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e4a78:
    // 0x2e4a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e4a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e4a7c:
    // 0x2e4a7c: 0xdfa40060  ld          $a0, 0x60($sp)
    ctx->pc = 0x2e4a7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e4a80:
    // 0x2e4a80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e4a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e4a84:
    // 0x2e4a84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2e4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2e4a88:
    // 0x2e4a88: 0x232282b  sltu        $a1, $s1, $s2
    ctx->pc = 0x2e4a88u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2e4a8c:
    // 0x2e4a8c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e4a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2e4a90:
    // 0x2e4a90: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x2e4a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
label_2e4a94:
    // 0x2e4a94: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2e4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_2e4a98:
    // 0x2e4a98: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
label_2e4a9c:
    if (ctx->pc == 0x2E4A9Cu) {
        ctx->pc = 0x2E4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A98u;
        // 0x2e4a9c: 0x8fb40070  lw          $s4, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4AA0u;
        goto label_2e4aa0;
    }
    ctx->pc = 0x2E4A98u;
    {
        const bool branch_taken_0x2e4a98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A98u;
        // 0x2e4a9c: 0x8fb40070  lw          $s4, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a98) {
            ctx->pc = 0x2E4A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4a10;
        }
    }
    ctx->pc = 0x2E4AA0u;
label_2e4aa0:
    // 0x2e4aa0: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_2e4aa4:
    if (ctx->pc == 0x2E4AA4u) {
        ctx->pc = 0x2E4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AA0u;
        // 0x2e4aa4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4AA8u;
        goto label_2e4aa8;
    }
    ctx->pc = 0x2E4AA0u;
    {
        const bool branch_taken_0x2e4aa0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AA0u;
        // 0x2e4aa4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4aa0) {
            ctx->pc = 0x2E4AB0u;
            goto label_2e4ab0;
        }
    }
    ctx->pc = 0x2E4AA8u;
label_2e4aa8:
    // 0x2e4aa8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2e4aac:
    // 0x2e4aac: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2e4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_2e4ab0:
    // 0x2e4ab0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e4ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e4ab4:
    // 0x2e4ab4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2e4ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2e4ab8:
    // 0x2e4ab8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2e4ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2e4abc:
    // 0x2e4abc: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2e4abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e4ac0:
    // 0x2e4ac0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2e4ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e4ac4:
    // 0x2e4ac4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2e4ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e4ac8:
    // 0x2e4ac8: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2e4ac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e4acc:
    // 0x2e4acc: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2e4accu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e4ad0:
    // 0x2e4ad0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2e4ad0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e4ad4:
    // 0x2e4ad4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e4ad4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e4ad8:
    // 0x2e4ad8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e4ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2e4adc:
    // 0x2e4adc: 0x3e00008  jr          $ra
label_2e4ae0:
    if (ctx->pc == 0x2E4AE0u) {
        ctx->pc = 0x2E4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4ADCu;
        // 0x2e4ae0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4AE4u;
        goto label_2e4ae4;
    }
    ctx->pc = 0x2E4ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4ADCu;
        // 0x2e4ae0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4AE4u;
label_2e4ae4:
    // 0x2e4ae4: 0x0  nop
    ctx->pc = 0x2e4ae4u;
    // NOP
    ctx->pc = 0x2e4ae8u;
}

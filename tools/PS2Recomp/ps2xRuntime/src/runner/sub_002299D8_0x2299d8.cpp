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

// Function: sub_002299D8
// Address: 0x2299d8 - 0x229cf8
void sub_002299D8_0x2299d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002299D8_0x2299d8");
#endif

    switch (ctx->pc) {
        case 0x2299d8u: goto label_2299d8;
        case 0x2299dcu: goto label_2299dc;
        case 0x2299e0u: goto label_2299e0;
        case 0x2299e4u: goto label_2299e4;
        case 0x2299e8u: goto label_2299e8;
        case 0x2299ecu: goto label_2299ec;
        case 0x2299f0u: goto label_2299f0;
        case 0x2299f4u: goto label_2299f4;
        case 0x2299f8u: goto label_2299f8;
        case 0x2299fcu: goto label_2299fc;
        case 0x229a00u: goto label_229a00;
        case 0x229a04u: goto label_229a04;
        case 0x229a08u: goto label_229a08;
        case 0x229a0cu: goto label_229a0c;
        case 0x229a10u: goto label_229a10;
        case 0x229a14u: goto label_229a14;
        case 0x229a18u: goto label_229a18;
        case 0x229a1cu: goto label_229a1c;
        case 0x229a20u: goto label_229a20;
        case 0x229a24u: goto label_229a24;
        case 0x229a28u: goto label_229a28;
        case 0x229a2cu: goto label_229a2c;
        case 0x229a30u: goto label_229a30;
        case 0x229a34u: goto label_229a34;
        case 0x229a38u: goto label_229a38;
        case 0x229a3cu: goto label_229a3c;
        case 0x229a40u: goto label_229a40;
        case 0x229a44u: goto label_229a44;
        case 0x229a48u: goto label_229a48;
        case 0x229a4cu: goto label_229a4c;
        case 0x229a50u: goto label_229a50;
        case 0x229a54u: goto label_229a54;
        case 0x229a58u: goto label_229a58;
        case 0x229a5cu: goto label_229a5c;
        case 0x229a60u: goto label_229a60;
        case 0x229a64u: goto label_229a64;
        case 0x229a68u: goto label_229a68;
        case 0x229a6cu: goto label_229a6c;
        case 0x229a70u: goto label_229a70;
        case 0x229a74u: goto label_229a74;
        case 0x229a78u: goto label_229a78;
        case 0x229a7cu: goto label_229a7c;
        case 0x229a80u: goto label_229a80;
        case 0x229a84u: goto label_229a84;
        case 0x229a88u: goto label_229a88;
        case 0x229a8cu: goto label_229a8c;
        case 0x229a90u: goto label_229a90;
        case 0x229a94u: goto label_229a94;
        case 0x229a98u: goto label_229a98;
        case 0x229a9cu: goto label_229a9c;
        case 0x229aa0u: goto label_229aa0;
        case 0x229aa4u: goto label_229aa4;
        case 0x229aa8u: goto label_229aa8;
        case 0x229aacu: goto label_229aac;
        case 0x229ab0u: goto label_229ab0;
        case 0x229ab4u: goto label_229ab4;
        case 0x229ab8u: goto label_229ab8;
        case 0x229abcu: goto label_229abc;
        case 0x229ac0u: goto label_229ac0;
        case 0x229ac4u: goto label_229ac4;
        case 0x229ac8u: goto label_229ac8;
        case 0x229accu: goto label_229acc;
        case 0x229ad0u: goto label_229ad0;
        case 0x229ad4u: goto label_229ad4;
        case 0x229ad8u: goto label_229ad8;
        case 0x229adcu: goto label_229adc;
        case 0x229ae0u: goto label_229ae0;
        case 0x229ae4u: goto label_229ae4;
        case 0x229ae8u: goto label_229ae8;
        case 0x229aecu: goto label_229aec;
        case 0x229af0u: goto label_229af0;
        case 0x229af4u: goto label_229af4;
        case 0x229af8u: goto label_229af8;
        case 0x229afcu: goto label_229afc;
        case 0x229b00u: goto label_229b00;
        case 0x229b04u: goto label_229b04;
        case 0x229b08u: goto label_229b08;
        case 0x229b0cu: goto label_229b0c;
        case 0x229b10u: goto label_229b10;
        case 0x229b14u: goto label_229b14;
        case 0x229b18u: goto label_229b18;
        case 0x229b1cu: goto label_229b1c;
        case 0x229b20u: goto label_229b20;
        case 0x229b24u: goto label_229b24;
        case 0x229b28u: goto label_229b28;
        case 0x229b2cu: goto label_229b2c;
        case 0x229b30u: goto label_229b30;
        case 0x229b34u: goto label_229b34;
        case 0x229b38u: goto label_229b38;
        case 0x229b3cu: goto label_229b3c;
        case 0x229b40u: goto label_229b40;
        case 0x229b44u: goto label_229b44;
        case 0x229b48u: goto label_229b48;
        case 0x229b4cu: goto label_229b4c;
        case 0x229b50u: goto label_229b50;
        case 0x229b54u: goto label_229b54;
        case 0x229b58u: goto label_229b58;
        case 0x229b5cu: goto label_229b5c;
        case 0x229b60u: goto label_229b60;
        case 0x229b64u: goto label_229b64;
        case 0x229b68u: goto label_229b68;
        case 0x229b6cu: goto label_229b6c;
        case 0x229b70u: goto label_229b70;
        case 0x229b74u: goto label_229b74;
        case 0x229b78u: goto label_229b78;
        case 0x229b7cu: goto label_229b7c;
        case 0x229b80u: goto label_229b80;
        case 0x229b84u: goto label_229b84;
        case 0x229b88u: goto label_229b88;
        case 0x229b8cu: goto label_229b8c;
        case 0x229b90u: goto label_229b90;
        case 0x229b94u: goto label_229b94;
        case 0x229b98u: goto label_229b98;
        case 0x229b9cu: goto label_229b9c;
        case 0x229ba0u: goto label_229ba0;
        case 0x229ba4u: goto label_229ba4;
        case 0x229ba8u: goto label_229ba8;
        case 0x229bacu: goto label_229bac;
        case 0x229bb0u: goto label_229bb0;
        case 0x229bb4u: goto label_229bb4;
        case 0x229bb8u: goto label_229bb8;
        case 0x229bbcu: goto label_229bbc;
        case 0x229bc0u: goto label_229bc0;
        case 0x229bc4u: goto label_229bc4;
        case 0x229bc8u: goto label_229bc8;
        case 0x229bccu: goto label_229bcc;
        case 0x229bd0u: goto label_229bd0;
        case 0x229bd4u: goto label_229bd4;
        case 0x229bd8u: goto label_229bd8;
        case 0x229bdcu: goto label_229bdc;
        case 0x229be0u: goto label_229be0;
        case 0x229be4u: goto label_229be4;
        case 0x229be8u: goto label_229be8;
        case 0x229becu: goto label_229bec;
        case 0x229bf0u: goto label_229bf0;
        case 0x229bf4u: goto label_229bf4;
        case 0x229bf8u: goto label_229bf8;
        case 0x229bfcu: goto label_229bfc;
        case 0x229c00u: goto label_229c00;
        case 0x229c04u: goto label_229c04;
        case 0x229c08u: goto label_229c08;
        case 0x229c0cu: goto label_229c0c;
        case 0x229c10u: goto label_229c10;
        case 0x229c14u: goto label_229c14;
        case 0x229c18u: goto label_229c18;
        case 0x229c1cu: goto label_229c1c;
        case 0x229c20u: goto label_229c20;
        case 0x229c24u: goto label_229c24;
        case 0x229c28u: goto label_229c28;
        case 0x229c2cu: goto label_229c2c;
        case 0x229c30u: goto label_229c30;
        case 0x229c34u: goto label_229c34;
        case 0x229c38u: goto label_229c38;
        case 0x229c3cu: goto label_229c3c;
        case 0x229c40u: goto label_229c40;
        case 0x229c44u: goto label_229c44;
        case 0x229c48u: goto label_229c48;
        case 0x229c4cu: goto label_229c4c;
        case 0x229c50u: goto label_229c50;
        case 0x229c54u: goto label_229c54;
        case 0x229c58u: goto label_229c58;
        case 0x229c5cu: goto label_229c5c;
        case 0x229c60u: goto label_229c60;
        case 0x229c64u: goto label_229c64;
        case 0x229c68u: goto label_229c68;
        case 0x229c6cu: goto label_229c6c;
        case 0x229c70u: goto label_229c70;
        case 0x229c74u: goto label_229c74;
        case 0x229c78u: goto label_229c78;
        case 0x229c7cu: goto label_229c7c;
        case 0x229c80u: goto label_229c80;
        case 0x229c84u: goto label_229c84;
        case 0x229c88u: goto label_229c88;
        case 0x229c8cu: goto label_229c8c;
        case 0x229c90u: goto label_229c90;
        case 0x229c94u: goto label_229c94;
        case 0x229c98u: goto label_229c98;
        case 0x229c9cu: goto label_229c9c;
        case 0x229ca0u: goto label_229ca0;
        case 0x229ca4u: goto label_229ca4;
        case 0x229ca8u: goto label_229ca8;
        case 0x229cacu: goto label_229cac;
        case 0x229cb0u: goto label_229cb0;
        case 0x229cb4u: goto label_229cb4;
        case 0x229cb8u: goto label_229cb8;
        case 0x229cbcu: goto label_229cbc;
        case 0x229cc0u: goto label_229cc0;
        case 0x229cc4u: goto label_229cc4;
        case 0x229cc8u: goto label_229cc8;
        case 0x229cccu: goto label_229ccc;
        case 0x229cd0u: goto label_229cd0;
        case 0x229cd4u: goto label_229cd4;
        case 0x229cd8u: goto label_229cd8;
        case 0x229cdcu: goto label_229cdc;
        case 0x229ce0u: goto label_229ce0;
        case 0x229ce4u: goto label_229ce4;
        case 0x229ce8u: goto label_229ce8;
        case 0x229cecu: goto label_229cec;
        case 0x229cf0u: goto label_229cf0;
        case 0x229cf4u: goto label_229cf4;
        default: break;
    }

    ctx->pc = 0x2299d8u;

label_2299d8:
    // 0x2299d8: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x2299d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_2299dc:
    // 0x2299dc: 0x7fb002a0  sq          $s0, 0x2A0($sp)
    ctx->pc = 0x2299dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 16));
label_2299e0:
    // 0x2299e0: 0x7fb10290  sq          $s1, 0x290($sp)
    ctx->pc = 0x2299e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 17));
label_2299e4:
    // 0x2299e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2299e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2299e8:
    // 0x2299e8: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x2299e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
label_2299ec:
    // 0x2299ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2299ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2299f0:
    // 0x2299f0: 0x7fb40260  sq          $s4, 0x260($sp)
    ctx->pc = 0x2299f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 20));
label_2299f4:
    // 0x2299f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2299f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2299f8:
    // 0x2299f8: 0x7fb50250  sq          $s5, 0x250($sp)
    ctx->pc = 0x2299f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 21));
label_2299fc:
    // 0x2299fc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2299fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_229a00:
    // 0x229a00: 0x7fb60240  sq          $s6, 0x240($sp)
    ctx->pc = 0x229a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 22));
label_229a04:
    // 0x229a04: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x229a04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_229a08:
    // 0x229a08: 0x7fb70230  sq          $s7, 0x230($sp)
    ctx->pc = 0x229a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 23));
label_229a0c:
    // 0x229a0c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x229a0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_229a10:
    // 0x229a10: 0x7fb20280  sq          $s2, 0x280($sp)
    ctx->pc = 0x229a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 18));
label_229a14:
    // 0x229a14: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x229a14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_229a18:
    // 0x229a18: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x229a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
label_229a1c:
    // 0x229a1c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x229a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_229a20:
    // 0x229a20: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x229a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_229a24:
    // 0x229a24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x229a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_229a28:
    // 0x229a28: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_229a2c:
    // 0x229a2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229a30:
    // 0x229a30: 0x40f809  jalr        $v0
label_229a34:
    if (ctx->pc == 0x229A34u) {
        ctx->pc = 0x229A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A30u;
        // 0x229a34: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A38u;
        goto label_229a38;
    }
    ctx->pc = 0x229A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229A38u);
        ctx->pc = 0x229A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A30u;
        // 0x229a34: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A30u, 0x229A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229A38u;
label_229a38:
    // 0x229a38: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x229a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_229a3c:
    // 0x229a3c: 0x40f809  jalr        $v0
label_229a40:
    if (ctx->pc == 0x229A40u) {
        ctx->pc = 0x229A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A3Cu;
        // 0x229a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A44u;
        goto label_229a44;
    }
    ctx->pc = 0x229A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229A44u);
        ctx->pc = 0x229A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A3Cu;
        // 0x229a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A3Cu, 0x229A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229A44u;
label_229a44:
    // 0x229a44: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x229a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_229a48:
    // 0x229a48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_229a4c:
    if (ctx->pc == 0x229A4Cu) {
        ctx->pc = 0x229A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A48u;
        // 0x229a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A50u;
        goto label_229a50;
    }
    ctx->pc = 0x229A48u;
    {
        const bool branch_taken_0x229a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A48u;
        // 0x229a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a48) {
            ctx->pc = 0x229A80u;
            goto label_229a80;
        }
    }
    ctx->pc = 0x229A50u;
label_229a50:
    // 0x229a50: 0x820800ff  lb          $t0, 0xFF($s0)
    ctx->pc = 0x229a50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 255)));
label_229a54:
    // 0x229a54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x229a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_229a58:
    // 0x229a58: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x229a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_229a5c:
    // 0x229a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229a60:
    // 0x229a60: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x229a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_229a64:
    // 0x229a64: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x229a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_229a68:
    // 0x229a68: 0xc092848  jal         func_24A120
label_229a6c:
    if (ctx->pc == 0x229A6Cu) {
        ctx->pc = 0x229A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A68u;
        // 0x229a6c: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A70u;
        goto label_229a70;
    }
    ctx->pc = 0x229A68u;
    SET_GPR_U32(ctx, 31, 0x229A70u);
    ctx->pc = 0x229A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A68u;
    // 0x229a6c: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x229A68u, 0x229A70u)) {
        return;
    }
    ctx->pc = 0x229A70u;
label_229a70:
    // 0x229a70: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x229a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_229a74:
    // 0x229a74: 0xc09281a  jal         func_24A068
label_229a78:
    if (ctx->pc == 0x229A78u) {
        ctx->pc = 0x229A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A74u;
        // 0x229a78: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A7Cu;
        goto label_229a7c;
    }
    ctx->pc = 0x229A74u;
    SET_GPR_U32(ctx, 31, 0x229A7Cu);
    ctx->pc = 0x229A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A74u;
    // 0x229a78: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x229A74u, 0x229A7Cu)) {
        return;
    }
    ctx->pc = 0x229A7Cu;
label_229a7c:
    // 0x229a7c: 0xa3a000ff  sb          $zero, 0xFF($sp)
    ctx->pc = 0x229a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
label_229a80:
    // 0x229a80: 0xc089e32  jal         func_2278C8
label_229a84:
    if (ctx->pc == 0x229A84u) {
        ctx->pc = 0x229A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A80u;
        // 0x229a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A88u;
        goto label_229a88;
    }
    ctx->pc = 0x229A80u;
    SET_GPR_U32(ctx, 31, 0x229A88u);
    ctx->pc = 0x229A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A80u;
    // 0x229a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2278C8u, 0x229A80u, 0x229A88u)) {
        return;
    }
    ctx->pc = 0x229A88u;
label_229a88:
    // 0x229a88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229a8c:
    // 0x229a8c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_229a90:
    if (ctx->pc == 0x229A90u) {
        ctx->pc = 0x229A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A8Cu;
        // 0x229a90: 0xa3a00100  sb          $zero, 0x100($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A94u;
        goto label_229a94;
    }
    ctx->pc = 0x229A8Cu;
    {
        const bool branch_taken_0x229a8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a8c) {
            ctx->pc = 0x229A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229A8Cu;
            // 0x229a90: 0xa3a00100  sb          $zero, 0x100($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229AA4u;
            goto label_229aa4;
        }
    }
    ctx->pc = 0x229A94u;
label_229a94:
    // 0x229a94: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x229a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_229a98:
    // 0x229a98: 0x40f809  jalr        $v0
label_229a9c:
    if (ctx->pc == 0x229A9Cu) {
        ctx->pc = 0x229A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A98u;
        // 0x229a9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AA0u;
        goto label_229aa0;
    }
    ctx->pc = 0x229A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229AA0u);
        ctx->pc = 0x229A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A98u;
        // 0x229a9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A98u, 0x229AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229AA0u;
label_229aa0:
    // 0x229aa0: 0xa3a00100  sb          $zero, 0x100($sp)
    ctx->pc = 0x229aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
label_229aa4:
    // 0x229aa4: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_229aa8:
    if (ctx->pc == 0x229AA8u) {
        ctx->pc = 0x229AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AA4u;
        // 0x229aa8: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AACu;
        goto label_229aac;
    }
    ctx->pc = 0x229AA4u;
    {
        const bool branch_taken_0x229aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AA4u;
        // 0x229aa8: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229aa4) {
            ctx->pc = 0x229B30u;
            goto label_229b30;
        }
    }
    ctx->pc = 0x229AACu;
label_229aac:
    // 0x229aac: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x229aacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_229ab0:
    // 0x229ab0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_229ab4:
    if (ctx->pc == 0x229AB4u) {
        ctx->pc = 0x229AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AB0u;
        // 0x229ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AB8u;
        goto label_229ab8;
    }
    ctx->pc = 0x229AB0u;
    {
        const bool branch_taken_0x229ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AB0u;
        // 0x229ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ab0) {
            ctx->pc = 0x229B30u;
            goto label_229b30;
        }
    }
    ctx->pc = 0x229AB8u;
label_229ab8:
    // 0x229ab8: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_229abc:
    // 0x229abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x229abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229ac0:
    // 0x229ac0: 0x40f809  jalr        $v0
label_229ac4:
    if (ctx->pc == 0x229AC4u) {
        ctx->pc = 0x229AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AC0u;
        // 0x229ac4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AC8u;
        goto label_229ac8;
    }
    ctx->pc = 0x229AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229AC8u);
        ctx->pc = 0x229AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AC0u;
        // 0x229ac4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229AC0u, 0x229AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229AC8u;
label_229ac8:
    // 0x229ac8: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_229acc:
    // 0x229acc: 0x40f809  jalr        $v0
label_229ad0:
    if (ctx->pc == 0x229AD0u) {
        ctx->pc = 0x229AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ACCu;
        // 0x229ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AD4u;
        goto label_229ad4;
    }
    ctx->pc = 0x229ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229AD4u);
        ctx->pc = 0x229AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ACCu;
        // 0x229ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229ACCu, 0x229AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229AD4u;
label_229ad4:
    // 0x229ad4: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x229ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_229ad8:
    // 0x229ad8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_229adc:
    if (ctx->pc == 0x229ADCu) {
        ctx->pc = 0x229ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AD8u;
        // 0x229adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AE0u;
        goto label_229ae0;
    }
    ctx->pc = 0x229AD8u;
    {
        const bool branch_taken_0x229ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AD8u;
        // 0x229adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ad8) {
            ctx->pc = 0x229B10u;
            goto label_229b10;
        }
    }
    ctx->pc = 0x229AE0u;
label_229ae0:
    // 0x229ae0: 0x822800ff  lb          $t0, 0xFF($s1)
    ctx->pc = 0x229ae0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 255)));
label_229ae4:
    // 0x229ae4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x229ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_229ae8:
    // 0x229ae8: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x229ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_229aec:
    // 0x229aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x229aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229af0:
    // 0x229af0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x229af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_229af4:
    // 0x229af4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x229af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_229af8:
    // 0x229af8: 0xc092848  jal         func_24A120
label_229afc:
    if (ctx->pc == 0x229AFCu) {
        ctx->pc = 0x229AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AF8u;
        // 0x229afc: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B00u;
        goto label_229b00;
    }
    ctx->pc = 0x229AF8u;
    SET_GPR_U32(ctx, 31, 0x229B00u);
    ctx->pc = 0x229AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF8u;
    // 0x229afc: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x229AF8u, 0x229B00u)) {
        return;
    }
    ctx->pc = 0x229B00u;
label_229b00:
    // 0x229b00: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x229b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_229b04:
    // 0x229b04: 0xc09281a  jal         func_24A068
label_229b08:
    if (ctx->pc == 0x229B08u) {
        ctx->pc = 0x229B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B04u;
        // 0x229b08: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B0Cu;
        goto label_229b0c;
    }
    ctx->pc = 0x229B04u;
    SET_GPR_U32(ctx, 31, 0x229B0Cu);
    ctx->pc = 0x229B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B04u;
    // 0x229b08: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x229B04u, 0x229B0Cu)) {
        return;
    }
    ctx->pc = 0x229B0Cu;
label_229b0c:
    // 0x229b0c: 0xa3a001ff  sb          $zero, 0x1FF($sp)
    ctx->pc = 0x229b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 511), (uint8_t)GPR_U32(ctx, 0));
label_229b10:
    // 0x229b10: 0xc089e32  jal         func_2278C8
label_229b14:
    if (ctx->pc == 0x229B14u) {
        ctx->pc = 0x229B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B10u;
        // 0x229b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B18u;
        goto label_229b18;
    }
    ctx->pc = 0x229B10u;
    SET_GPR_U32(ctx, 31, 0x229B18u);
    ctx->pc = 0x229B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B10u;
    // 0x229b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2278C8u, 0x229B10u, 0x229B18u)) {
        return;
    }
    ctx->pc = 0x229B18u;
label_229b18:
    // 0x229b18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229b1c:
    // 0x229b1c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_229b20:
    if (ctx->pc == 0x229B20u) {
        ctx->pc = 0x229B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B1Cu;
        // 0x229b20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B24u;
        goto label_229b24;
    }
    ctx->pc = 0x229B1Cu;
    {
        const bool branch_taken_0x229b1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B1Cu;
        // 0x229b20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b1c) {
            ctx->pc = 0x229B34u;
            goto label_229b34;
        }
    }
    ctx->pc = 0x229B24u;
label_229b24:
    // 0x229b24: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x229b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_229b28:
    // 0x229b28: 0x40f809  jalr        $v0
label_229b2c:
    if (ctx->pc == 0x229B2Cu) {
        ctx->pc = 0x229B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B28u;
        // 0x229b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B30u;
        goto label_229b30;
    }
    ctx->pc = 0x229B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229B30u);
        ctx->pc = 0x229B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B28u;
        // 0x229b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229B28u, 0x229B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229B30u;
label_229b30:
    // 0x229b30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x229b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_229b34:
    // 0x229b34: 0xc089ea8  jal         func_227AA0
label_229b38:
    if (ctx->pc == 0x229B38u) {
        ctx->pc = 0x229B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B34u;
        // 0x229b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B3Cu;
        goto label_229b3c;
    }
    ctx->pc = 0x229B34u;
    SET_GPR_U32(ctx, 31, 0x229B3Cu);
    ctx->pc = 0x229B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B34u;
    // 0x229b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227AA0u, 0x229B34u, 0x229B3Cu)) {
        return;
    }
    ctx->pc = 0x229B3Cu;
label_229b3c:
    // 0x229b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x229b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229b40:
    // 0x229b40: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x229b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_229b44:
    // 0x229b44: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
label_229b48:
    if (ctx->pc == 0x229B48u) {
        ctx->pc = 0x229B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B44u;
        // 0x229b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B4Cu;
        goto label_229b4c;
    }
    ctx->pc = 0x229B44u;
    {
        const bool branch_taken_0x229b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B44u;
        // 0x229b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b44) {
            ctx->pc = 0x229CCCu;
            goto label_229ccc;
        }
    }
    ctx->pc = 0x229B4Cu;
label_229b4c:
    // 0x229b4c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x229b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_229b50:
    // 0x229b50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_229b54:
    if (ctx->pc == 0x229B54u) {
        ctx->pc = 0x229B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B50u;
        // 0x229b54: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B58u;
        goto label_229b58;
    }
    ctx->pc = 0x229B50u;
    {
        const bool branch_taken_0x229b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b50) {
            ctx->pc = 0x229B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229B50u;
            // 0x229b54: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229B68u;
            goto label_229b68;
        }
    }
    ctx->pc = 0x229B58u;
label_229b58:
    // 0x229b58: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x229b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_229b5c:
    // 0x229b5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_229b60:
    if (ctx->pc == 0x229B60u) {
        ctx->pc = 0x229B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B5Cu;
        // 0x229b60: 0x8fb00210  lw          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B64u;
        goto label_229b64;
    }
    ctx->pc = 0x229B5Cu;
    {
        const bool branch_taken_0x229b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B5Cu;
        // 0x229b60: 0x8fb00210  lw          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b5c) {
            ctx->pc = 0x229BB8u;
            goto label_229bb8;
        }
    }
    ctx->pc = 0x229B64u;
label_229b64:
    // 0x229b64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x229b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_229b68:
    // 0x229b68: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x229b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_229b6c:
    // 0x229b6c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x229b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_229b70:
    // 0x229b70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x229b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_229b74:
    // 0x229b74: 0xc08a080  jal         func_228200
label_229b78:
    if (ctx->pc == 0x229B78u) {
        ctx->pc = 0x229B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B74u;
        // 0x229b78: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B7Cu;
        goto label_229b7c;
    }
    ctx->pc = 0x229B74u;
    SET_GPR_U32(ctx, 31, 0x229B7Cu);
    ctx->pc = 0x229B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B74u;
    // 0x229b78: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228200u, 0x229B74u, 0x229B7Cu)) {
        return;
    }
    ctx->pc = 0x229B7Cu;
label_229b7c:
    // 0x229b7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_229b80:
    if (ctx->pc == 0x229B80u) {
        ctx->pc = 0x229B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B7Cu;
        // 0x229b80: 0x8fb00210  lw          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B84u;
        goto label_229b84;
    }
    ctx->pc = 0x229B7Cu;
    {
        const bool branch_taken_0x229b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B7Cu;
        // 0x229b80: 0x8fb00210  lw          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b7c) {
            ctx->pc = 0x229BB8u;
            goto label_229bb8;
        }
    }
    ctx->pc = 0x229B84u;
label_229b84:
    // 0x229b84: 0xc089b96  jal         func_226E58
label_229b88:
    if (ctx->pc == 0x229B88u) {
        ctx->pc = 0x229B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B84u;
        // 0x229b88: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B8Cu;
        goto label_229b8c;
    }
    ctx->pc = 0x229B84u;
    SET_GPR_U32(ctx, 31, 0x229B8Cu);
    ctx->pc = 0x229B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B84u;
    // 0x229b88: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229B84u, 0x229B8Cu)) {
        return;
    }
    ctx->pc = 0x229B8Cu;
label_229b8c:
    // 0x229b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229b90:
    // 0x229b90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_229b94:
    // 0x229b94: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x229b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
label_229b98:
    // 0x229b98: 0xc092848  jal         func_24A120
label_229b9c:
    if (ctx->pc == 0x229B9Cu) {
        ctx->pc = 0x229B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B98u;
        // 0x229b9c: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BA0u;
        goto label_229ba0;
    }
    ctx->pc = 0x229B98u;
    SET_GPR_U32(ctx, 31, 0x229BA0u);
    ctx->pc = 0x229B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B98u;
    // 0x229b9c: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x229B98u, 0x229BA0u)) {
        return;
    }
    ctx->pc = 0x229BA0u;
label_229ba0:
    // 0x229ba0: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x229ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_229ba4:
    // 0x229ba4: 0xc09281a  jal         func_24A068
label_229ba8:
    if (ctx->pc == 0x229BA8u) {
        ctx->pc = 0x229BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BA4u;
        // 0x229ba8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BACu;
        goto label_229bac;
    }
    ctx->pc = 0x229BA4u;
    SET_GPR_U32(ctx, 31, 0x229BACu);
    ctx->pc = 0x229BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BA4u;
    // 0x229ba8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x229BA4u, 0x229BACu)) {
        return;
    }
    ctx->pc = 0x229BACu;
label_229bac:
    // 0x229bac: 0x10000047  b           . + 4 + (0x47 << 2)
label_229bb0:
    if (ctx->pc == 0x229BB0u) {
        ctx->pc = 0x229BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BACu;
        // 0x229bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BB4u;
        goto label_229bb4;
    }
    ctx->pc = 0x229BACu;
    {
        const bool branch_taken_0x229bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BACu;
        // 0x229bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bac) {
            ctx->pc = 0x229CCCu;
            goto label_229ccc;
        }
    }
    ctx->pc = 0x229BB4u;
label_229bb4:
    // 0x229bb4: 0x0  nop
    ctx->pc = 0x229bb4u;
    // NOP
label_229bb8:
    // 0x229bb8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x229bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_229bbc:
    // 0x229bbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x229bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_229bc0:
    // 0x229bc0: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
label_229bc4:
    if (ctx->pc == 0x229BC4u) {
        ctx->pc = 0x229BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BC0u;
        // 0x229bc4: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BC8u;
        goto label_229bc8;
    }
    ctx->pc = 0x229BC0u;
    {
        const bool branch_taken_0x229bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x229bc0) {
            ctx->pc = 0x229BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229BC0u;
            // 0x229bc4: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229BDCu;
            goto label_229bdc;
        }
    }
    ctx->pc = 0x229BC8u;
label_229bc8:
    // 0x229bc8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x229bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_229bcc:
    // 0x229bcc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x229bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_229bd0:
    // 0x229bd0: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
label_229bd4:
    if (ctx->pc == 0x229BD4u) {
        ctx->pc = 0x229BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BD0u;
        // 0x229bd4: 0x8fa20210  lw          $v0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BD8u;
        goto label_229bd8;
    }
    ctx->pc = 0x229BD0u;
    {
        const bool branch_taken_0x229bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BD0u;
        // 0x229bd4: 0x8fa20210  lw          $v0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bd0) {
            ctx->pc = 0x229CCCu;
            goto label_229ccc;
        }
    }
    ctx->pc = 0x229BD8u;
label_229bd8:
    // 0x229bd8: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x229bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_229bdc:
    // 0x229bdc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_229be0:
    // 0x229be0: 0x52220016  beql        $s1, $v0, . + 4 + (0x16 << 2)
label_229be4:
    if (ctx->pc == 0x229BE4u) {
        ctx->pc = 0x229BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BE0u;
        // 0x229be4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BE8u;
        goto label_229be8;
    }
    ctx->pc = 0x229BE0u;
    {
        const bool branch_taken_0x229be0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x229be0) {
            ctx->pc = 0x229BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229BE0u;
            // 0x229be4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229C3Cu;
            goto label_229c3c;
        }
    }
    ctx->pc = 0x229BE8u;
label_229be8:
    // 0x229be8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x229be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_229bec:
    // 0x229bec: 0xc089b6c  jal         func_226DB0
label_229bf0:
    if (ctx->pc == 0x229BF0u) {
        ctx->pc = 0x229BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BECu;
        // 0x229bf0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BF4u;
        goto label_229bf4;
    }
    ctx->pc = 0x229BECu;
    SET_GPR_U32(ctx, 31, 0x229BF4u);
    ctx->pc = 0x229BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BECu;
    // 0x229bf0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x229BECu, 0x229BF4u)) {
        return;
    }
    ctx->pc = 0x229BF4u;
label_229bf4:
    // 0x229bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x229bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229bf8:
    // 0x229bf8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_229bfc:
    if (ctx->pc == 0x229BFCu) {
        ctx->pc = 0x229BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BF8u;
        // 0x229bfc: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C00u;
        goto label_229c00;
    }
    ctx->pc = 0x229BF8u;
    {
        const bool branch_taken_0x229bf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x229BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BF8u;
        // 0x229bfc: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bf8) {
            ctx->pc = 0x229C08u;
            goto label_229c08;
        }
    }
    ctx->pc = 0x229C00u;
label_229c00:
    // 0x229c00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_229c04:
    if (ctx->pc == 0x229C04u) {
        ctx->pc = 0x229C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C00u;
        // 0x229c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C08u;
        goto label_229c08;
    }
    ctx->pc = 0x229C00u;
    {
        const bool branch_taken_0x229c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C00u;
        // 0x229c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c00) {
            ctx->pc = 0x229C70u;
            goto label_229c70;
        }
    }
    ctx->pc = 0x229C08u;
label_229c08:
    // 0x229c08: 0xc089bb2  jal         func_226EC8
label_229c0c:
    if (ctx->pc == 0x229C0Cu) {
        ctx->pc = 0x229C10u;
        goto label_229c10;
    }
    ctx->pc = 0x229C08u;
    SET_GPR_U32(ctx, 31, 0x229C10u);
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x229C08u, 0x229C10u)) {
        return;
    }
    ctx->pc = 0x229C10u;
label_229c10:
    // 0x229c10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_229c14:
    if (ctx->pc == 0x229C14u) {
        ctx->pc = 0x229C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C10u;
        // 0x229c14: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C18u;
        goto label_229c18;
    }
    ctx->pc = 0x229C10u;
    {
        const bool branch_taken_0x229c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C10u;
        // 0x229c14: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c10) {
            ctx->pc = 0x229C28u;
            goto label_229c28;
        }
    }
    ctx->pc = 0x229C18u;
label_229c18:
    // 0x229c18: 0xc089b96  jal         func_226E58
label_229c1c:
    if (ctx->pc == 0x229C1Cu) {
        ctx->pc = 0x229C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C18u;
        // 0x229c1c: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C20u;
        goto label_229c20;
    }
    ctx->pc = 0x229C18u;
    SET_GPR_U32(ctx, 31, 0x229C20u);
    ctx->pc = 0x229C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C18u;
    // 0x229c1c: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229C18u, 0x229C20u)) {
        return;
    }
    ctx->pc = 0x229C20u;
label_229c20:
    // 0x229c20: 0x10000013  b           . + 4 + (0x13 << 2)
label_229c24:
    if (ctx->pc == 0x229C24u) {
        ctx->pc = 0x229C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C20u;
        // 0x229c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C28u;
        goto label_229c28;
    }
    ctx->pc = 0x229C20u;
    {
        const bool branch_taken_0x229c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C20u;
        // 0x229c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c20) {
            ctx->pc = 0x229C70u;
            goto label_229c70;
        }
    }
    ctx->pc = 0x229C28u;
label_229c28:
    // 0x229c28: 0xc089f7e  jal         func_227DF8
label_229c2c:
    if (ctx->pc == 0x229C2Cu) {
        ctx->pc = 0x229C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C28u;
        // 0x229c2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C30u;
        goto label_229c30;
    }
    ctx->pc = 0x229C28u;
    SET_GPR_U32(ctx, 31, 0x229C30u);
    ctx->pc = 0x229C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C28u;
    // 0x229c2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227DF8u, 0x229C28u, 0x229C30u)) {
        return;
    }
    ctx->pc = 0x229C30u;
label_229c30:
    // 0x229c30: 0xc089b96  jal         func_226E58
label_229c34:
    if (ctx->pc == 0x229C34u) {
        ctx->pc = 0x229C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C30u;
        // 0x229c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C38u;
        goto label_229c38;
    }
    ctx->pc = 0x229C30u;
    SET_GPR_U32(ctx, 31, 0x229C38u);
    ctx->pc = 0x229C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C30u;
    // 0x229c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229C30u, 0x229C38u)) {
        return;
    }
    ctx->pc = 0x229C38u;
label_229c38:
    // 0x229c38: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x229c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_229c3c:
    // 0x229c3c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x229c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_229c40:
    // 0x229c40: 0xc089b6c  jal         func_226DB0
label_229c44:
    if (ctx->pc == 0x229C44u) {
        ctx->pc = 0x229C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C40u;
        // 0x229c44: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C48u;
        goto label_229c48;
    }
    ctx->pc = 0x229C40u;
    SET_GPR_U32(ctx, 31, 0x229C48u);
    ctx->pc = 0x229C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C40u;
    // 0x229c44: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x229C40u, 0x229C48u)) {
        return;
    }
    ctx->pc = 0x229C48u;
label_229c48:
    // 0x229c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229c4c:
    // 0x229c4c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_229c50:
    if (ctx->pc == 0x229C50u) {
        ctx->pc = 0x229C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C4Cu;
        // 0x229c50: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C54u;
        goto label_229c54;
    }
    ctx->pc = 0x229C4Cu;
    {
        const bool branch_taken_0x229c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C4Cu;
        // 0x229c50: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c4c) {
            ctx->pc = 0x229C70u;
            goto label_229c70;
        }
    }
    ctx->pc = 0x229C54u;
label_229c54:
    // 0x229c54: 0xc089bb2  jal         func_226EC8
label_229c58:
    if (ctx->pc == 0x229C58u) {
        ctx->pc = 0x229C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C54u;
        // 0x229c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C5Cu;
        goto label_229c5c;
    }
    ctx->pc = 0x229C54u;
    SET_GPR_U32(ctx, 31, 0x229C5Cu);
    ctx->pc = 0x229C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C54u;
    // 0x229c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x229C54u, 0x229C5Cu)) {
        return;
    }
    ctx->pc = 0x229C5Cu;
label_229c5c:
    // 0x229c5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_229c60:
    if (ctx->pc == 0x229C60u) {
        ctx->pc = 0x229C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C5Cu;
        // 0x229c60: 0x8fa50210  lw          $a1, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C64u;
        goto label_229c64;
    }
    ctx->pc = 0x229C5Cu;
    {
        const bool branch_taken_0x229c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C5Cu;
        // 0x229c60: 0x8fa50210  lw          $a1, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c5c) {
            ctx->pc = 0x229C80u;
            goto label_229c80;
        }
    }
    ctx->pc = 0x229C64u;
label_229c64:
    // 0x229c64: 0xc089b96  jal         func_226E58
label_229c68:
    if (ctx->pc == 0x229C68u) {
        ctx->pc = 0x229C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C64u;
        // 0x229c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C6Cu;
        goto label_229c6c;
    }
    ctx->pc = 0x229C64u;
    SET_GPR_U32(ctx, 31, 0x229C6Cu);
    ctx->pc = 0x229C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C64u;
    // 0x229c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229C64u, 0x229C6Cu)) {
        return;
    }
    ctx->pc = 0x229C6Cu;
label_229c6c:
    // 0x229c6c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x229c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_229c70:
    // 0x229c70: 0xc089b96  jal         func_226E58
label_229c74:
    if (ctx->pc == 0x229C74u) {
        ctx->pc = 0x229C78u;
        goto label_229c78;
    }
    ctx->pc = 0x229C70u;
    SET_GPR_U32(ctx, 31, 0x229C78u);
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229C70u, 0x229C78u)) {
        return;
    }
    ctx->pc = 0x229C78u;
label_229c78:
    // 0x229c78: 0x10000014  b           . + 4 + (0x14 << 2)
label_229c7c:
    if (ctx->pc == 0x229C7Cu) {
        ctx->pc = 0x229C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C78u;
        // 0x229c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C80u;
        goto label_229c80;
    }
    ctx->pc = 0x229C78u;
    {
        const bool branch_taken_0x229c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C78u;
        // 0x229c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c78) {
            ctx->pc = 0x229CCCu;
            goto label_229ccc;
        }
    }
    ctx->pc = 0x229C80u;
label_229c80:
    // 0x229c80: 0xc08a3d8  jal         func_228F60
label_229c84:
    if (ctx->pc == 0x229C84u) {
        ctx->pc = 0x229C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C80u;
        // 0x229c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C88u;
        goto label_229c88;
    }
    ctx->pc = 0x229C80u;
    SET_GPR_U32(ctx, 31, 0x229C88u);
    ctx->pc = 0x229C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C80u;
    // 0x229c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228F60u, 0x229C80u, 0x229C88u)) {
        return;
    }
    ctx->pc = 0x229C88u;
label_229c88:
    // 0x229c88: 0xc089b96  jal         func_226E58
label_229c8c:
    if (ctx->pc == 0x229C8Cu) {
        ctx->pc = 0x229C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C88u;
        // 0x229c8c: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C90u;
        goto label_229c90;
    }
    ctx->pc = 0x229C88u;
    SET_GPR_U32(ctx, 31, 0x229C90u);
    ctx->pc = 0x229C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C88u;
    // 0x229c8c: 0x8fa40210  lw          $a0, 0x210($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229C88u, 0x229C90u)) {
        return;
    }
    ctx->pc = 0x229C90u;
label_229c90:
    // 0x229c90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x229c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_229c94:
    // 0x229c94: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_229c98:
    if (ctx->pc == 0x229C98u) {
        ctx->pc = 0x229C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C94u;
        // 0x229c98: 0xafb00210  sw          $s0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C9Cu;
        goto label_229c9c;
    }
    ctx->pc = 0x229C94u;
    {
        const bool branch_taken_0x229c94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x229C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C94u;
        // 0x229c98: 0xafb00210  sw          $s0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c94) {
            ctx->pc = 0x229CB0u;
            goto label_229cb0;
        }
    }
    ctx->pc = 0x229C9Cu;
label_229c9c:
    // 0x229c9c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x229c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_229ca0:
    // 0x229ca0: 0xc08a5b6  jal         func_2296D8
label_229ca4:
    if (ctx->pc == 0x229CA4u) {
        ctx->pc = 0x229CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CA0u;
        // 0x229ca4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CA8u;
        goto label_229ca8;
    }
    ctx->pc = 0x229CA0u;
    SET_GPR_U32(ctx, 31, 0x229CA8u);
    ctx->pc = 0x229CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CA0u;
    // 0x229ca4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2296D8u, 0x229CA0u, 0x229CA8u)) {
        return;
    }
    ctx->pc = 0x229CA8u;
label_229ca8:
    // 0x229ca8: 0x10000008  b           . + 4 + (0x8 << 2)
label_229cac:
    if (ctx->pc == 0x229CACu) {
        ctx->pc = 0x229CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CA8u;
        // 0x229cac: 0x8fa20210  lw          $v0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CB0u;
        goto label_229cb0;
    }
    ctx->pc = 0x229CA8u;
    {
        const bool branch_taken_0x229ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CA8u;
        // 0x229cac: 0x8fa20210  lw          $v0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ca8) {
            ctx->pc = 0x229CCCu;
            goto label_229ccc;
        }
    }
    ctx->pc = 0x229CB0u;
label_229cb0:
    // 0x229cb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x229cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_229cb4:
    // 0x229cb4: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_229cb8:
    if (ctx->pc == 0x229CB8u) {
        ctx->pc = 0x229CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CB4u;
        // 0x229cb8: 0x8fa20210  lw          $v0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CBCu;
        goto label_229cbc;
    }
    ctx->pc = 0x229CB4u;
    {
        const bool branch_taken_0x229cb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x229CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CB4u;
        // 0x229cb8: 0x8fa20210  lw          $v0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229cb4) {
            ctx->pc = 0x229CCCu;
            goto label_229ccc;
        }
    }
    ctx->pc = 0x229CBCu;
label_229cbc:
    // 0x229cbc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x229cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_229cc0:
    // 0x229cc0: 0xc08a5b6  jal         func_2296D8
label_229cc4:
    if (ctx->pc == 0x229CC4u) {
        ctx->pc = 0x229CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CC0u;
        // 0x229cc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CC8u;
        goto label_229cc8;
    }
    ctx->pc = 0x229CC0u;
    SET_GPR_U32(ctx, 31, 0x229CC8u);
    ctx->pc = 0x229CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CC0u;
    // 0x229cc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2296D8u, 0x229CC0u, 0x229CC8u)) {
        return;
    }
    ctx->pc = 0x229CC8u;
label_229cc8:
    // 0x229cc8: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x229cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_229ccc:
    // 0x229ccc: 0x7bb002a0  lq          $s0, 0x2A0($sp)
    ctx->pc = 0x229cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_229cd0:
    // 0x229cd0: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x229cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_229cd4:
    // 0x229cd4: 0x7bb20280  lq          $s2, 0x280($sp)
    ctx->pc = 0x229cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_229cd8:
    // 0x229cd8: 0x7bb30270  lq          $s3, 0x270($sp)
    ctx->pc = 0x229cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_229cdc:
    // 0x229cdc: 0x7bb40260  lq          $s4, 0x260($sp)
    ctx->pc = 0x229cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_229ce0:
    // 0x229ce0: 0x7bb50250  lq          $s5, 0x250($sp)
    ctx->pc = 0x229ce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_229ce4:
    // 0x229ce4: 0x7bb60240  lq          $s6, 0x240($sp)
    ctx->pc = 0x229ce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_229ce8:
    // 0x229ce8: 0x7bb70230  lq          $s7, 0x230($sp)
    ctx->pc = 0x229ce8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_229cec:
    // 0x229cec: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x229cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
label_229cf0:
    // 0x229cf0: 0x3e00008  jr          $ra
label_229cf4:
    if (ctx->pc == 0x229CF4u) {
        ctx->pc = 0x229CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CF0u;
        // 0x229cf4: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229CF8u;
        goto label_fallthrough_0x229cf0;
    }
    ctx->pc = 0x229CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CF0u;
        // 0x229cf4: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229cf0:
    ctx->pc = 0x229CF8u;
}

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

// Function: sub_001B0930
// Address: 0x1b0930 - 0x1b0ab0
void sub_001B0930_0x1b0930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0930_0x1b0930");
#endif

    switch (ctx->pc) {
        case 0x1b0930u: goto label_1b0930;
        case 0x1b0934u: goto label_1b0934;
        case 0x1b0938u: goto label_1b0938;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0948u: goto label_1b0948;
        case 0x1b094cu: goto label_1b094c;
        case 0x1b0950u: goto label_1b0950;
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0958u: goto label_1b0958;
        case 0x1b095cu: goto label_1b095c;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0964u: goto label_1b0964;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b096cu: goto label_1b096c;
        case 0x1b0970u: goto label_1b0970;
        case 0x1b0974u: goto label_1b0974;
        case 0x1b0978u: goto label_1b0978;
        case 0x1b097cu: goto label_1b097c;
        case 0x1b0980u: goto label_1b0980;
        case 0x1b0984u: goto label_1b0984;
        case 0x1b0988u: goto label_1b0988;
        case 0x1b098cu: goto label_1b098c;
        case 0x1b0990u: goto label_1b0990;
        case 0x1b0994u: goto label_1b0994;
        case 0x1b0998u: goto label_1b0998;
        case 0x1b099cu: goto label_1b099c;
        case 0x1b09a0u: goto label_1b09a0;
        case 0x1b09a4u: goto label_1b09a4;
        case 0x1b09a8u: goto label_1b09a8;
        case 0x1b09acu: goto label_1b09ac;
        case 0x1b09b0u: goto label_1b09b0;
        case 0x1b09b4u: goto label_1b09b4;
        case 0x1b09b8u: goto label_1b09b8;
        case 0x1b09bcu: goto label_1b09bc;
        case 0x1b09c0u: goto label_1b09c0;
        case 0x1b09c4u: goto label_1b09c4;
        case 0x1b09c8u: goto label_1b09c8;
        case 0x1b09ccu: goto label_1b09cc;
        case 0x1b09d0u: goto label_1b09d0;
        case 0x1b09d4u: goto label_1b09d4;
        case 0x1b09d8u: goto label_1b09d8;
        case 0x1b09dcu: goto label_1b09dc;
        case 0x1b09e0u: goto label_1b09e0;
        case 0x1b09e4u: goto label_1b09e4;
        case 0x1b09e8u: goto label_1b09e8;
        case 0x1b09ecu: goto label_1b09ec;
        case 0x1b09f0u: goto label_1b09f0;
        case 0x1b09f4u: goto label_1b09f4;
        case 0x1b09f8u: goto label_1b09f8;
        case 0x1b09fcu: goto label_1b09fc;
        case 0x1b0a00u: goto label_1b0a00;
        case 0x1b0a04u: goto label_1b0a04;
        case 0x1b0a08u: goto label_1b0a08;
        case 0x1b0a0cu: goto label_1b0a0c;
        case 0x1b0a10u: goto label_1b0a10;
        case 0x1b0a14u: goto label_1b0a14;
        case 0x1b0a18u: goto label_1b0a18;
        case 0x1b0a1cu: goto label_1b0a1c;
        case 0x1b0a20u: goto label_1b0a20;
        case 0x1b0a24u: goto label_1b0a24;
        case 0x1b0a28u: goto label_1b0a28;
        case 0x1b0a2cu: goto label_1b0a2c;
        case 0x1b0a30u: goto label_1b0a30;
        case 0x1b0a34u: goto label_1b0a34;
        case 0x1b0a38u: goto label_1b0a38;
        case 0x1b0a3cu: goto label_1b0a3c;
        case 0x1b0a40u: goto label_1b0a40;
        case 0x1b0a44u: goto label_1b0a44;
        case 0x1b0a48u: goto label_1b0a48;
        case 0x1b0a4cu: goto label_1b0a4c;
        case 0x1b0a50u: goto label_1b0a50;
        case 0x1b0a54u: goto label_1b0a54;
        case 0x1b0a58u: goto label_1b0a58;
        case 0x1b0a5cu: goto label_1b0a5c;
        case 0x1b0a60u: goto label_1b0a60;
        case 0x1b0a64u: goto label_1b0a64;
        case 0x1b0a68u: goto label_1b0a68;
        case 0x1b0a6cu: goto label_1b0a6c;
        case 0x1b0a70u: goto label_1b0a70;
        case 0x1b0a74u: goto label_1b0a74;
        case 0x1b0a78u: goto label_1b0a78;
        case 0x1b0a7cu: goto label_1b0a7c;
        case 0x1b0a80u: goto label_1b0a80;
        case 0x1b0a84u: goto label_1b0a84;
        case 0x1b0a88u: goto label_1b0a88;
        case 0x1b0a8cu: goto label_1b0a8c;
        case 0x1b0a90u: goto label_1b0a90;
        case 0x1b0a94u: goto label_1b0a94;
        case 0x1b0a98u: goto label_1b0a98;
        case 0x1b0a9cu: goto label_1b0a9c;
        case 0x1b0aa0u: goto label_1b0aa0;
        case 0x1b0aa4u: goto label_1b0aa4;
        case 0x1b0aa8u: goto label_1b0aa8;
        case 0x1b0aacu: goto label_1b0aac;
        default: break;
    }

    ctx->pc = 0x1b0930u;

label_1b0930:
    // 0x1b0930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b0930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b0934:
    // 0x1b0934: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b0934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1b0938:
    // 0x1b0938: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b0938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1b093c:
    // 0x1b093c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0940:
    // 0x1b0940: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b0940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b0944:
    // 0x1b0944: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b0944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b0948:
    // 0x1b0948: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1b0948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1b094c:
    // 0x1b094c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b094cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b0950:
    // 0x1b0950: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1b0950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1b0954:
    // 0x1b0954: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b0954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b0958:
    // 0x1b0958: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b0958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1b095c:
    // 0x1b095c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1b095cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b0960:
    // 0x1b0960: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b0960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1b0964:
    // 0x1b0964: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1b0968:
    if (ctx->pc == 0x1B0968u) {
        ctx->pc = 0x1B0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0964u;
        // 0x1b0968: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B096Cu;
        goto label_1b096c;
    }
    ctx->pc = 0x1B0964u;
    {
        const bool branch_taken_0x1b0964 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0964u;
        // 0x1b0968: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0964) {
            ctx->pc = 0x1B097Cu;
            goto label_1b097c;
        }
    }
    ctx->pc = 0x1B096Cu;
label_1b096c:
    // 0x1b096c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1b096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1b0970:
    // 0x1b0970: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1b0974:
    // 0x1b0974: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_1b0978:
    if (ctx->pc == 0x1B0978u) {
        ctx->pc = 0x1B0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0974u;
        // 0x1b0978: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B097Cu;
        goto label_1b097c;
    }
    ctx->pc = 0x1B0974u;
    {
        const bool branch_taken_0x1b0974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0974) {
            ctx->pc = 0x1B0978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0974u;
            // 0x1b0978: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B09D8u;
            goto label_1b09d8;
        }
    }
    ctx->pc = 0x1B097Cu;
label_1b097c:
    // 0x1b097c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1b0980:
    // 0x1b0980: 0x2630015c  addiu       $s0, $s1, 0x15C
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
label_1b0984:
    // 0x1b0984: 0x8c448acc  lw          $a0, -0x7534($v0)
    ctx->pc = 0x1b0984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
label_1b0988:
    // 0x1b0988: 0xc062cc8  jal         func_18B320
label_1b098c:
    if (ctx->pc == 0x1B098Cu) {
        ctx->pc = 0x1B098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0988u;
        // 0x1b098c: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0990u;
        goto label_1b0990;
    }
    ctx->pc = 0x1B0988u;
    SET_GPR_U32(ctx, 31, 0x1B0990u);
    ctx->pc = 0x1B098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0988u;
    // 0x1b098c: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B320u, 0x1B0988u, 0x1B0990u)) {
        return;
    }
    ctx->pc = 0x1B0990u;
label_1b0990:
    // 0x1b0990: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b0990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1b0994:
    // 0x1b0994: 0xc064098  jal         func_190260
label_1b0998:
    if (ctx->pc == 0x1B0998u) {
        ctx->pc = 0x1B0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0994u;
        // 0x1b0998: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B099Cu;
        goto label_1b099c;
    }
    ctx->pc = 0x1B0994u;
    SET_GPR_U32(ctx, 31, 0x1B099Cu);
    ctx->pc = 0x1B0998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0994u;
    // 0x1b0998: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190260u, 0x1B0994u, 0x1B099Cu)) {
        return;
    }
    ctx->pc = 0x1B099Cu;
label_1b099c:
    // 0x1b099c: 0xc05fa86  jal         func_17EA18
label_1b09a0:
    if (ctx->pc == 0x1B09A0u) {
        ctx->pc = 0x1B09A4u;
        goto label_1b09a4;
    }
    ctx->pc = 0x1B099Cu;
    SET_GPR_U32(ctx, 31, 0x1B09A4u);
    ctx->pc = 0x17EA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17EA18u, 0x1B099Cu, 0x1B09A4u)) {
        return;
    }
    ctx->pc = 0x1B09A4u;
label_1b09a4:
    // 0x1b09a4: 0x0  nop
    ctx->pc = 0x1b09a4u;
    // NOP
label_1b09a8:
    // 0x1b09a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b09a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b09ac:
    // 0x1b09ac: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1b09b0:
    if (ctx->pc == 0x1B09B0u) {
        ctx->pc = 0x1B09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09ACu;
        // 0x1b09b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09B4u;
        goto label_1b09b4;
    }
    ctx->pc = 0x1B09ACu;
    {
        const bool branch_taken_0x1b09ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b09ac) {
            ctx->pc = 0x1B09B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B09ACu;
            // 0x1b09b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B09CCu;
            goto label_1b09cc;
        }
    }
    ctx->pc = 0x1B09B4u;
label_1b09b4:
    // 0x1b09b4: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1b09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1b09b8:
    // 0x1b09b8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1b09b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_1b09bc:
    // 0x1b09bc: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x1b09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1b09c0:
    // 0x1b09c0: 0x60f809  jalr        $v1
label_1b09c4:
    if (ctx->pc == 0x1B09C4u) {
        ctx->pc = 0x1B09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09C0u;
        // 0x1b09c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09C8u;
        goto label_1b09c8;
    }
    ctx->pc = 0x1B09C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B09C8u);
        ctx->pc = 0x1B09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09C0u;
        // 0x1b09c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B09C0u, 0x1B09C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B09C8u;
label_1b09c8:
    // 0x1b09c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b09c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1b09cc:
    // 0x1b09cc: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
label_1b09d0:
    if (ctx->pc == 0x1B09D0u) {
        ctx->pc = 0x1B09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09CCu;
        // 0x1b09d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09D4u;
        goto label_1b09d4;
    }
    ctx->pc = 0x1B09CCu;
    {
        const bool branch_taken_0x1b09cc = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1B09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09CCu;
        // 0x1b09d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09cc) {
            ctx->pc = 0x1B09A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b09a8;
        }
    }
    ctx->pc = 0x1B09D4u;
label_1b09d4:
    // 0x1b09d4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1b09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1b09d8:
    // 0x1b09d8: 0x2442ffe5  addiu       $v0, $v0, -0x1B
    ctx->pc = 0x1b09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967269));
label_1b09dc:
    // 0x1b09dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b09dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b09e0:
    // 0x1b09e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1b09e4:
    if (ctx->pc == 0x1B09E4u) {
        ctx->pc = 0x1B09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09E0u;
        // 0x1b09e4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09E8u;
        goto label_1b09e8;
    }
    ctx->pc = 0x1B09E0u;
    {
        const bool branch_taken_0x1b09e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09E0u;
        // 0x1b09e4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09e0) {
            ctx->pc = 0x1B0A84u;
            goto label_1b0a84;
        }
    }
    ctx->pc = 0x1B09E8u;
label_1b09e8:
    // 0x1b09e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1b09ec:
    // 0x1b09ec: 0x8c45f050  lw          $a1, -0xFB0($v0)
    ctx->pc = 0x1b09ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963280)));
label_1b09f0:
    // 0x1b09f0: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1b09f4:
    // 0x1b09f4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1b09f8:
    if (ctx->pc == 0x1B09F8u) {
        ctx->pc = 0x1B09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09F4u;
        // 0x1b09f8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09FCu;
        goto label_1b09fc;
    }
    ctx->pc = 0x1B09F4u;
    {
        const bool branch_taken_0x1b09f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09F4u;
        // 0x1b09f8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09f4) {
            ctx->pc = 0x1B0A18u;
            goto label_1b0a18;
        }
    }
    ctx->pc = 0x1B09FCu;
label_1b09fc:
    // 0x1b09fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b0a00:
    // 0x1b0a00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0a04:
    if (ctx->pc == 0x1B0A04u) {
        ctx->pc = 0x1B0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A00u;
        // 0x1b0a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A08u;
        goto label_1b0a08;
    }
    ctx->pc = 0x1B0A00u;
    {
        const bool branch_taken_0x1b0a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A00u;
        // 0x1b0a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a00) {
            ctx->pc = 0x1B0A14u;
            goto label_1b0a14;
        }
    }
    ctx->pc = 0x1B0A08u;
label_1b0a08:
    // 0x1b0a08: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1b0a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1b0a0c:
    // 0x1b0a0c: 0xc07fd18  jal         func_1FF460
label_1b0a10:
    if (ctx->pc == 0x1B0A10u) {
        ctx->pc = 0x1B0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A0Cu;
        // 0x1b0a10: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A14u;
        goto label_1b0a14;
    }
    ctx->pc = 0x1B0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B0A14u);
    ctx->pc = 0x1B0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A0Cu;
    // 0x1b0a10: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B0A0Cu, 0x1B0A14u)) {
        return;
    }
    ctx->pc = 0x1B0A14u;
label_1b0a14:
    // 0x1b0a14: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1b0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1b0a18:
    // 0x1b0a18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b0a1c:
    // 0x1b0a1c: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x1b0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_1b0a20:
    // 0x1b0a20: 0xae330150  sw          $s3, 0x150($s1)
    ctx->pc = 0x1b0a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 19));
label_1b0a24:
    // 0x1b0a24: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1b0a28:
    if (ctx->pc == 0x1B0A28u) {
        ctx->pc = 0x1B0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A24u;
        // 0x1b0a28: 0xae230158  sw          $v1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A2Cu;
        goto label_1b0a2c;
    }
    ctx->pc = 0x1B0A24u;
    {
        const bool branch_taken_0x1b0a24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A24u;
        // 0x1b0a28: 0xae230158  sw          $v1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a24) {
            ctx->pc = 0x1B0A4Cu;
            goto label_1b0a4c;
        }
    }
    ctx->pc = 0x1B0A2Cu;
label_1b0a2c:
    // 0x1b0a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a30:
    // 0x1b0a30: 0xc06ca02  jal         func_1B2808
label_1b0a34:
    if (ctx->pc == 0x1B0A34u) {
        ctx->pc = 0x1B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A30u;
        // 0x1b0a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A38u;
        goto label_1b0a38;
    }
    ctx->pc = 0x1B0A30u;
    SET_GPR_U32(ctx, 31, 0x1B0A38u);
    ctx->pc = 0x1B0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A30u;
    // 0x1b0a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2808u, 0x1B0A30u, 0x1B0A38u)) {
        return;
    }
    ctx->pc = 0x1B0A38u;
label_1b0a38:
    // 0x1b0a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0a3c:
    // 0x1b0a3c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_1b0a40:
    if (ctx->pc == 0x1B0A40u) {
        ctx->pc = 0x1B0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A3Cu;
        // 0x1b0a40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A44u;
        goto label_1b0a44;
    }
    ctx->pc = 0x1B0A3Cu;
    {
        const bool branch_taken_0x1b0a3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A3Cu;
        // 0x1b0a40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a3c) {
            ctx->pc = 0x1B0A50u;
            goto label_1b0a50;
        }
    }
    ctx->pc = 0x1B0A44u;
label_1b0a44:
    // 0x1b0a44: 0xc06caf6  jal         func_1B2BD8
label_1b0a48:
    if (ctx->pc == 0x1B0A48u) {
        ctx->pc = 0x1B0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A44u;
        // 0x1b0a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A4Cu;
        goto label_1b0a4c;
    }
    ctx->pc = 0x1B0A44u;
    SET_GPR_U32(ctx, 31, 0x1B0A4Cu);
    ctx->pc = 0x1B0A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A44u;
    // 0x1b0a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2BD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2BD8u, 0x1B0A44u, 0x1B0A4Cu)) {
        return;
    }
    ctx->pc = 0x1B0A4Cu;
label_1b0a4c:
    // 0x1b0a4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b0a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a50:
    // 0x1b0a50: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b0a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a54:
    // 0x1b0a54: 0xc06be86  jal         func_1AFA18
label_1b0a58:
    if (ctx->pc == 0x1B0A58u) {
        ctx->pc = 0x1B0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A54u;
        // 0x1b0a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A5Cu;
        goto label_1b0a5c;
    }
    ctx->pc = 0x1B0A54u;
    SET_GPR_U32(ctx, 31, 0x1B0A5Cu);
    ctx->pc = 0x1B0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A54u;
    // 0x1b0a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFA18u, 0x1B0A54u, 0x1B0A5Cu)) {
        return;
    }
    ctx->pc = 0x1B0A5Cu;
label_1b0a5c:
    // 0x1b0a5c: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_1b0a60:
    if (ctx->pc == 0x1B0A60u) {
        ctx->pc = 0x1B0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A5Cu;
        // 0x1b0a60: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A64u;
        goto label_1b0a64;
    }
    ctx->pc = 0x1B0A5Cu;
    {
        const bool branch_taken_0x1b0a5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A5Cu;
        // 0x1b0a60: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a5c) {
            ctx->pc = 0x1B0A88u;
            goto label_1b0a88;
        }
    }
    ctx->pc = 0x1B0A64u;
label_1b0a64:
    // 0x1b0a64: 0x8e260154  lw          $a2, 0x154($s1)
    ctx->pc = 0x1b0a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1b0a68:
    // 0x1b0a68: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1b0a6c:
    if (ctx->pc == 0x1B0A6Cu) {
        ctx->pc = 0x1B0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A68u;
        // 0x1b0a6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A70u;
        goto label_1b0a70;
    }
    ctx->pc = 0x1B0A68u;
    {
        const bool branch_taken_0x1b0a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A68u;
        // 0x1b0a6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a68) {
            ctx->pc = 0x1B0A88u;
            goto label_1b0a88;
        }
    }
    ctx->pc = 0x1B0A70u;
label_1b0a70:
    // 0x1b0a70: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b0a74:
    // 0x1b0a74: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1b0a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1b0a78:
    // 0x1b0a78: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1b0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1b0a7c:
    // 0x1b0a7c: 0x60f809  jalr        $v1
label_1b0a80:
    if (ctx->pc == 0x1B0A80u) {
        ctx->pc = 0x1B0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A7Cu;
        // 0x1b0a80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A84u;
        goto label_1b0a84;
    }
    ctx->pc = 0x1B0A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0A84u);
        ctx->pc = 0x1B0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A7Cu;
        // 0x1b0a80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A7Cu, 0x1B0A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A84u;
label_1b0a84:
    // 0x1b0a84: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b0a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b0a88:
    // 0x1b0a88: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b0a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b0a8c:
    // 0x1b0a8c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b0a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b0a90:
    // 0x1b0a90: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b0a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0a94:
    // 0x1b0a94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0a98:
    // 0x1b0a98: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1b0a98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0a9c:
    // 0x1b0a9c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1b0a9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0aa0:
    // 0x1b0aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0aa4:
    // 0x1b0aa4: 0x3e00008  jr          $ra
label_1b0aa8:
    if (ctx->pc == 0x1B0AA8u) {
        ctx->pc = 0x1B0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AA4u;
        // 0x1b0aa8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0AACu;
        goto label_1b0aac;
    }
    ctx->pc = 0x1B0AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AA4u;
        // 0x1b0aa8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0AACu;
label_1b0aac:
    // 0x1b0aac: 0x0  nop
    ctx->pc = 0x1b0aacu;
    // NOP
    ctx->pc = 0x1b0ab0u;
}

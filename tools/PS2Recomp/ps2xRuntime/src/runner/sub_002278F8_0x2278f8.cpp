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

// Function: sub_002278F8
// Address: 0x2278f8 - 0x227aa0
void sub_002278F8_0x2278f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278F8_0x2278f8");
#endif

    switch (ctx->pc) {
        case 0x2278f8u: goto label_2278f8;
        case 0x2278fcu: goto label_2278fc;
        case 0x227900u: goto label_227900;
        case 0x227904u: goto label_227904;
        case 0x227908u: goto label_227908;
        case 0x22790cu: goto label_22790c;
        case 0x227910u: goto label_227910;
        case 0x227914u: goto label_227914;
        case 0x227918u: goto label_227918;
        case 0x22791cu: goto label_22791c;
        case 0x227920u: goto label_227920;
        case 0x227924u: goto label_227924;
        case 0x227928u: goto label_227928;
        case 0x22792cu: goto label_22792c;
        case 0x227930u: goto label_227930;
        case 0x227934u: goto label_227934;
        case 0x227938u: goto label_227938;
        case 0x22793cu: goto label_22793c;
        case 0x227940u: goto label_227940;
        case 0x227944u: goto label_227944;
        case 0x227948u: goto label_227948;
        case 0x22794cu: goto label_22794c;
        case 0x227950u: goto label_227950;
        case 0x227954u: goto label_227954;
        case 0x227958u: goto label_227958;
        case 0x22795cu: goto label_22795c;
        case 0x227960u: goto label_227960;
        case 0x227964u: goto label_227964;
        case 0x227968u: goto label_227968;
        case 0x22796cu: goto label_22796c;
        case 0x227970u: goto label_227970;
        case 0x227974u: goto label_227974;
        case 0x227978u: goto label_227978;
        case 0x22797cu: goto label_22797c;
        case 0x227980u: goto label_227980;
        case 0x227984u: goto label_227984;
        case 0x227988u: goto label_227988;
        case 0x22798cu: goto label_22798c;
        case 0x227990u: goto label_227990;
        case 0x227994u: goto label_227994;
        case 0x227998u: goto label_227998;
        case 0x22799cu: goto label_22799c;
        case 0x2279a0u: goto label_2279a0;
        case 0x2279a4u: goto label_2279a4;
        case 0x2279a8u: goto label_2279a8;
        case 0x2279acu: goto label_2279ac;
        case 0x2279b0u: goto label_2279b0;
        case 0x2279b4u: goto label_2279b4;
        case 0x2279b8u: goto label_2279b8;
        case 0x2279bcu: goto label_2279bc;
        case 0x2279c0u: goto label_2279c0;
        case 0x2279c4u: goto label_2279c4;
        case 0x2279c8u: goto label_2279c8;
        case 0x2279ccu: goto label_2279cc;
        case 0x2279d0u: goto label_2279d0;
        case 0x2279d4u: goto label_2279d4;
        case 0x2279d8u: goto label_2279d8;
        case 0x2279dcu: goto label_2279dc;
        case 0x2279e0u: goto label_2279e0;
        case 0x2279e4u: goto label_2279e4;
        case 0x2279e8u: goto label_2279e8;
        case 0x2279ecu: goto label_2279ec;
        case 0x2279f0u: goto label_2279f0;
        case 0x2279f4u: goto label_2279f4;
        case 0x2279f8u: goto label_2279f8;
        case 0x2279fcu: goto label_2279fc;
        case 0x227a00u: goto label_227a00;
        case 0x227a04u: goto label_227a04;
        case 0x227a08u: goto label_227a08;
        case 0x227a0cu: goto label_227a0c;
        case 0x227a10u: goto label_227a10;
        case 0x227a14u: goto label_227a14;
        case 0x227a18u: goto label_227a18;
        case 0x227a1cu: goto label_227a1c;
        case 0x227a20u: goto label_227a20;
        case 0x227a24u: goto label_227a24;
        case 0x227a28u: goto label_227a28;
        case 0x227a2cu: goto label_227a2c;
        case 0x227a30u: goto label_227a30;
        case 0x227a34u: goto label_227a34;
        case 0x227a38u: goto label_227a38;
        case 0x227a3cu: goto label_227a3c;
        case 0x227a40u: goto label_227a40;
        case 0x227a44u: goto label_227a44;
        case 0x227a48u: goto label_227a48;
        case 0x227a4cu: goto label_227a4c;
        case 0x227a50u: goto label_227a50;
        case 0x227a54u: goto label_227a54;
        case 0x227a58u: goto label_227a58;
        case 0x227a5cu: goto label_227a5c;
        case 0x227a60u: goto label_227a60;
        case 0x227a64u: goto label_227a64;
        case 0x227a68u: goto label_227a68;
        case 0x227a6cu: goto label_227a6c;
        case 0x227a70u: goto label_227a70;
        case 0x227a74u: goto label_227a74;
        case 0x227a78u: goto label_227a78;
        case 0x227a7cu: goto label_227a7c;
        case 0x227a80u: goto label_227a80;
        case 0x227a84u: goto label_227a84;
        case 0x227a88u: goto label_227a88;
        case 0x227a8cu: goto label_227a8c;
        case 0x227a90u: goto label_227a90;
        case 0x227a94u: goto label_227a94;
        case 0x227a98u: goto label_227a98;
        case 0x227a9cu: goto label_227a9c;
        default: break;
    }

    ctx->pc = 0x2278f8u;

label_2278f8:
    // 0x2278f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2278fc:
    // 0x2278fc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2278fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_227900:
    // 0x227900: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x227900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_227904:
    // 0x227904: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x227904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_227908:
    // 0x227908: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x227908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_22790c:
    // 0x22790c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x22790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_227910:
    // 0x227910: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x227910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227914:
    // 0x227914: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x227914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_227918:
    // 0x227918: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x227918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_22791c:
    // 0x22791c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_227920:
    // 0x227920: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x227920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227924:
    // 0x227924: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x227924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_227928:
    // 0x227928: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x227928u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22792c:
    // 0x22792c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x22792cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_227930:
    // 0x227930: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x227930u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_227934:
    // 0x227934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_227938:
    // 0x227938: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x227938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22793c:
    // 0x22793c: 0x37a40001  ori         $a0, $sp, 0x1
    ctx->pc = 0x22793cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
label_227940:
    // 0x227940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x227940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_227944:
    // 0x227944: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x227944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_227948:
    // 0x227948: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x227948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22794c:
    // 0x22794c: 0x40f809  jalr        $v0
label_227950:
    if (ctx->pc == 0x227950u) {
        ctx->pc = 0x227950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22794Cu;
        // 0x227950: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227954u;
        goto label_227954;
    }
    ctx->pc = 0x22794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227954u);
        ctx->pc = 0x227950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22794Cu;
        // 0x227950: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22794Cu, 0x227954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227954u;
label_227954:
    // 0x227954: 0x8e4200fc  lw          $v0, 0xFC($s2)
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_227958:
    // 0x227958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22795c:
    // 0x22795c: 0x40f809  jalr        $v0
label_227960:
    if (ctx->pc == 0x227960u) {
        ctx->pc = 0x227960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22795Cu;
        // 0x227960: 0xa3a00013  sb          $zero, 0x13($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227964u;
        goto label_227964;
    }
    ctx->pc = 0x22795Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227964u);
        ctx->pc = 0x227960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22795Cu;
        // 0x227960: 0xa3a00013  sb          $zero, 0x13($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22795Cu, 0x227964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227964u;
label_227964:
    // 0x227964: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x227964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_227968:
    // 0x227968: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x227968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_22796c:
    // 0x22796c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_227970:
    // 0x227970: 0x8c70021c  lw          $s0, 0x21C($v1)
    ctx->pc = 0x227970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_227974:
    // 0x227974: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_227978:
    if (ctx->pc == 0x227978u) {
        ctx->pc = 0x22797Cu;
        goto label_22797c;
    }
    ctx->pc = 0x227974u;
    {
        const bool branch_taken_0x227974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x227974) {
            ctx->pc = 0x2279A8u;
            goto label_2279a8;
        }
    }
    ctx->pc = 0x22797Cu;
label_22797c:
    // 0x22797c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x22797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_227980:
    // 0x227980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227984:
    // 0x227984: 0x40f809  jalr        $v0
label_227988:
    if (ctx->pc == 0x227988u) {
        ctx->pc = 0x227988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227984u;
        // 0x227988: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22798Cu;
        goto label_22798c;
    }
    ctx->pc = 0x227984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22798Cu);
        ctx->pc = 0x227988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227984u;
        // 0x227988: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227984u, 0x22798Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22798Cu;
label_22798c:
    // 0x22798c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_227990:
    if (ctx->pc == 0x227990u) {
        ctx->pc = 0x227990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22798Cu;
        // 0x227990: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227994u;
        goto label_227994;
    }
    ctx->pc = 0x22798Cu;
    {
        const bool branch_taken_0x22798c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22798c) {
            ctx->pc = 0x227990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22798Cu;
            // 0x227990: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227998u;
            goto label_227998;
        }
    }
    ctx->pc = 0x227994u;
label_227994:
    // 0x227994: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x227994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227998:
    // 0x227998: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_22799c:
    if (ctx->pc == 0x22799Cu) {
        ctx->pc = 0x2279A0u;
        goto label_2279a0;
    }
    ctx->pc = 0x227998u;
    {
        const bool branch_taken_0x227998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x227998) {
            ctx->pc = 0x2279A8u;
            goto label_2279a8;
        }
    }
    ctx->pc = 0x2279A0u;
label_2279a0:
    // 0x2279a0: 0x5220fff7  beql        $s1, $zero, . + 4 + (-0x9 << 2)
label_2279a4:
    if (ctx->pc == 0x2279A4u) {
        ctx->pc = 0x2279A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279A0u;
        // 0x2279a4: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279A8u;
        goto label_2279a8;
    }
    ctx->pc = 0x2279A0u;
    {
        const bool branch_taken_0x2279a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2279a0) {
            ctx->pc = 0x2279A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2279A0u;
            // 0x2279a4: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227980;
        }
    }
    ctx->pc = 0x2279A8u;
label_2279a8:
    // 0x2279a8: 0x1620002c  bnez        $s1, . + 4 + (0x2C << 2)
label_2279ac:
    if (ctx->pc == 0x2279ACu) {
        ctx->pc = 0x2279ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279A8u;
        // 0x2279ac: 0x8f838e20  lw          $v1, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279B0u;
        goto label_2279b0;
    }
    ctx->pc = 0x2279A8u;
    {
        const bool branch_taken_0x2279a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2279ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279A8u;
        // 0x2279ac: 0x8f838e20  lw          $v1, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279a8) {
            ctx->pc = 0x227A5Cu;
            goto label_227a5c;
        }
    }
    ctx->pc = 0x2279B0u;
label_2279b0:
    // 0x2279b0: 0x26d00fc8  addiu       $s0, $s6, 0xFC8
    ctx->pc = 0x2279b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_2279b4:
    // 0x2279b4: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x2279b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_2279b8:
    // 0x2279b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2279b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2279bc:
    // 0x2279bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2279bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2279c0:
    // 0x2279c0: 0x34a50406  ori         $a1, $a1, 0x406
    ctx->pc = 0x2279c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
label_2279c4:
    // 0x2279c4: 0x40f809  jalr        $v0
label_2279c8:
    if (ctx->pc == 0x2279C8u) {
        ctx->pc = 0x2279C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279C4u;
        // 0x2279c8: 0x8c640218  lw          $a0, 0x218($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279CCu;
        goto label_2279cc;
    }
    ctx->pc = 0x2279C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2279CCu);
        ctx->pc = 0x2279C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279C4u;
        // 0x2279c8: 0x8c640218  lw          $a0, 0x218($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2279C4u, 0x2279CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2279CCu;
label_2279cc:
    // 0x2279cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2279ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2279d0:
    // 0x2279d0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2279d4:
    if (ctx->pc == 0x2279D4u) {
        ctx->pc = 0x2279D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279D0u;
        // 0x2279d4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279D8u;
        goto label_2279d8;
    }
    ctx->pc = 0x2279D0u;
    {
        const bool branch_taken_0x2279d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2279D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279D0u;
        // 0x2279d4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279d0) {
            ctx->pc = 0x2279E0u;
            goto label_2279e0;
        }
    }
    ctx->pc = 0x2279D8u;
label_2279d8:
    // 0x2279d8: 0x10000025  b           . + 4 + (0x25 << 2)
label_2279dc:
    if (ctx->pc == 0x2279DCu) {
        ctx->pc = 0x2279DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279D8u;
        // 0x2279dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279E0u;
        goto label_2279e0;
    }
    ctx->pc = 0x2279D8u;
    {
        const bool branch_taken_0x2279d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279D8u;
        // 0x2279dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279d8) {
            ctx->pc = 0x227A70u;
            goto label_227a70;
        }
    }
    ctx->pc = 0x2279E0u;
label_2279e0:
    // 0x2279e0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2279e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2279e4:
    // 0x2279e4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2279e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2279e8:
    // 0x2279e8: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x2279e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2279ec:
    // 0x2279ec: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x2279ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2279f0:
    // 0x2279f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2279f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2279f4:
    // 0x2279f4: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x2279f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2279f8:
    // 0x2279f8: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x2279f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2279fc:
    // 0x2279fc: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x2279fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_227a00:
    // 0x227a00: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x227a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_227a04:
    // 0x227a04: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x227a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
label_227a08:
    // 0x227a08: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x227a08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
label_227a0c:
    // 0x227a0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x227a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_227a10:
    // 0x227a10: 0x26240015  addiu       $a0, $s1, 0x15
    ctx->pc = 0x227a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
label_227a14:
    // 0x227a14: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_227a18:
    // 0x227a18: 0x40f809  jalr        $v0
label_227a1c:
    if (ctx->pc == 0x227A1Cu) {
        ctx->pc = 0x227A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A18u;
        // 0x227a1c: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A20u;
        goto label_227a20;
    }
    ctx->pc = 0x227A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227A20u);
        ctx->pc = 0x227A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A18u;
        // 0x227a1c: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A18u, 0x227A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227A20u;
label_227a20:
    // 0x227a20: 0xa2200027  sb          $zero, 0x27($s1)
    ctx->pc = 0x227a20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 0));
label_227a24:
    // 0x227a24: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x227a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_227a28:
    // 0x227a28: 0x40f809  jalr        $v0
label_227a2c:
    if (ctx->pc == 0x227A2Cu) {
        ctx->pc = 0x227A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A28u;
        // 0x227a2c: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A30u;
        goto label_227a30;
    }
    ctx->pc = 0x227A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227A30u);
        ctx->pc = 0x227A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A28u;
        // 0x227a2c: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A28u, 0x227A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227A30u;
label_227a30:
    // 0x227a30: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x227a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_227a34:
    // 0x227a34: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x227a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_227a38:
    // 0x227a38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x227a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_227a3c:
    // 0x227a3c: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x227a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_227a40:
    // 0x227a40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x227a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_227a44:
    // 0x227a44: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x227a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_227a48:
    // 0x227a48: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x227a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_227a4c:
    // 0x227a4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x227a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_227a50:
    // 0x227a50: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x227a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_227a54:
    // 0x227a54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x227a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_227a58:
    // 0x227a58: 0xac51021c  sw          $s1, 0x21C($v0)
    ctx->pc = 0x227a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 17));
label_227a5c:
    // 0x227a5c: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
label_227a60:
    if (ctx->pc == 0x227A60u) {
        ctx->pc = 0x227A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A5Cu;
        // 0x227a60: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A64u;
        goto label_227a64;
    }
    ctx->pc = 0x227A5Cu;
    {
        const bool branch_taken_0x227a5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x227a5c) {
            ctx->pc = 0x227A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227A5Cu;
            // 0x227a60: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227A64u;
            goto label_227a64;
        }
    }
    ctx->pc = 0x227A64u;
label_227a64:
    // 0x227a64: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
label_227a68:
    if (ctx->pc == 0x227A68u) {
        ctx->pc = 0x227A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A64u;
        // 0x227a68: 0xae35002c  sw          $s5, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A6Cu;
        goto label_227a6c;
    }
    ctx->pc = 0x227A64u;
    {
        const bool branch_taken_0x227a64 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x227a64) {
            ctx->pc = 0x227A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227A64u;
            // 0x227a68: 0xae35002c  sw          $s5, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227A6Cu;
            goto label_227a6c;
        }
    }
    ctx->pc = 0x227A6Cu;
label_227a6c:
    // 0x227a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227a70:
    // 0x227a70: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x227a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_227a74:
    // 0x227a74: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x227a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_227a78:
    // 0x227a78: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x227a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_227a7c:
    // 0x227a7c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x227a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_227a80:
    // 0x227a80: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x227a80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_227a84:
    // 0x227a84: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x227a84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_227a88:
    // 0x227a88: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x227a88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_227a8c:
    // 0x227a8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_227a90:
    // 0x227a90: 0x3e00008  jr          $ra
label_227a94:
    if (ctx->pc == 0x227A94u) {
        ctx->pc = 0x227A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A90u;
        // 0x227a94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A98u;
        goto label_227a98;
    }
    ctx->pc = 0x227A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A90u;
        // 0x227a94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227A98u;
label_227a98:
    // 0x227a98: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x227a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_227a9c:
    // 0x227a9c: 0x0  nop
    ctx->pc = 0x227a9cu;
    // NOP
    ctx->pc = 0x227aa0u;
}

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

// Function: sub_001B9930
// Address: 0x1b9930 - 0x1b9b78
void sub_001B9930_0x1b9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9930_0x1b9930");
#endif

    switch (ctx->pc) {
        case 0x1b9930u: goto label_1b9930;
        case 0x1b9934u: goto label_1b9934;
        case 0x1b9938u: goto label_1b9938;
        case 0x1b993cu: goto label_1b993c;
        case 0x1b9940u: goto label_1b9940;
        case 0x1b9944u: goto label_1b9944;
        case 0x1b9948u: goto label_1b9948;
        case 0x1b994cu: goto label_1b994c;
        case 0x1b9950u: goto label_1b9950;
        case 0x1b9954u: goto label_1b9954;
        case 0x1b9958u: goto label_1b9958;
        case 0x1b995cu: goto label_1b995c;
        case 0x1b9960u: goto label_1b9960;
        case 0x1b9964u: goto label_1b9964;
        case 0x1b9968u: goto label_1b9968;
        case 0x1b996cu: goto label_1b996c;
        case 0x1b9970u: goto label_1b9970;
        case 0x1b9974u: goto label_1b9974;
        case 0x1b9978u: goto label_1b9978;
        case 0x1b997cu: goto label_1b997c;
        case 0x1b9980u: goto label_1b9980;
        case 0x1b9984u: goto label_1b9984;
        case 0x1b9988u: goto label_1b9988;
        case 0x1b998cu: goto label_1b998c;
        case 0x1b9990u: goto label_1b9990;
        case 0x1b9994u: goto label_1b9994;
        case 0x1b9998u: goto label_1b9998;
        case 0x1b999cu: goto label_1b999c;
        case 0x1b99a0u: goto label_1b99a0;
        case 0x1b99a4u: goto label_1b99a4;
        case 0x1b99a8u: goto label_1b99a8;
        case 0x1b99acu: goto label_1b99ac;
        case 0x1b99b0u: goto label_1b99b0;
        case 0x1b99b4u: goto label_1b99b4;
        case 0x1b99b8u: goto label_1b99b8;
        case 0x1b99bcu: goto label_1b99bc;
        case 0x1b99c0u: goto label_1b99c0;
        case 0x1b99c4u: goto label_1b99c4;
        case 0x1b99c8u: goto label_1b99c8;
        case 0x1b99ccu: goto label_1b99cc;
        case 0x1b99d0u: goto label_1b99d0;
        case 0x1b99d4u: goto label_1b99d4;
        case 0x1b99d8u: goto label_1b99d8;
        case 0x1b99dcu: goto label_1b99dc;
        case 0x1b99e0u: goto label_1b99e0;
        case 0x1b99e4u: goto label_1b99e4;
        case 0x1b99e8u: goto label_1b99e8;
        case 0x1b99ecu: goto label_1b99ec;
        case 0x1b99f0u: goto label_1b99f0;
        case 0x1b99f4u: goto label_1b99f4;
        case 0x1b99f8u: goto label_1b99f8;
        case 0x1b99fcu: goto label_1b99fc;
        case 0x1b9a00u: goto label_1b9a00;
        case 0x1b9a04u: goto label_1b9a04;
        case 0x1b9a08u: goto label_1b9a08;
        case 0x1b9a0cu: goto label_1b9a0c;
        case 0x1b9a10u: goto label_1b9a10;
        case 0x1b9a14u: goto label_1b9a14;
        case 0x1b9a18u: goto label_1b9a18;
        case 0x1b9a1cu: goto label_1b9a1c;
        case 0x1b9a20u: goto label_1b9a20;
        case 0x1b9a24u: goto label_1b9a24;
        case 0x1b9a28u: goto label_1b9a28;
        case 0x1b9a2cu: goto label_1b9a2c;
        case 0x1b9a30u: goto label_1b9a30;
        case 0x1b9a34u: goto label_1b9a34;
        case 0x1b9a38u: goto label_1b9a38;
        case 0x1b9a3cu: goto label_1b9a3c;
        case 0x1b9a40u: goto label_1b9a40;
        case 0x1b9a44u: goto label_1b9a44;
        case 0x1b9a48u: goto label_1b9a48;
        case 0x1b9a4cu: goto label_1b9a4c;
        case 0x1b9a50u: goto label_1b9a50;
        case 0x1b9a54u: goto label_1b9a54;
        case 0x1b9a58u: goto label_1b9a58;
        case 0x1b9a5cu: goto label_1b9a5c;
        case 0x1b9a60u: goto label_1b9a60;
        case 0x1b9a64u: goto label_1b9a64;
        case 0x1b9a68u: goto label_1b9a68;
        case 0x1b9a6cu: goto label_1b9a6c;
        case 0x1b9a70u: goto label_1b9a70;
        case 0x1b9a74u: goto label_1b9a74;
        case 0x1b9a78u: goto label_1b9a78;
        case 0x1b9a7cu: goto label_1b9a7c;
        case 0x1b9a80u: goto label_1b9a80;
        case 0x1b9a84u: goto label_1b9a84;
        case 0x1b9a88u: goto label_1b9a88;
        case 0x1b9a8cu: goto label_1b9a8c;
        case 0x1b9a90u: goto label_1b9a90;
        case 0x1b9a94u: goto label_1b9a94;
        case 0x1b9a98u: goto label_1b9a98;
        case 0x1b9a9cu: goto label_1b9a9c;
        case 0x1b9aa0u: goto label_1b9aa0;
        case 0x1b9aa4u: goto label_1b9aa4;
        case 0x1b9aa8u: goto label_1b9aa8;
        case 0x1b9aacu: goto label_1b9aac;
        case 0x1b9ab0u: goto label_1b9ab0;
        case 0x1b9ab4u: goto label_1b9ab4;
        case 0x1b9ab8u: goto label_1b9ab8;
        case 0x1b9abcu: goto label_1b9abc;
        case 0x1b9ac0u: goto label_1b9ac0;
        case 0x1b9ac4u: goto label_1b9ac4;
        case 0x1b9ac8u: goto label_1b9ac8;
        case 0x1b9accu: goto label_1b9acc;
        case 0x1b9ad0u: goto label_1b9ad0;
        case 0x1b9ad4u: goto label_1b9ad4;
        case 0x1b9ad8u: goto label_1b9ad8;
        case 0x1b9adcu: goto label_1b9adc;
        case 0x1b9ae0u: goto label_1b9ae0;
        case 0x1b9ae4u: goto label_1b9ae4;
        case 0x1b9ae8u: goto label_1b9ae8;
        case 0x1b9aecu: goto label_1b9aec;
        case 0x1b9af0u: goto label_1b9af0;
        case 0x1b9af4u: goto label_1b9af4;
        case 0x1b9af8u: goto label_1b9af8;
        case 0x1b9afcu: goto label_1b9afc;
        case 0x1b9b00u: goto label_1b9b00;
        case 0x1b9b04u: goto label_1b9b04;
        case 0x1b9b08u: goto label_1b9b08;
        case 0x1b9b0cu: goto label_1b9b0c;
        case 0x1b9b10u: goto label_1b9b10;
        case 0x1b9b14u: goto label_1b9b14;
        case 0x1b9b18u: goto label_1b9b18;
        case 0x1b9b1cu: goto label_1b9b1c;
        case 0x1b9b20u: goto label_1b9b20;
        case 0x1b9b24u: goto label_1b9b24;
        case 0x1b9b28u: goto label_1b9b28;
        case 0x1b9b2cu: goto label_1b9b2c;
        case 0x1b9b30u: goto label_1b9b30;
        case 0x1b9b34u: goto label_1b9b34;
        case 0x1b9b38u: goto label_1b9b38;
        case 0x1b9b3cu: goto label_1b9b3c;
        case 0x1b9b40u: goto label_1b9b40;
        case 0x1b9b44u: goto label_1b9b44;
        case 0x1b9b48u: goto label_1b9b48;
        case 0x1b9b4cu: goto label_1b9b4c;
        case 0x1b9b50u: goto label_1b9b50;
        case 0x1b9b54u: goto label_1b9b54;
        case 0x1b9b58u: goto label_1b9b58;
        case 0x1b9b5cu: goto label_1b9b5c;
        case 0x1b9b60u: goto label_1b9b60;
        case 0x1b9b64u: goto label_1b9b64;
        case 0x1b9b68u: goto label_1b9b68;
        case 0x1b9b6cu: goto label_1b9b6c;
        case 0x1b9b70u: goto label_1b9b70;
        case 0x1b9b74u: goto label_1b9b74;
        default: break;
    }

    ctx->pc = 0x1b9930u;

label_1b9930:
    // 0x1b9930: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b9934:
    // 0x1b9934: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b9934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1b9938:
    // 0x1b9938: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b9938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b993c:
    // 0x1b993c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1b9940:
    // 0x1b9940: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1b9940u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1b9944:
    // 0x1b9944: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b9944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1b9948:
    // 0x1b9948: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1b994c:
    // 0x1b994c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1b9950:
    // 0x1b9950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b9950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9954:
    // 0x1b9954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b9954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b9958:
    // 0x1b9958: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1b9958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b995c:
    // 0x1b995c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1b995cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1b9960:
    // 0x1b9960: 0x26530150  addiu       $s3, $s2, 0x150
    ctx->pc = 0x1b9960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_1b9964:
    // 0x1b9964: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b9964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b9968:
    // 0x1b9968: 0x40f809  jalr        $v0
label_1b996c:
    if (ctx->pc == 0x1B996Cu) {
        ctx->pc = 0x1B996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9968u;
        // 0x1b996c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9970u;
        goto label_1b9970;
    }
    ctx->pc = 0x1B9968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9970u);
        ctx->pc = 0x1B996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9968u;
        // 0x1b996c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9968u, 0x1B9970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9970u;
label_1b9970:
    // 0x1b9970: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b9974:
    // 0x1b9974: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x1b9974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1b9978:
    // 0x1b9978: 0x40f809  jalr        $v0
label_1b997c:
    if (ctx->pc == 0x1B997Cu) {
        ctx->pc = 0x1B997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9978u;
        // 0x1b997c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9980u;
        goto label_1b9980;
    }
    ctx->pc = 0x1B9978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9980u);
        ctx->pc = 0x1B997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9978u;
        // 0x1b997c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9978u, 0x1B9980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9980u;
label_1b9980:
    // 0x1b9980: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b9984:
    // 0x1b9984: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1b9984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1b9988:
    // 0x1b9988: 0x40f809  jalr        $v0
label_1b998c:
    if (ctx->pc == 0x1B998Cu) {
        ctx->pc = 0x1B998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9988u;
        // 0x1b998c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9990u;
        goto label_1b9990;
    }
    ctx->pc = 0x1B9988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9990u);
        ctx->pc = 0x1B998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9988u;
        // 0x1b998c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9988u, 0x1B9990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9990u;
label_1b9990:
    // 0x1b9990: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b9994:
    // 0x1b9994: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1b9994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1b9998:
    // 0x1b9998: 0x40f809  jalr        $v0
label_1b999c:
    if (ctx->pc == 0x1B999Cu) {
        ctx->pc = 0x1B999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9998u;
        // 0x1b999c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99A0u;
        goto label_1b99a0;
    }
    ctx->pc = 0x1B9998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B99A0u);
        ctx->pc = 0x1B999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9998u;
        // 0x1b999c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9998u, 0x1B99A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B99A0u;
label_1b99a0:
    // 0x1b99a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b99a4:
    // 0x1b99a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b99a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b99a8:
    // 0x1b99a8: 0x40f809  jalr        $v0
label_1b99ac:
    if (ctx->pc == 0x1B99ACu) {
        ctx->pc = 0x1B99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99A8u;
        // 0x1b99ac: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99B0u;
        goto label_1b99b0;
    }
    ctx->pc = 0x1B99A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B99B0u);
        ctx->pc = 0x1B99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99A8u;
        // 0x1b99ac: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B99A8u, 0x1B99B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B99B0u;
label_1b99b0:
    // 0x1b99b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b99b4:
    // 0x1b99b4: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1b99b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1b99b8:
    // 0x1b99b8: 0x40f809  jalr        $v0
label_1b99bc:
    if (ctx->pc == 0x1B99BCu) {
        ctx->pc = 0x1B99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99B8u;
        // 0x1b99bc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99C0u;
        goto label_1b99c0;
    }
    ctx->pc = 0x1B99B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B99C0u);
        ctx->pc = 0x1B99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99B8u;
        // 0x1b99bc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B99B8u, 0x1B99C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B99C0u;
label_1b99c0:
    // 0x1b99c0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b99c4:
    // 0x1b99c4: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1b99c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1b99c8:
    // 0x1b99c8: 0x40f809  jalr        $v0
label_1b99cc:
    if (ctx->pc == 0x1B99CCu) {
        ctx->pc = 0x1B99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99C8u;
        // 0x1b99cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99D0u;
        goto label_1b99d0;
    }
    ctx->pc = 0x1B99C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B99D0u);
        ctx->pc = 0x1B99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99C8u;
        // 0x1b99cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B99C8u, 0x1B99D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B99D0u;
label_1b99d0:
    // 0x1b99d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b99d4:
    // 0x1b99d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1b99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b99d8:
    // 0x1b99d8: 0x40f809  jalr        $v0
label_1b99dc:
    if (ctx->pc == 0x1B99DCu) {
        ctx->pc = 0x1B99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99D8u;
        // 0x1b99dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99E0u;
        goto label_1b99e0;
    }
    ctx->pc = 0x1B99D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B99E0u);
        ctx->pc = 0x1B99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99D8u;
        // 0x1b99dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B99D8u, 0x1B99E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B99E0u;
label_1b99e0:
    // 0x1b99e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b99e4:
    // 0x1b99e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b99e8:
    // 0x1b99e8: 0x40f809  jalr        $v0
label_1b99ec:
    if (ctx->pc == 0x1B99ECu) {
        ctx->pc = 0x1B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99E8u;
        // 0x1b99ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99F0u;
        goto label_1b99f0;
    }
    ctx->pc = 0x1B99E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B99F0u);
        ctx->pc = 0x1B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99E8u;
        // 0x1b99ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B99E8u, 0x1B99F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B99F0u;
label_1b99f0:
    // 0x1b99f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b99f4:
    // 0x1b99f4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1b99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1b99f8:
    // 0x1b99f8: 0x40f809  jalr        $v0
label_1b99fc:
    if (ctx->pc == 0x1B99FCu) {
        ctx->pc = 0x1B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99F8u;
        // 0x1b99fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A00u;
        goto label_1b9a00;
    }
    ctx->pc = 0x1B99F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A00u);
        ctx->pc = 0x1B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99F8u;
        // 0x1b99fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B99F8u, 0x1B9A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A00u;
label_1b9a00:
    // 0x1b9a00: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9a04:
    // 0x1b9a04: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b9a08:
    // 0x1b9a08: 0x40f809  jalr        $v0
label_1b9a0c:
    if (ctx->pc == 0x1B9A0Cu) {
        ctx->pc = 0x1B9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A08u;
        // 0x1b9a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A10u;
        goto label_1b9a10;
    }
    ctx->pc = 0x1B9A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A10u);
        ctx->pc = 0x1B9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A08u;
        // 0x1b9a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A08u, 0x1B9A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A10u;
label_1b9a10:
    // 0x1b9a10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9a14:
    // 0x1b9a14: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b9a18:
    // 0x1b9a18: 0x40f809  jalr        $v0
label_1b9a1c:
    if (ctx->pc == 0x1B9A1Cu) {
        ctx->pc = 0x1B9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A18u;
        // 0x1b9a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A20u;
        goto label_1b9a20;
    }
    ctx->pc = 0x1B9A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A20u);
        ctx->pc = 0x1B9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A18u;
        // 0x1b9a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A18u, 0x1B9A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A20u;
label_1b9a20:
    // 0x1b9a20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9a24:
    // 0x1b9a24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b9a28:
    // 0x1b9a28: 0x40f809  jalr        $v0
label_1b9a2c:
    if (ctx->pc == 0x1B9A2Cu) {
        ctx->pc = 0x1B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A28u;
        // 0x1b9a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A30u;
        goto label_1b9a30;
    }
    ctx->pc = 0x1B9A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A30u);
        ctx->pc = 0x1B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A28u;
        // 0x1b9a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A28u, 0x1B9A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A30u;
label_1b9a30:
    // 0x1b9a30: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9a34:
    // 0x1b9a34: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b9a38:
    // 0x1b9a38: 0x40f809  jalr        $v0
label_1b9a3c:
    if (ctx->pc == 0x1B9A3Cu) {
        ctx->pc = 0x1B9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A38u;
        // 0x1b9a3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A40u;
        goto label_1b9a40;
    }
    ctx->pc = 0x1B9A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A40u);
        ctx->pc = 0x1B9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A38u;
        // 0x1b9a3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A38u, 0x1B9A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A40u;
label_1b9a40:
    // 0x1b9a40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9a44:
    // 0x1b9a44: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b9a48:
    // 0x1b9a48: 0x40f809  jalr        $v0
label_1b9a4c:
    if (ctx->pc == 0x1B9A4Cu) {
        ctx->pc = 0x1B9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A48u;
        // 0x1b9a4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A50u;
        goto label_1b9a50;
    }
    ctx->pc = 0x1B9A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A50u);
        ctx->pc = 0x1B9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A48u;
        // 0x1b9a4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A48u, 0x1B9A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A50u;
label_1b9a50:
    // 0x1b9a50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9a54:
    // 0x1b9a54: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b9a58:
    // 0x1b9a58: 0x40f809  jalr        $v0
label_1b9a5c:
    if (ctx->pc == 0x1B9A5Cu) {
        ctx->pc = 0x1B9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A58u;
        // 0x1b9a5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A60u;
        goto label_1b9a60;
    }
    ctx->pc = 0x1B9A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A60u);
        ctx->pc = 0x1B9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A58u;
        // 0x1b9a5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A58u, 0x1B9A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A60u;
label_1b9a60:
    // 0x1b9a60: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9a64:
    // 0x1b9a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9a68:
    // 0x1b9a68: 0x40f809  jalr        $v0
label_1b9a6c:
    if (ctx->pc == 0x1B9A6Cu) {
        ctx->pc = 0x1B9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A68u;
        // 0x1b9a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A70u;
        goto label_1b9a70;
    }
    ctx->pc = 0x1B9A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9A70u);
        ctx->pc = 0x1B9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A68u;
        // 0x1b9a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A68u, 0x1B9A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9A70u;
label_1b9a70:
    // 0x1b9a70: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1b9a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b9a74:
    // 0x1b9a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a78:
    // 0x1b9a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a7c:
    // 0x1b9a7c: 0xc0c493d  jal         func_3124F4
label_1b9a80:
    if (ctx->pc == 0x1B9A80u) {
        ctx->pc = 0x1B9A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A7Cu;
        // 0x1b9a80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9A84u;
        goto label_1b9a84;
    }
    ctx->pc = 0x1B9A7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9A84u);
    ctx->pc = 0x1B9A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A7Cu;
    // 0x1b9a80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B9A7Cu, 0x1B9A84u)) {
        return;
    }
    ctx->pc = 0x1B9A84u;
label_1b9a84:
    // 0x1b9a84: 0x92420253  lbu         $v0, 0x253($s2)
    ctx->pc = 0x1b9a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 595)));
label_1b9a88:
    // 0x1b9a88: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1b9a88u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_1b9a8c:
    // 0x1b9a8c: 0xc6420284  lwc1        $f2, 0x284($s2)
    ctx->pc = 0x1b9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9a90:
    // 0x1b9a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a94:
    // 0x1b9a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9a98:
    // 0x1b9a98: 0x0  nop
    ctx->pc = 0x1b9a98u;
    // NOP
label_1b9a9c:
    // 0x1b9a9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b9aa0:
    // 0x1b9aa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b9aa4:
    // 0x1b9aa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9aa8:
    // 0x1b9aa8: 0xc64f000c  lwc1        $f15, 0xC($s2)
    ctx->pc = 0x1b9aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1b9aac:
    // 0x1b9aac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ab0:
    // 0x1b9ab0: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x1b9ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9ab4:
    // 0x1b9ab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ab8:
    // 0x1b9ab8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b9ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b9abc:
    // 0x1b9abc: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x1b9abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b9ac0:
    // 0x1b9ac0: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x1b9ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1b9ac4:
    // 0x1b9ac4: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x1b9ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b9ac8:
    // 0x1b9ac8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b9ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b9acc:
    // 0x1b9acc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b9accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b9ad0:
    // 0x1b9ad0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b9ad4:
    // 0x1b9ad4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b9ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b9ad8:
    // 0x1b9ad8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1b9ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_1b9adc:
    // 0x1b9adc: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x1b9adcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
label_1b9ae0:
    // 0x1b9ae0: 0xc06ce2a  jal         func_1B38A8
label_1b9ae4:
    if (ctx->pc == 0x1B9AE4u) {
        ctx->pc = 0x1B9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AE0u;
        // 0x1b9ae4: 0x460094c6  mov.s       $f19, $f18 (Delay Slot)
        ctx->f[19] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9AE8u;
        goto label_1b9ae8;
    }
    ctx->pc = 0x1B9AE0u;
    SET_GPR_U32(ctx, 31, 0x1B9AE8u);
    ctx->pc = 0x1B9AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AE0u;
    // 0x1b9ae4: 0x460094c6  mov.s       $f19, $f18 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B9AE0u, 0x1B9AE8u)) {
        return;
    }
    ctx->pc = 0x1B9AE8u;
label_1b9ae8:
    // 0x1b9ae8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b9aec:
    // 0x1b9aec: 0xc06cff8  jal         func_1B3FE0
label_1b9af0:
    if (ctx->pc == 0x1B9AF0u) {
        ctx->pc = 0x1B9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AECu;
        // 0x1b9af0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9AF4u;
        goto label_1b9af4;
    }
    ctx->pc = 0x1B9AECu;
    SET_GPR_U32(ctx, 31, 0x1B9AF4u);
    ctx->pc = 0x1B9AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AECu;
    // 0x1b9af0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B9AECu, 0x1B9AF4u)) {
        return;
    }
    ctx->pc = 0x1B9AF4u;
label_1b9af4:
    // 0x1b9af4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1b9af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1b9af8:
    // 0x1b9af8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9afc:
    // 0x1b9afc: 0x40f809  jalr        $v0
label_1b9b00:
    if (ctx->pc == 0x1B9B00u) {
        ctx->pc = 0x1B9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AFCu;
        // 0x1b9b00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B04u;
        goto label_1b9b04;
    }
    ctx->pc = 0x1B9AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9B04u);
        ctx->pc = 0x1B9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AFCu;
        // 0x1b9b00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9AFCu, 0x1B9B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9B04u;
label_1b9b04:
    // 0x1b9b04: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b9b08:
    // 0x1b9b08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9b0c:
    // 0x1b9b0c: 0x40f809  jalr        $v0
label_1b9b10:
    if (ctx->pc == 0x1B9B10u) {
        ctx->pc = 0x1B9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B0Cu;
        // 0x1b9b10: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B14u;
        goto label_1b9b14;
    }
    ctx->pc = 0x1B9B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9B14u);
        ctx->pc = 0x1B9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B0Cu;
        // 0x1b9b10: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B0Cu, 0x1B9B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9B14u;
label_1b9b14:
    // 0x1b9b14: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1b9b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b9b18:
    // 0x1b9b18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9b1c:
    // 0x1b9b1c: 0x40f809  jalr        $v0
label_1b9b20:
    if (ctx->pc == 0x1B9B20u) {
        ctx->pc = 0x1B9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B1Cu;
        // 0x1b9b20: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B24u;
        goto label_1b9b24;
    }
    ctx->pc = 0x1B9B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9B24u);
        ctx->pc = 0x1B9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B1Cu;
        // 0x1b9b20: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B1Cu, 0x1B9B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9B24u;
label_1b9b24:
    // 0x1b9b24: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b9b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9b28:
    // 0x1b9b28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9b2c:
    // 0x1b9b2c: 0x40f809  jalr        $v0
label_1b9b30:
    if (ctx->pc == 0x1B9B30u) {
        ctx->pc = 0x1B9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B2Cu;
        // 0x1b9b30: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B34u;
        goto label_1b9b34;
    }
    ctx->pc = 0x1B9B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9B34u);
        ctx->pc = 0x1B9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B2Cu;
        // 0x1b9b30: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B2Cu, 0x1B9B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9B34u;
label_1b9b34:
    // 0x1b9b34: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x1b9b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1b9b38:
    // 0x1b9b38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9b3c:
    // 0x1b9b3c: 0x40f809  jalr        $v0
label_1b9b40:
    if (ctx->pc == 0x1B9B40u) {
        ctx->pc = 0x1B9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B3Cu;
        // 0x1b9b40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B44u;
        goto label_1b9b44;
    }
    ctx->pc = 0x1B9B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9B44u);
        ctx->pc = 0x1B9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B3Cu;
        // 0x1b9b40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B3Cu, 0x1B9B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9B44u;
label_1b9b44:
    // 0x1b9b44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9b48:
    // 0x1b9b48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b9b4c:
    // 0x1b9b4c: 0x40f809  jalr        $v0
label_1b9b50:
    if (ctx->pc == 0x1B9B50u) {
        ctx->pc = 0x1B9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B4Cu;
        // 0x1b9b50: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B54u;
        goto label_1b9b54;
    }
    ctx->pc = 0x1B9B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9B54u);
        ctx->pc = 0x1B9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B4Cu;
        // 0x1b9b50: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B4Cu, 0x1B9B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9B54u;
label_1b9b54:
    // 0x1b9b54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b9b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b9b58:
    // 0x1b9b58: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b9b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b9b5c:
    // 0x1b9b5c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b9b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b9b60:
    // 0x1b9b60: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b9b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9b64:
    // 0x1b9b64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b9b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b9b68:
    // 0x1b9b68: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1b9b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b9b6c:
    // 0x1b9b6c: 0x3e00008  jr          $ra
label_1b9b70:
    if (ctx->pc == 0x1B9B70u) {
        ctx->pc = 0x1B9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B6Cu;
        // 0x1b9b70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B74u;
        goto label_1b9b74;
    }
    ctx->pc = 0x1B9B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B6Cu;
        // 0x1b9b70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9B74u;
label_1b9b74:
    // 0x1b9b74: 0x0  nop
    ctx->pc = 0x1b9b74u;
    // NOP
    ctx->pc = 0x1b9b78u;
}

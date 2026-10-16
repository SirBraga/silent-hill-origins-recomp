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

// Function: sub_0018C7F8
// Address: 0x18c7f8 - 0x18c918
void sub_0018C7F8_0x18c7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C7F8_0x18c7f8");
#endif

    switch (ctx->pc) {
        case 0x18c818u: goto label_18c818;
        case 0x18c8d0u: goto label_18c8d0;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c8f8u: goto label_18c8f8;
        default: break;
    }

    ctx->pc = 0x18c7f8u;

    // 0x18c7f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18c7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18c7fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18c800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c804: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18c804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18c808: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18c80c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c810: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x18C810u;
    SET_GPR_U32(ctx, 31, 0x18C818u);
    ctx->pc = 0x18C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C810u;
    // 0x18c814: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x18C810u, 0x18C818u)) {
        return;
    }
    ctx->pc = 0x18C818u;
label_18c818:
    // 0x18c818: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x18c818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x18c81c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18c81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18c820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18c820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c824: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18c824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18c828: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x18c828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x18c82c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c830: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18c830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x18c834: 0x24639208  addiu       $v1, $v1, -0x6DF8
    ctx->pc = 0x18c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939144));
    // 0x18c838: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x18c838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18c83c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x18c83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c840: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x18c840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18c844: 0x244291e8  addiu       $v0, $v0, -0x6E18
    ctx->pc = 0x18c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939112));
    // 0x18c848: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x18c848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x18c84c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x18c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x18c850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c854: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x18c854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x18c858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c85c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x18c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x18c860: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x18c860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x18c864: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x18c864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x18c868: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x18c868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x18c86c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x18c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x18c870: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x18c870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x18c874: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x18c874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x18c878: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x18c878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x18c87c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x18c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x18c880: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x18c880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x18c884: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x18c884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x18c888: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x18c888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x18c88c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x18c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x18c890: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x18c890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x18c894: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x18c894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x18c898: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x18c898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x18c89c: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x18c8a0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x18c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x18c8a4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x18c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x18c8a8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x18c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x18c8ac: 0xae070048  sw          $a3, 0x48($s0)
    ctx->pc = 0x18c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 7));
    // 0x18c8b0: 0xe60100b4  swc1        $f1, 0xB4($s0)
    ctx->pc = 0x18c8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x18c8b4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x18c8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x18c8b8: 0xae0800e4  sw          $t0, 0xE4($s0)
    ctx->pc = 0x18c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 8));
    // 0x18c8bc: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x18c8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x18c8c0: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x18c8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x18c8c4: 0xae060044  sw          $a2, 0x44($s0)
    ctx->pc = 0x18c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
    // 0x18c8c8: 0xc0803dc  jal         func_200F70
    ctx->pc = 0x18C8C8u;
    SET_GPR_U32(ctx, 31, 0x18C8D0u);
    ctx->pc = 0x18C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8C8u;
    // 0x18c8cc: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200F70u, 0x18C8C8u, 0x18C8D0u)) {
        return;
    }
    ctx->pc = 0x18C8D0u;
label_18c8d0:
    // 0x18c8d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18c8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8d8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x18c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x18c8dc: 0xc0803e4  jal         func_200F90
    ctx->pc = 0x18C8DCu;
    SET_GPR_U32(ctx, 31, 0x18C8E4u);
    ctx->pc = 0x18C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8DCu;
    // 0x18c8e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200F90u, 0x18C8DCu, 0x18C8E4u)) {
        return;
    }
    ctx->pc = 0x18C8E4u;
label_18c8e4:
    // 0x18c8e4: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x18c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x18c8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8ec: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x18c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x18c8f0: 0xc04f0aa  jal         func_13C2A8
    ctx->pc = 0x18C8F0u;
    SET_GPR_U32(ctx, 31, 0x18C8F8u);
    ctx->pc = 0x18C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8F0u;
    // 0x18c8f4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2A8u, 0x18C8F0u, 0x18C8F8u)) {
        return;
    }
    ctx->pc = 0x18C8F8u;
label_18c8f8:
    // 0x18c8f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18c8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c900: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18c900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c904: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18c904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C90Cu;
        // 0x18c910: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C914u;
    // 0x18c914: 0x0  nop
    ctx->pc = 0x18c914u;
    // NOP
    ctx->pc = 0x18c918u;
}

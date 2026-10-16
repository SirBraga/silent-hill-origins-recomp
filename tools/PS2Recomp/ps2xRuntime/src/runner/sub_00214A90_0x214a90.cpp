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

// Function: sub_00214A90
// Address: 0x214a90 - 0x214d00
void sub_00214A90_0x214a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214A90_0x214a90");
#endif

    switch (ctx->pc) {
        case 0x214accu: goto label_214acc;
        case 0x214ae8u: goto label_214ae8;
        case 0x214af8u: goto label_214af8;
        case 0x214b08u: goto label_214b08;
        case 0x214b40u: goto label_214b40;
        case 0x214b50u: goto label_214b50;
        case 0x214b88u: goto label_214b88;
        case 0x214ba0u: goto label_214ba0;
        case 0x214bb8u: goto label_214bb8;
        case 0x214bd0u: goto label_214bd0;
        case 0x214be8u: goto label_214be8;
        case 0x214c08u: goto label_214c08;
        case 0x214c28u: goto label_214c28;
        case 0x214c3cu: goto label_214c3c;
        case 0x214c50u: goto label_214c50;
        case 0x214c58u: goto label_214c58;
        case 0x214c64u: goto label_214c64;
        case 0x214c70u: goto label_214c70;
        case 0x214c94u: goto label_214c94;
        case 0x214c9cu: goto label_214c9c;
        case 0x214cdcu: goto label_214cdc;
        default: break;
    }

    ctx->pc = 0x214a90u;

    // 0x214a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x214a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x214a94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x214a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x214a98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x214a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x214a9c: 0x24426518  addiu       $v0, $v0, 0x6518
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25880));
    // 0x214aa0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x214aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x214aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214aa8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x214aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x214aac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ab0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x214ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x214ab4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x214ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x214ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214abc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x214abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214ac0: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x214ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    // 0x214ac4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x214AC4u;
    SET_GPR_U32(ctx, 31, 0x214ACCu);
    ctx->pc = 0x214AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AC4u;
    // 0x214ac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x214AC4u, 0x214ACCu)) {
        return;
    }
    ctx->pc = 0x214ACCu;
label_214acc:
    // 0x214acc: 0x3c13005c  lui         $s3, 0x5C
    ctx->pc = 0x214accu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
    // 0x214ad0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x214ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214adc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x214adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x214ae0: 0xc0817da  jal         func_205F68
    ctx->pc = 0x214AE0u;
    SET_GPR_U32(ctx, 31, 0x214AE8u);
    ctx->pc = 0x214AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AE0u;
    // 0x214ae4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x214AE0u, 0x214AE8u)) {
        return;
    }
    ctx->pc = 0x214AE8u;
label_214ae8:
    // 0x214ae8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x214ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x214aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214af0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x214AF0u;
    SET_GPR_U32(ctx, 31, 0x214AF8u);
    ctx->pc = 0x214AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AF0u;
    // 0x214af4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x214AF0u, 0x214AF8u)) {
        return;
    }
    ctx->pc = 0x214AF8u;
label_214af8:
    // 0x214af8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x214af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x214afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b00: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x214B00u;
    SET_GPR_U32(ctx, 31, 0x214B08u);
    ctx->pc = 0x214B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B00u;
    // 0x214b04: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x214B00u, 0x214B08u)) {
        return;
    }
    ctx->pc = 0x214B08u;
label_214b08:
    // 0x214b08: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x214b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x214b0c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x214b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x214b10: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x214b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x214b14: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x214b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x214b18: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x214b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x214b1c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x214b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x214b20: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x214b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x214b24: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x214b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x214b28: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x214b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x214b2c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x214b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x214b30: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x214b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x214b34: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x214B34u;
    {
        const bool branch_taken_0x214b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B34u;
        // 0x214b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b34) {
            ctx->pc = 0x214C00u;
            goto label_214c00;
        }
    }
    ctx->pc = 0x214B3Cu;
    // 0x214b3c: 0x0  nop
    ctx->pc = 0x214b3cu;
    // NOP
label_214b40:
    // 0x214b40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b44: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x214b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x214b48: 0xc0817da  jal         func_205F68
    ctx->pc = 0x214B48u;
    SET_GPR_U32(ctx, 31, 0x214B50u);
    ctx->pc = 0x214B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B48u;
    // 0x214b4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x214B48u, 0x214B50u)) {
        return;
    }
    ctx->pc = 0x214B50u;
label_214b50:
    // 0x214b50: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x214b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b54: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x214b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x214b58: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x214B58u;
    {
        const bool branch_taken_0x214b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B58u;
        // 0x214b5c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b58) {
            ctx->pc = 0x214BE8u;
            goto label_214be8;
        }
    }
    ctx->pc = 0x214B60u;
    // 0x214b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214b64: 0x24426500  addiu       $v0, $v0, 0x6500
    ctx->pc = 0x214b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25856));
    // 0x214b68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214b6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214b70: 0x800008  jr          $a0
    ctx->pc = 0x214B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214B78u: goto label_214b78;
            case 0x214B90u: goto label_214b90;
            case 0x214BA8u: goto label_214ba8;
            case 0x214BC0u: goto label_214bc0;
            case 0x214BD8u: goto label_214bd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214B78u;
label_214b78:
    // 0x214b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b80: 0xc085340  jal         func_214D00
    ctx->pc = 0x214B80u;
    SET_GPR_U32(ctx, 31, 0x214B88u);
    ctx->pc = 0x214B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B80u;
    // 0x214b84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214D00u, 0x214B80u, 0x214B88u)) {
        return;
    }
    ctx->pc = 0x214B88u;
label_214b88:
    // 0x214b88: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x214B88u;
    {
        const bool branch_taken_0x214b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B88u;
        // 0x214b8c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b88) {
            ctx->pc = 0x214BECu;
            goto label_214bec;
        }
    }
    ctx->pc = 0x214B90u;
label_214b90:
    // 0x214b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b98: 0xc085390  jal         func_214E40
    ctx->pc = 0x214B98u;
    SET_GPR_U32(ctx, 31, 0x214BA0u);
    ctx->pc = 0x214B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B98u;
    // 0x214b9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214E40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214E40u, 0x214B98u, 0x214BA0u)) {
        return;
    }
    ctx->pc = 0x214BA0u;
label_214ba0:
    // 0x214ba0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x214BA0u;
    {
        const bool branch_taken_0x214ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BA0u;
        // 0x214ba4: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ba0) {
            ctx->pc = 0x214BECu;
            goto label_214bec;
        }
    }
    ctx->pc = 0x214BA8u;
label_214ba8:
    // 0x214ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bb0: 0xc085be4  jal         func_216F90
    ctx->pc = 0x214BB0u;
    SET_GPR_U32(ctx, 31, 0x214BB8u);
    ctx->pc = 0x214BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BB0u;
    // 0x214bb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F90u, 0x214BB0u, 0x214BB8u)) {
        return;
    }
    ctx->pc = 0x214BB8u;
label_214bb8:
    // 0x214bb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x214BB8u;
    {
        const bool branch_taken_0x214bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BB8u;
        // 0x214bbc: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bb8) {
            ctx->pc = 0x214BECu;
            goto label_214bec;
        }
    }
    ctx->pc = 0x214BC0u;
label_214bc0:
    // 0x214bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bc8: 0xc085bf0  jal         func_216FC0
    ctx->pc = 0x214BC8u;
    SET_GPR_U32(ctx, 31, 0x214BD0u);
    ctx->pc = 0x214BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BC8u;
    // 0x214bcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216FC0u, 0x214BC8u, 0x214BD0u)) {
        return;
    }
    ctx->pc = 0x214BD0u;
label_214bd0:
    // 0x214bd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214BD0u;
    {
        const bool branch_taken_0x214bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BD0u;
        // 0x214bd4: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bd0) {
            ctx->pc = 0x214BECu;
            goto label_214bec;
        }
    }
    ctx->pc = 0x214BD8u;
label_214bd8:
    // 0x214bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bdc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214be0: 0xc085bfc  jal         func_216FF0
    ctx->pc = 0x214BE0u;
    SET_GPR_U32(ctx, 31, 0x214BE8u);
    ctx->pc = 0x214BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BE0u;
    // 0x214be4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216FF0u, 0x214BE0u, 0x214BE8u)) {
        return;
    }
    ctx->pc = 0x214BE8u;
label_214be8:
    // 0x214be8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x214be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_214bec:
    // 0x214bec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x214becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x214bf0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x214bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x214bf4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x214bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214bf8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x214BF8u;
    {
        const bool branch_taken_0x214bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BF8u;
        // 0x214bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bf8) {
            ctx->pc = 0x214B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214b40;
        }
    }
    ctx->pc = 0x214C00u;
label_214c00:
    // 0x214c00: 0xc08527c  jal         func_2149F0
    ctx->pc = 0x214C00u;
    SET_GPR_U32(ctx, 31, 0x214C08u);
    ctx->pc = 0x214C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C00u;
    // 0x214c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2149F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2149F0u, 0x214C00u, 0x214C08u)) {
        return;
    }
    ctx->pc = 0x214C08u;
label_214c08:
    // 0x214c08: 0x8e6202a4  lw          $v0, 0x2A4($s3)
    ctx->pc = 0x214c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
    // 0x214c0c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x214C0Cu;
    {
        const bool branch_taken_0x214c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214c0c) {
            ctx->pc = 0x214C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214C0Cu;
            // 0x214c10: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214CC8u;
            goto label_214cc8;
        }
    }
    ctx->pc = 0x214C14u;
    // 0x214c14: 0x24074504  addiu       $a3, $zero, 0x4504
    ctx->pc = 0x214c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17668));
    // 0x214c18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x214c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214c1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x214c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214c20: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x214C20u;
    SET_GPR_U32(ctx, 31, 0x214C28u);
    ctx->pc = 0x214C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C20u;
    // 0x214c24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x214C20u, 0x214C28u)) {
        return;
    }
    ctx->pc = 0x214C28u;
label_214c28:
    // 0x214c28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x214c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c34: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x214C34u;
    SET_GPR_U32(ctx, 31, 0x214C3Cu);
    ctx->pc = 0x214C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C34u;
    // 0x214c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x214C34u, 0x214C3Cu)) {
        return;
    }
    ctx->pc = 0x214C3Cu;
label_214c3c:
    // 0x214c3c: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x214c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x214c40: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x214c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x214c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c48: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x214C48u;
    SET_GPR_U32(ctx, 31, 0x214C50u);
    ctx->pc = 0x214C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C48u;
    // 0x214c4c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x214C48u, 0x214C50u)) {
        return;
    }
    ctx->pc = 0x214C50u;
label_214c50:
    // 0x214c50: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x214C50u;
    SET_GPR_U32(ctx, 31, 0x214C58u);
    ctx->pc = 0x214C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C50u;
    // 0x214c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x214C50u, 0x214C58u)) {
        return;
    }
    ctx->pc = 0x214C58u;
label_214c58:
    // 0x214c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c5c: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x214C5Cu;
    SET_GPR_U32(ctx, 31, 0x214C64u);
    ctx->pc = 0x214C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C5Cu;
    // 0x214c60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x214C5Cu, 0x214C64u)) {
        return;
    }
    ctx->pc = 0x214C64u;
label_214c64:
    // 0x214c64: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x214c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x214c68: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x214c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x214c6c: 0x0  nop
    ctx->pc = 0x214c6cu;
    // NOP
label_214c70:
    // 0x214c70: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x214c70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x214c74: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x214c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x214c78: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x214c78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x214c7c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x214c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x214c80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x214c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x214c84: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x214C84u;
    {
        const bool branch_taken_0x214c84 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x214C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C84u;
        // 0x214c88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c84) {
            ctx->pc = 0x214C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214c70;
        }
    }
    ctx->pc = 0x214C8Cu;
    // 0x214c8c: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x214C8Cu;
    SET_GPR_U32(ctx, 31, 0x214C94u);
    ctx->pc = 0x214C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C8Cu;
    // 0x214c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x214C8Cu, 0x214C94u)) {
        return;
    }
    ctx->pc = 0x214C94u;
label_214c94:
    // 0x214c94: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x214C94u;
    SET_GPR_U32(ctx, 31, 0x214C9Cu);
    ctx->pc = 0x214C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C94u;
    // 0x214c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x214C94u, 0x214C9Cu)) {
        return;
    }
    ctx->pc = 0x214C9Cu;
label_214c9c:
    // 0x214c9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x214c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x214ca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214ca4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x214ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x214ca8: 0x24632d40  addiu       $v1, $v1, 0x2D40
    ctx->pc = 0x214ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11584));
    // 0x214cac: 0xae6202a4  sw          $v0, 0x2A4($s3)
    ctx->pc = 0x214cacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 676), GPR_U32(ctx, 2));
    // 0x214cb0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x214cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x702D54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702D54u, _value); } while (0); }
    // 0x214cb4: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x214cb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x702D44u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x702D44u, _value); } while (0);
    // 0x214cb8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x214cb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x702D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702D48u, _value); } while (0);
    // 0x214cbc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x214cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x702D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702D4Cu, _value); } while (0);
    // 0x214cc0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x214cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x702D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x702D50u, _value); } while (0); }
    // 0x214cc4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x214cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_214cc8:
    // 0x214cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ccc: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x214cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x214cd0: 0xae02027c  sw          $v0, 0x27C($s0)
    ctx->pc = 0x214cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
    // 0x214cd4: 0xc0853e0  jal         func_214F80
    ctx->pc = 0x214CD4u;
    SET_GPR_U32(ctx, 31, 0x214CDCu);
    ctx->pc = 0x214CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214CD4u;
    // 0x214cd8: 0xae020284  sw          $v0, 0x284($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214F80u, 0x214CD4u, 0x214CDCu)) {
        return;
    }
    ctx->pc = 0x214CDCu;
label_214cdc:
    // 0x214cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x214cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ce0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x214ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214ce4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x214ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214ce8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x214ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214cec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x214cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x214CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CF4u;
        // 0x214cf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214CFCu;
    // 0x214cfc: 0x0  nop
    ctx->pc = 0x214cfcu;
    // NOP
    ctx->pc = 0x214d00u;
}

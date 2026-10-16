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

// Function: sub_002999C8
// Address: 0x2999c8 - 0x299b28
void sub_002999C8_0x2999c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002999C8_0x2999c8");
#endif

    ctx->pc = 0x2999c8u;

    // 0x2999c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2999c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2999cc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2999ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999d0: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x2999d0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999d4: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x2999d4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999d8: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x2999D8u;
    {
        const bool branch_taken_0x2999d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999D8u;
        // 0x2999dc: 0xe0c82d  daddu       $t9, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999d8) {
            ctx->pc = 0x299A2Cu;
            goto label_299a2c;
        }
    }
    ctx->pc = 0x2999E0u;
    // 0x2999e0: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x2999e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2999e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2999e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2999e8: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x2999e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x2999ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2999f0: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2999f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2999f4: 0x2463da40  addiu       $v1, $v1, -0x25C0
    ctx->pc = 0x2999f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957632));
    // 0x2999f8: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x2999f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x2999fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2999fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x299a00: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x299a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x299a04: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x299a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x299a08: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x299a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299a0c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x299a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x299a10: 0xa4460018  sh          $a2, 0x18($v0)
    ctx->pc = 0x299a10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x299a14: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x299a14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x299a18: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x299a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x299a1c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x299a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x299a20: 0xad800010  sw          $zero, 0x10($t4)
    ctx->pc = 0x299a20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
    // 0x299a24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x299a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x299a28: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x299a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_299a2c:
    // 0x299a2c: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x299a2cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x299a30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x299a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x299a34: 0x2462d868  addiu       $v0, $v1, -0x2798
    ctx->pc = 0x299a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957160));
    // 0x299a38: 0x8d890008  lw          $t1, 0x8($t4)
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x299a3c: 0xad620028  sw          $v0, 0x28($t3)
    ctx->pc = 0x299a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 2));
    // 0x299a40: 0x3c0a006b  lui         $t2, 0x6B
    ctx->pc = 0x299a40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)107 << 16));
    // 0x299a44: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x299a44u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x6AD870u));
    // 0x299a48: 0x2547d878  addiu       $a3, $t2, -0x2788
    ctx->pc = 0x299a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957176));
    // 0x299a4c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x299a4cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AD870u));
    // 0x299a50: 0x1893023  subu        $a2, $t4, $t1
    ctx->pc = 0x299a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x299a54: 0xdc64d868  ld          $a0, -0x2798($v1)
    ctx->pc = 0x299a54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294957160)));
    // 0x299a58: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x299a5c: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x299a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x299a60: 0x2563fff8  addiu       $v1, $t3, -0x8
    ctx->pc = 0x299a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x299a64: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x299a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x299a68: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x299a6c: 0xad7d0028  sw          $sp, 0x28($t3)
    ctx->pc = 0x299a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 29));
    // 0x299a70: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x299a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x299a74: 0xad270028  sw          $a3, 0x28($t1)
    ctx->pc = 0x299a74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 7));
    // 0x299a78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x299a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x299a7c: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x299a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x299a80: 0x3c0e006b  lui         $t6, 0x6B
    ctx->pc = 0x299a80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)107 << 16));
    // 0x299a84: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x299a84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x299a88: 0x25cdd858  addiu       $t5, $t6, -0x27A8
    ctx->pc = 0x299a88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957144));
    // 0x299a8c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x299a8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x299a90: 0xdd44d878  ld          $a0, -0x2788($t2)
    ctx->pc = 0x299a90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 4294957176)));
    // 0x299a94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x299a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x299a98: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x299a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x299a9c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x299a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x299aa0: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x299aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x299aa4: 0xa7a80008  sh          $t0, 0x8($sp)
    ctx->pc = 0x299aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x299aa8: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x299aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x299aac: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x299AACu;
    {
        const bool branch_taken_0x299aac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x299AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299AACu;
        // 0x299ab0: 0xad6d0028  sw          $t5, 0x28($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299aac) {
            ctx->pc = 0x299AE0u;
            goto label_299ae0;
        }
    }
    ctx->pc = 0x299AB4u;
    // 0x299ab4: 0xddc6d858  ld          $a2, -0x27A8($t6)
    ctx->pc = 0x299ab4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 14), 4294957144)));
    // 0x299ab8: 0x2562fff0  addiu       $v0, $t3, -0x10
    ctx->pc = 0x299ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
    // 0x299abc: 0xdda40008  ld          $a0, 0x8($t5)
    ctx->pc = 0x299abcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x299ac0: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x299ac4: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x299ac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x299ac8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x299ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299acc: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x299accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x299ad0: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x299ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x299ad4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299ad8: 0xad650028  sw          $a1, 0x28($t3)
    ctx->pc = 0x299ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 5));
    // 0x299adc: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x299adcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
label_299ae0:
    // 0x299ae0: 0x57000003  bnel        $t8, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x299AE0u;
    {
        const bool branch_taken_0x299ae0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x299ae0) {
            ctx->pc = 0x299AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299AE0u;
            // 0x299ae4: 0xa160001a  sb          $zero, 0x1A($t3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 11), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299AF0u;
            goto label_299af0;
        }
    }
    ctx->pc = 0x299AE8u;
    // 0x299ae8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x299ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299aec: 0xa162001a  sb          $v0, 0x1A($t3)
    ctx->pc = 0x299aecu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 26), (uint8_t)GPR_U32(ctx, 2));
label_299af0:
    // 0x299af0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x299af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x299af4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x299af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x299af8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x299af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299afc: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x299afcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x299b00: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x299b00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x299b04: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x299b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b08: 0xa5630018  sh          $v1, 0x18($t3)
    ctx->pc = 0x299b08u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x299b0c: 0xfd640010  sd          $a0, 0x10($t3)
    ctx->pc = 0x299b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 4));
    // 0x299b10: 0xad65001c  sw          $a1, 0x1C($t3)
    ctx->pc = 0x299b10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 5));
    // 0x299b14: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x299b14u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x299b18: 0xa160001b  sb          $zero, 0x1B($t3)
    ctx->pc = 0x299b18u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x299b1c: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x299b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x299b20: 0x3e00008  jr          $ra
    ctx->pc = 0x299B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B20u;
        // 0x299b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299B28u;
}

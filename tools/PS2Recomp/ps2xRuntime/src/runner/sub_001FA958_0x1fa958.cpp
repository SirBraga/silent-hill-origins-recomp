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

// Function: sub_001FA958
// Address: 0x1fa958 - 0x1faad0
void sub_001FA958_0x1fa958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA958_0x1fa958");
#endif

    switch (ctx->pc) {
        case 0x1fa9a8u: goto label_1fa9a8;
        case 0x1fa9e8u: goto label_1fa9e8;
        case 0x1faa88u: goto label_1faa88;
        default: break;
    }

    ctx->pc = 0x1fa958u;

    // 0x1fa958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fa95c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1fa95cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa960: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x1fa960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x1fa964: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fa964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa968: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1fa968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1fa96c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x1fa96cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa970: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1fa970u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa974: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1fa974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1fa978: 0x8df80004  lw          $t8, 0x4($t7)
    ctx->pc = 0x1fa978u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1fa97c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fa97cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa980: 0x181140  sll         $v0, $t8, 5
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
    // 0x1fa984: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1fa984u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1fa988: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1fa988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1fa98c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1fa98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1fa990: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fa990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fa994: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x1fa994u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa998: 0x13000036  beqz        $t8, . + 4 + (0x36 << 2)
    ctx->pc = 0x1FA998u;
    {
        const bool branch_taken_0x1fa998 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA998u;
        // 0x1fa99c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa998) {
            ctx->pc = 0x1FAA74u;
            goto label_1faa74;
        }
    }
    ctx->pc = 0x1FA9A0u;
    // 0x1fa9a0: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x1fa9a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa9a4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x1fa9a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_1fa9a8:
    // 0x1fa9a8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1fa9a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9ac: 0x110d0029  beq         $t0, $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FA9ACu;
    {
        const bool branch_taken_0x1fa9ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x1FA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9ACu;
        // 0x1fa9b0: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9ac) {
            ctx->pc = 0x1FAA54u;
            goto label_1faa54;
        }
    }
    ctx->pc = 0x1FA9B4u;
    // 0x1fa9b4: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x1fa9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1fa9b8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1fa9bc: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x1fa9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1fa9c0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1fa9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fa9c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fa9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa9c8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1fa9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa9cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fa9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fa9d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fa9d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa9d8: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FA9D8u;
    {
        const bool branch_taken_0x1fa9d8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1FA9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9D8u;
        // 0x1fa9dc: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9d8) {
            ctx->pc = 0x1FAA54u;
            goto label_1faa54;
        }
    }
    ctx->pc = 0x1FA9E0u;
    // 0x1fa9e0: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fa9e4: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1fa9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1fa9e8:
    // 0x1fa9e8: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x1fa9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1fa9ec: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fa9f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa9f4: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1fa9f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1fa9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fa9fc: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1fa9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faa00: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1faa04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1faa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1faa08: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1faa08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1faa0c: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x1faa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x1faa10: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x1faa10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1faa14: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1faa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1faa18: 0x110d000f  beq         $t0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x1FAA18u;
    {
        const bool branch_taken_0x1faa18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x1FAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA18u;
        // 0x1faa1c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa18) {
            ctx->pc = 0x1FAA58u;
            goto label_1faa58;
        }
    }
    ctx->pc = 0x1FAA20u;
    // 0x1faa20: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1faa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1faa24: 0x3271821  addu        $v1, $t9, $a3
    ctx->pc = 0x1faa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x1faa28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1faa28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa2c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1faa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faa30: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1faa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1faa34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1faa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1faa38: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1faa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1faa3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1faa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1faa40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1faa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faa44: 0x460ffe8  bltz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FAA44u;
    {
        const bool branch_taken_0x1faa44 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1FAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA44u;
        // 0x1faa48: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa44) {
            ctx->pc = 0x1FA9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa9e8;
        }
    }
    ctx->pc = 0x1FAA4Cu;
    // 0x1faa4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAA4Cu;
    {
        const bool branch_taken_0x1faa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA4Cu;
        // 0x1faa50: 0x20b1821  addu        $v1, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa4c) {
            ctx->pc = 0x1FAA60u;
            goto label_1faa60;
        }
    }
    ctx->pc = 0x1FAA54u;
label_1faa54:
    // 0x1faa54: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1faa54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1faa58:
    // 0x1faa58: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1faa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa5c: 0x20b1821  addu        $v1, $s0, $t3
    ctx->pc = 0x1faa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_1faa60:
    // 0x1faa60: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1faa60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa64: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x1faa64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1faa68: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1FAA68u;
    {
        const bool branch_taken_0x1faa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA68u;
        // 0x1faa6c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa68) {
            ctx->pc = 0x1FA9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa9a8;
        }
    }
    ctx->pc = 0x1FAA70u;
    // 0x1faa70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1faa70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1faa74:
    // 0x1faa74: 0x1300000f  beqz        $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x1FAA74u;
    {
        const bool branch_taken_0x1faa74 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA74u;
        // 0x1faa78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa74) {
            ctx->pc = 0x1FAAB4u;
            goto label_1faab4;
        }
    }
    ctx->pc = 0x1FAA7Cu;
    // 0x1faa7c: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x1faa7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1faa80: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1faa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1faa84: 0x0  nop
    ctx->pc = 0x1faa84u;
    // NOP
label_1faa88:
    // 0x1faa88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1faa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1faa8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1faa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1faa90: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAA90u;
    {
        const bool branch_taken_0x1faa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA90u;
        // 0x1faa94: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa90) {
            ctx->pc = 0x1FAAA4u;
            goto label_1faaa4;
        }
    }
    ctx->pc = 0x1FAA98u;
    // 0x1faa98: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1faa9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1faa9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1faaa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1faaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1faaa4:
    // 0x1faaa4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1faaa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1faaa8: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x1faaa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1faaac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FAAACu;
    {
        const bool branch_taken_0x1faaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAACu;
        // 0x1faab0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faaac) {
            ctx->pc = 0x1FAA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faa88;
        }
    }
    ctx->pc = 0x1FAAB4u;
label_1faab4:
    // 0x1faab4: 0xade80004  sw          $t0, 0x4($t7)
    ctx->pc = 0x1faab4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 8));
    // 0x1faab8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x1faab8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faabc: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x1faabcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faac0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1faac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1faac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAC4u;
        // 0x1faac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAACCu;
    // 0x1faacc: 0x0  nop
    ctx->pc = 0x1faaccu;
    // NOP
    ctx->pc = 0x1faad0u;
}

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

// Function: sub_002EB3B0
// Address: 0x2eb3b0 - 0x2eb5a0
void sub_002EB3B0_0x2eb3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB3B0_0x2eb3b0");
#endif

    switch (ctx->pc) {
        case 0x2eb3ccu: goto label_2eb3cc;
        case 0x2eb3e0u: goto label_2eb3e0;
        case 0x2eb584u: goto label_2eb584;
        default: break;
    }

    ctx->pc = 0x2eb3b0u;

    // 0x2eb3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eb3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eb3b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2eb3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2eb3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eb3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eb3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb3c4: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2EB3C4u;
    SET_GPR_U32(ctx, 31, 0x2EB3CCu);
    ctx->pc = 0x2EB3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3C4u;
    // 0x2eb3c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2EB3C4u, 0x2EB3CCu)) {
        return;
    }
    ctx->pc = 0x2EB3CCu;
label_2eb3cc:
    // 0x2eb3cc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2eb3d0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2eb3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb3d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eb3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb3d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eb3d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3dc: 0x244be5c0  addiu       $t3, $v0, -0x1A40
    ctx->pc = 0x2eb3dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
label_2eb3e0:
    // 0x2eb3e0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2eb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2eb3e4: 0x56020062  bnel        $s0, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2EB3E4u;
    {
        const bool branch_taken_0x2eb3e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb3e4) {
            ctx->pc = 0x2EB3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB3E4u;
            // 0x2eb3e8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB570u;
            goto label_2eb570;
        }
    }
    ctx->pc = 0x2EB3ECu;
    // 0x2eb3ec: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2eb3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2eb3f0: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EB3F0u;
    {
        const bool branch_taken_0x2eb3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3F0u;
        // 0x2eb3f4: 0x8f828cb0  lw          $v0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3f0) {
            ctx->pc = 0x2EB488u;
            goto label_2eb488;
        }
    }
    ctx->pc = 0x2EB3F8u;
    // 0x2eb3f8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2eb3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eb3fc: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2eb3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2eb400: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2eb400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eb404: 0xa0400600  sb          $zero, 0x600($v0)
    ctx->pc = 0x2eb404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eb408: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2eb408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2eb40c: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x2eb40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2eb410: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x2eb410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2eb414: 0x24a30630  addiu       $v1, $a1, 0x630
    ctx->pc = 0x2eb414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x2eb418: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x2eb418u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
    // 0x2eb41c: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x2eb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x2eb420: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2eb420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2eb424: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x2eb424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eb428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eb428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eb42c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2eb42cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2eb430: 0x24a80638  addiu       $t0, $a1, 0x638
    ctx->pc = 0x2eb430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    // 0x2eb434: 0x24a70640  addiu       $a3, $a1, 0x640
    ctx->pc = 0x2eb434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x2eb438: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb43c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2eb43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2eb440: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2eb440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2eb444: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2eb444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2eb448: 0x24a90648  addiu       $t1, $a1, 0x648
    ctx->pc = 0x2eb448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x2eb44c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2eb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2eb450: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x2eb450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2eb454: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x2eb454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
    // 0x2eb458: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2eb458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2eb45c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2eb45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2eb460: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2eb460u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2eb464: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eb468: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb46c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2eb46cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2eb470: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2eb470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2eb474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2eb474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2eb478: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2eb478u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2eb47c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb480: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb484: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2eb484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2eb488:
    // 0x2eb488: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x2eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2eb48c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2eb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2eb490: 0xa0400600  sb          $zero, 0x600($v0)
    ctx->pc = 0x2eb490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eb494: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x2eb494u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x2eb498: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x2eb498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2eb49c: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x2eb49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2eb4a0: 0x24a40630  addiu       $a0, $a1, 0x630
    ctx->pc = 0x2eb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x2eb4a4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2eb4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2eb4a8: 0x24a60638  addiu       $a2, $a1, 0x638
    ctx->pc = 0x2eb4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    // 0x2eb4ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb4b0: 0x24a70640  addiu       $a3, $a1, 0x640
    ctx->pc = 0x2eb4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x2eb4b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb4b8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2eb4b8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2eb4bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2eb4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eb4c0: 0x24a80648  addiu       $t0, $a1, 0x648
    ctx->pc = 0x2eb4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x2eb4c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eb4c8: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x2eb4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
    // 0x2eb4cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eb4d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2eb4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2eb4d4: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x2eb4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2eb4d8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2eb4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2eb4dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2eb4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2eb4e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb4e4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2eb4e4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2eb4e8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2eb4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2eb4ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2eb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eb4f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb4f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2eb4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2eb4f8: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x2eb4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2eb4fc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2eb4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2eb500: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2eb500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2eb504: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eb504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb508: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2eb508u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2eb50c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2eb50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2eb510: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2eb510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eb514: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb518: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2eb518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2eb51c: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x2eb51cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2eb520: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2eb520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2eb524: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2eb524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2eb528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eb528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb52c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2eb52cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2eb530: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2eb530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2eb534: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2eb534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2eb538: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb53c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2eb53cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2eb540: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x2eb540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2eb544: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2eb544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2eb548: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2eb548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2eb54c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eb54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb550: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2eb550u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2eb554: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2eb554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2eb558: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eb558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb55c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2eb55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2eb560: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2eb560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2eb564: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB564u;
    {
        const bool branch_taken_0x2eb564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB564u;
        // 0x2eb568: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb564) {
            ctx->pc = 0x2EB57Cu;
            goto label_2eb57c;
        }
    }
    ctx->pc = 0x2EB56Cu;
    // 0x2eb56c: 0x0  nop
    ctx->pc = 0x2eb56cu;
    // NOP
label_2eb570:
    // 0x2eb570: 0x29420030  slti        $v0, $t2, 0x30
    ctx->pc = 0x2eb570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2eb574: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2EB574u;
    {
        const bool branch_taken_0x2eb574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB574u;
        // 0x2eb578: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb574) {
            ctx->pc = 0x2EB3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb3e0;
        }
    }
    ctx->pc = 0x2EB57Cu;
label_2eb57c:
    // 0x2eb57c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2EB57Cu;
    SET_GPR_U32(ctx, 31, 0x2EB584u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2EB57Cu, 0x2EB584u)) {
        return;
    }
    ctx->pc = 0x2EB584u;
label_2eb584:
    // 0x2eb584: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2eb584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb588: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2eb588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eb58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb594: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB594u;
        // 0x2eb598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB59Cu;
    // 0x2eb59c: 0x0  nop
    ctx->pc = 0x2eb59cu;
    // NOP
    ctx->pc = 0x2eb5a0u;
}

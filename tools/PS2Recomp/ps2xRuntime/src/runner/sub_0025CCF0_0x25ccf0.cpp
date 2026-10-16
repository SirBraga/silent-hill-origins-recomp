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

// Function: sub_0025CCF0
// Address: 0x25ccf0 - 0x25ce50
void sub_0025CCF0_0x25ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CCF0_0x25ccf0");
#endif

    switch (ctx->pc) {
        case 0x25cd18u: goto label_25cd18;
        case 0x25cd38u: goto label_25cd38;
        case 0x25cd58u: goto label_25cd58;
        case 0x25cd78u: goto label_25cd78;
        case 0x25cd98u: goto label_25cd98;
        case 0x25cdb8u: goto label_25cdb8;
        case 0x25cdd8u: goto label_25cdd8;
        case 0x25cdf8u: goto label_25cdf8;
        case 0x25ce0cu: goto label_25ce0c;
        case 0x25ce1cu: goto label_25ce1c;
        case 0x25ce2cu: goto label_25ce2c;
        default: break;
    }

    ctx->pc = 0x25ccf0u;

    // 0x25ccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ccf4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25ccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25ccf8: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25ccf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25ccfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25cd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cd04: 0x24c67b58  addiu       $a2, $a2, 0x7B58
    ctx->pc = 0x25cd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31576));
    // 0x25cd08: 0x24e77be8  addiu       $a3, $a3, 0x7BE8
    ctx->pc = 0x25cd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31720));
    // 0x25cd0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25cd10: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CD10u;
    SET_GPR_U32(ctx, 31, 0x25CD18u);
    ctx->pc = 0x25CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD10u;
    // 0x25cd14: 0x24050501  addiu       $a1, $zero, 0x501 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CD10u, 0x25CD18u)) {
        return;
    }
    ctx->pc = 0x25CD18u;
label_25cd18:
    // 0x25cd18: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25cd18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25cd1c: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25cd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25cd20: 0x24c68758  addiu       $a2, $a2, -0x78A8
    ctx->pc = 0x25cd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936408));
    // 0x25cd24: 0x24e78710  addiu       $a3, $a3, -0x78F0
    ctx->pc = 0x25cd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936336));
    // 0x25cd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd2c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x25cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25cd30: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CD30u;
    SET_GPR_U32(ctx, 31, 0x25CD38u);
    ctx->pc = 0x25CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD30u;
    // 0x25cd34: 0x24050502  addiu       $a1, $zero, 0x502 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CD30u, 0x25CD38u)) {
        return;
    }
    ctx->pc = 0x25CD38u;
label_25cd38:
    // 0x25cd38: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25cd38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25cd3c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25cd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25cd40: 0x24c66090  addiu       $a2, $a2, 0x6090
    ctx->pc = 0x25cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24720));
    // 0x25cd44: 0x24e760b8  addiu       $a3, $a3, 0x60B8
    ctx->pc = 0x25cd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24760));
    // 0x25cd48: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25cd48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25cd4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25cd50: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CD50u;
    SET_GPR_U32(ctx, 31, 0x25CD58u);
    ctx->pc = 0x25CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD50u;
    // 0x25cd54: 0x24050503  addiu       $a1, $zero, 0x503 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CD50u, 0x25CD58u)) {
        return;
    }
    ctx->pc = 0x25CD58u;
label_25cd58:
    // 0x25cd58: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25cd58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25cd5c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25cd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25cd60: 0x24c64f40  addiu       $a2, $a2, 0x4F40
    ctx->pc = 0x25cd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20288));
    // 0x25cd64: 0x24e74e60  addiu       $a3, $a3, 0x4E60
    ctx->pc = 0x25cd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20064));
    // 0x25cd68: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25cd68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25cd6c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x25cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25cd70: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CD70u;
    SET_GPR_U32(ctx, 31, 0x25CD78u);
    ctx->pc = 0x25CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD70u;
    // 0x25cd74: 0x24050504  addiu       $a1, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CD70u, 0x25CD78u)) {
        return;
    }
    ctx->pc = 0x25CD78u;
label_25cd78:
    // 0x25cd78: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25cd78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25cd7c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25cd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25cd80: 0x24c679b0  addiu       $a2, $a2, 0x79B0
    ctx->pc = 0x25cd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31152));
    // 0x25cd84: 0x24e77918  addiu       $a3, $a3, 0x7918
    ctx->pc = 0x25cd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31000));
    // 0x25cd88: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25cd88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25cd8c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25cd90: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CD90u;
    SET_GPR_U32(ctx, 31, 0x25CD98u);
    ctx->pc = 0x25CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD90u;
    // 0x25cd94: 0x24050505  addiu       $a1, $zero, 0x505 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CD90u, 0x25CD98u)) {
        return;
    }
    ctx->pc = 0x25CD98u;
label_25cd98:
    // 0x25cd98: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25cd9c: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25cd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25cda0: 0x24c6b738  addiu       $a2, $a2, -0x48C8
    ctx->pc = 0x25cda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948664));
    // 0x25cda4: 0x24e7b758  addiu       $a3, $a3, -0x48A8
    ctx->pc = 0x25cda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948696));
    // 0x25cda8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25cda8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25cdac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25cdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cdb0: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CDB0u;
    SET_GPR_U32(ctx, 31, 0x25CDB8u);
    ctx->pc = 0x25CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDB0u;
    // 0x25cdb4: 0x2405050a  addiu       $a1, $zero, 0x50A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CDB0u, 0x25CDB8u)) {
        return;
    }
    ctx->pc = 0x25CDB8u;
label_25cdb8:
    // 0x25cdb8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25cdbc: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25cdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25cdc0: 0x24c6bfd8  addiu       $a2, $a2, -0x4028
    ctx->pc = 0x25cdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950872));
    // 0x25cdc4: 0x24e7bf58  addiu       $a3, $a3, -0x40A8
    ctx->pc = 0x25cdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950744));
    // 0x25cdc8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25cdc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25cdcc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x25cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25cdd0: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CDD0u;
    SET_GPR_U32(ctx, 31, 0x25CDD8u);
    ctx->pc = 0x25CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDD0u;
    // 0x25cdd4: 0x24050507  addiu       $a1, $zero, 0x507 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CDD0u, 0x25CDD8u)) {
        return;
    }
    ctx->pc = 0x25CDD8u;
label_25cdd8:
    // 0x25cdd8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25cdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25cddc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25cddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25cde0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25cde0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25cde4: 0x24c642e0  addiu       $a2, $a2, 0x42E0
    ctx->pc = 0x25cde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17120));
    // 0x25cde8: 0x24e742c0  addiu       $a3, $a3, 0x42C0
    ctx->pc = 0x25cde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17088));
    // 0x25cdec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cdf0: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25CDF0u;
    SET_GPR_U32(ctx, 31, 0x25CDF8u);
    ctx->pc = 0x25CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDF0u;
    // 0x25cdf4: 0x2405050b  addiu       $a1, $zero, 0x50B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25CDF0u, 0x25CDF8u)) {
        return;
    }
    ctx->pc = 0x25CDF8u;
label_25cdf8:
    // 0x25cdf8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25cdf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25cdfc: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x25CDFCu;
    {
        const bool branch_taken_0x25cdfc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x25CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDFCu;
        // 0x25ce00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cdfc) {
            ctx->pc = 0x25CE30u;
            goto label_25ce30;
        }
    }
    ctx->pc = 0x25CE04u;
    // 0x25ce04: 0xc097850  jal         func_25E140
    ctx->pc = 0x25CE04u;
    SET_GPR_U32(ctx, 31, 0x25CE0Cu);
    ctx->pc = 0x25E140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E140u, 0x25CE04u, 0x25CE0Cu)) {
        return;
    }
    ctx->pc = 0x25CE0Cu;
label_25ce0c:
    // 0x25ce0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25CE0Cu;
    {
        const bool branch_taken_0x25ce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE0Cu;
        // 0x25ce10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce0c) {
            ctx->pc = 0x25CE30u;
            goto label_25ce30;
        }
    }
    ctx->pc = 0x25CE14u;
    // 0x25ce14: 0xc09540a  jal         func_255028
    ctx->pc = 0x25CE14u;
    SET_GPR_U32(ctx, 31, 0x25CE1Cu);
    ctx->pc = 0x255028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255028u, 0x25CE14u, 0x25CE1Cu)) {
        return;
    }
    ctx->pc = 0x25CE1Cu;
label_25ce1c:
    // 0x25ce1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CE1Cu;
    {
        const bool branch_taken_0x25ce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce1c) {
            ctx->pc = 0x25CE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CE1Cu;
            // 0x25ce20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CE30u;
            goto label_25ce30;
        }
    }
    ctx->pc = 0x25CE24u;
    // 0x25ce24: 0xc098d64  jal         func_263590
    ctx->pc = 0x25CE24u;
    SET_GPR_U32(ctx, 31, 0x25CE2Cu);
    ctx->pc = 0x263590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263590u, 0x25CE24u, 0x25CE2Cu)) {
        return;
    }
    ctx->pc = 0x25CE2Cu;
label_25ce2c:
    // 0x25ce2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25ce2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25ce30:
    // 0x25ce30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25ce30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ce34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ce34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ce38: 0x3e00008  jr          $ra
    ctx->pc = 0x25CE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE38u;
        // 0x25ce3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CE40u;
    // 0x25ce40: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x25ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x25ce44: 0x0  nop
    ctx->pc = 0x25ce44u;
    // NOP
    // 0x25ce48: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x25ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x25ce4c: 0x0  nop
    ctx->pc = 0x25ce4cu;
    // NOP
    ctx->pc = 0x25ce50u;
}

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

// Function: sub_00299130
// Address: 0x299130 - 0x299248
void sub_00299130_0x299130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299130_0x299130");
#endif

    switch (ctx->pc) {
        case 0x299170u: goto label_299170;
        case 0x299200u: goto label_299200;
        case 0x299230u: goto label_299230;
        default: break;
    }

    ctx->pc = 0x299130u;

    // 0x299130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299134: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x299134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x299138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29913c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x299140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299144: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x299144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299148: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x299148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29914c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29914Cu;
    {
        const bool branch_taken_0x29914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29914Cu;
        // 0x299150: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29914c) {
            ctx->pc = 0x29915Cu;
            goto label_29915c;
        }
    }
    ctx->pc = 0x299154u;
    // 0x299154: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x299154u;
    {
        const bool branch_taken_0x299154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299154u;
        // 0x299158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299154) {
            ctx->pc = 0x299174u;
            goto label_299174;
        }
    }
    ctx->pc = 0x29915Cu;
label_29915c:
    // 0x29915c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29915cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299160: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299160u;
    {
        const bool branch_taken_0x299160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299160u;
        // 0x299164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299160) {
            ctx->pc = 0x299174u;
            goto label_299174;
        }
    }
    ctx->pc = 0x299168u;
    // 0x299168: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x299168u;
    SET_GPR_U32(ctx, 31, 0x299170u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x299168u, 0x299170u)) {
        return;
    }
    ctx->pc = 0x299170u;
label_299170:
    // 0x299170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299174:
    // 0x299174: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x299174u;
    {
        const bool branch_taken_0x299174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299174u;
        // 0x299178: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299174) {
            ctx->pc = 0x299230u;
            goto label_299230;
        }
    }
    ctx->pc = 0x29917Cu;
    // 0x29917c: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x29917cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299180: 0xdd830010  ld          $v1, 0x10($t4)
    ctx->pc = 0x299180u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x299184: 0x30641800  andi        $a0, $v1, 0x1800
    ctx->pc = 0x299184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6144);
    // 0x299188: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299188u;
    {
        const bool branch_taken_0x299188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x29918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299188u;
        // 0x29918c: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299188) {
            ctx->pc = 0x299198u;
            goto label_299198;
        }
    }
    ctx->pc = 0x299190u;
    // 0x299190: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x299190u;
    {
        const bool branch_taken_0x299190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299190u;
        // 0x299194: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299190) {
            ctx->pc = 0x2991BCu;
            goto label_2991bc;
        }
    }
    ctx->pc = 0x299198u;
label_299198:
    // 0x299198: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x299198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29919c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29919Cu;
    {
        const bool branch_taken_0x29919c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2991A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29919Cu;
        // 0x2991a0: 0x30630200  andi        $v1, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29919c) {
            ctx->pc = 0x2991B0u;
            goto label_2991b0;
        }
    }
    ctx->pc = 0x2991A4u;
    // 0x2991a4: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x2991a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2991a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2991A8u;
    {
        const bool branch_taken_0x2991a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2991ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991A8u;
        // 0x2991ac: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991a8) {
            ctx->pc = 0x2991B8u;
            goto label_2991b8;
        }
    }
    ctx->pc = 0x2991B0u;
label_2991b0:
    // 0x2991b0: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x2991b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2991b4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2991b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2991b8:
    // 0x2991b8: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x2991b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_2991bc:
    // 0x2991bc: 0x8d08001c  lw          $t0, 0x1C($t0)
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x2991c0: 0x1d000004  bgtz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2991C0u;
    {
        const bool branch_taken_0x2991c0 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x2991C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991C0u;
        // 0x2991c4: 0xdd890010  ld          $t1, 0x10($t4) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 12), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991c0) {
            ctx->pc = 0x2991D4u;
            goto label_2991d4;
        }
    }
    ctx->pc = 0x2991C8u;
    // 0x2991c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2991c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2991cc: 0x31221000  andi        $v0, $t1, 0x1000
    ctx->pc = 0x2991ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x2991d0: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x2991d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3));
label_2991d4:
    // 0x2991d4: 0x31220400  andi        $v0, $t1, 0x400
    ctx->pc = 0x2991d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1024);
    // 0x2991d8: 0x8d870008  lw          $a3, 0x8($t4)
    ctx->pc = 0x2991d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2991dc: 0x240a002b  addiu       $t2, $zero, 0x2B
    ctx->pc = 0x2991dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2991e0: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x2991e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2991e4: 0x858b0018  lh          $t3, 0x18($t4)
    ctx->pc = 0x2991e4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x2991e8: 0x2500a  movz        $t2, $zero, $v0
    ctx->pc = 0x2991e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0));
    // 0x2991ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2991ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991f0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2991f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2991f4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2991f4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2991f8: 0xc0a7a42  jal         func_29E908
    ctx->pc = 0x2991F8u;
    SET_GPR_U32(ctx, 31, 0x299200u);
    ctx->pc = 0x2991FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2991F8u;
    // 0x2991fc: 0xad800008  sw          $zero, 0x8($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E908u, 0x2991F8u, 0x299200u)) {
        return;
    }
    ctx->pc = 0x299200u;
label_299200:
    // 0x299200: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299200u;
    {
        const bool branch_taken_0x299200 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x299204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299200u;
        // 0x299204: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299200) {
            ctx->pc = 0x299218u;
            goto label_299218;
        }
    }
    ctx->pc = 0x299208u;
    // 0x299208: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x299208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29920c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x29920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x299210: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x299210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x299214: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_299218:
    // 0x299218: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x299218u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29921c: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x29921cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x299220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299220u;
    {
        const bool branch_taken_0x299220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299220u;
        // 0x299224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299220) {
            ctx->pc = 0x299234u;
            goto label_299234;
        }
    }
    ctx->pc = 0x299228u;
    // 0x299228: 0xc0a6658  jal         func_299960
    ctx->pc = 0x299228u;
    SET_GPR_U32(ctx, 31, 0x299230u);
    ctx->pc = 0x29922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299228u;
    // 0x29922c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x299228u, 0x299230u)) {
        return;
    }
    ctx->pc = 0x299230u;
label_299230:
    // 0x299230: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299234:
    // 0x299234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x299234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299238: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29923c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29923cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299240: 0x3e00008  jr          $ra
    ctx->pc = 0x299240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299240u;
        // 0x299244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299248u;
}

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

// Function: sub_002FB0A8
// Address: 0x2fb0a8 - 0x2fb278
void sub_002FB0A8_0x2fb0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB0A8_0x2fb0a8");
#endif

    switch (ctx->pc) {
        case 0x2fb0d8u: goto label_2fb0d8;
        case 0x2fb160u: goto label_2fb160;
        case 0x2fb1e0u: goto label_2fb1e0;
        case 0x2fb200u: goto label_2fb200;
        default: break;
    }

    ctx->pc = 0x2fb0a8u;

    // 0x2fb0a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fb0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0ac: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb0acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb0b0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb0b4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2fb0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2fb0b8: 0x2463ffc8  addiu       $v1, $v1, -0x38
    ctx->pc = 0x2fb0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967240));
    // 0x2fb0bc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb0c0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb0c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb0c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB0C4u;
    {
        const bool branch_taken_0x2fb0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0C4u;
        // 0x2fb0c8: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0c4) {
            ctx->pc = 0x2FB12Cu;
            goto label_2fb12c;
        }
    }
    ctx->pc = 0x2FB0CCu;
    // 0x2fb0cc: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb0d0: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb0d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb0d4: 0x0  nop
    ctx->pc = 0x2fb0d4u;
    // NOP
label_2fb0d8:
    // 0x2fb0d8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb0dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb0e0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb0e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb0e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb0ec: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb0ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb0f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb0f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb0f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb0fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb100: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb100u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB104u;
    {
        const bool branch_taken_0x2fb104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB104u;
        // 0x2fb108: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb104) {
            ctx->pc = 0x2FB114u;
            goto label_2fb114;
        }
    }
    ctx->pc = 0x2FB10Cu;
    // 0x2fb10c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb110: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb114:
    // 0x2fb114: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb118: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb11c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB11Cu;
    {
        const bool branch_taken_0x2fb11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB11Cu;
        // 0x2fb120: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb11c) {
            ctx->pc = 0x2FB0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb0d8;
        }
    }
    ctx->pc = 0x2FB124u;
    // 0x2fb124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB124u;
    {
        const bool branch_taken_0x2fb124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB124u;
        // 0x2fb128: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb124) {
            ctx->pc = 0x2FB134u;
            goto label_2fb134;
        }
    }
    ctx->pc = 0x2FB12Cu;
label_2fb12c:
    // 0x2fb12c: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb12cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb130: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb134:
    // 0x2fb134: 0x65250038  daddiu      $a1, $t1, 0x38
    ctx->pc = 0x2fb134u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)56);
    // 0x2fb138: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb13c: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x2fb13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x2fb140: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb140u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb144: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x2fb144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x2fb148: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb148u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb14c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb14cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb150: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB150u;
    {
        const bool branch_taken_0x2fb150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB150u;
        // 0x2fb154: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb150) {
            ctx->pc = 0x2FB1B4u;
            goto label_2fb1b4;
        }
    }
    ctx->pc = 0x2FB158u;
    // 0x2fb158: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb15c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb15cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fb160:
    // 0x2fb160: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb164: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb168: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb16c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb170: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb174: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb174u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb178: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb17c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb180: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb184: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb188: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb188u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb18c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB18Cu;
    {
        const bool branch_taken_0x2fb18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB18Cu;
        // 0x2fb190: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb18c) {
            ctx->pc = 0x2FB19Cu;
            goto label_2fb19c;
        }
    }
    ctx->pc = 0x2FB194u;
    // 0x2fb194: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb198: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb19c:
    // 0x2fb19c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb1a0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb1a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb1a4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB1A4u;
    {
        const bool branch_taken_0x2fb1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1A4u;
        // 0x2fb1a8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1a4) {
            ctx->pc = 0x2FB160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb160;
        }
    }
    ctx->pc = 0x2FB1ACu;
    // 0x2fb1ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB1ACu;
    {
        const bool branch_taken_0x2fb1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1ACu;
        // 0x2fb1b0: 0x65220028  daddiu      $v0, $t1, 0x28 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)40);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1ac) {
            ctx->pc = 0x2FB1BCu;
            goto label_2fb1bc;
        }
    }
    ctx->pc = 0x2FB1B4u;
label_2fb1b4:
    // 0x2fb1b4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb1b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb1b8: 0x65220028  daddiu      $v0, $t1, 0x28
    ctx->pc = 0x2fb1b8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)40);
label_2fb1bc:
    // 0x2fb1bc: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb1bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb1c0: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x2fb1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x2fb1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb1c8: 0x417fe  dsrl32      $v0, $a0, 31
    ctx->pc = 0x2fb1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x2fb1cc: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FB1CCu;
    {
        const bool branch_taken_0x2fb1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1CCu;
        // 0x2fb1d0: 0x240a0038  addiu       $t2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1cc) {
            ctx->pc = 0x2FB270u;
            goto label_2fb270;
        }
    }
    ctx->pc = 0x2FB1D4u;
    // 0x2fb1d4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2fb1d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb1d8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2fb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb1dc: 0x0  nop
    ctx->pc = 0x2fb1dcu;
    // NOP
label_2fb1e0:
    // 0x2fb1e0: 0x41e38  dsll        $v1, $a0, 24
    ctx->pc = 0x2fb1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 24);
    // 0x2fb1e4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2fb1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2fb1e8: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x2fb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x2fb1ec: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb1f0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FB1F0u;
    {
        const bool branch_taken_0x2fb1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1F0u;
        // 0x2fb1f4: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1f0) {
            ctx->pc = 0x2FB250u;
            goto label_2fb250;
        }
    }
    ctx->pc = 0x2FB1F8u;
    // 0x2fb1f8: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb1fc: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb1fcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_2fb200:
    // 0x2fb200: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2fb200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb204: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb208: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2fb208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb20c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x2fb20cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb210: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x2fb210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2fb214: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x2fb214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb218: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fb218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fb21c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2fb21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2fb220: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2fb220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb224: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x2fb224u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x2fb228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB228u;
    {
        const bool branch_taken_0x2fb228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB228u;
        // 0x2fb22c: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb228) {
            ctx->pc = 0x2FB238u;
            goto label_2fb238;
        }
    }
    ctx->pc = 0x2FB230u;
    // 0x2fb230: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb234: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb238:
    // 0x2fb238: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb23c: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb23cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb240: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2FB240u;
    {
        const bool branch_taken_0x2fb240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB240u;
        // 0x2fb244: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb240) {
            ctx->pc = 0x2FB200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb200;
        }
    }
    ctx->pc = 0x2FB248u;
    // 0x2fb248: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB248u;
    {
        const bool branch_taken_0x2fb248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB248u;
        // 0x2fb24c: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb248) {
            ctx->pc = 0x2FB258u;
            goto label_2fb258;
        }
    }
    ctx->pc = 0x2FB250u;
label_2fb250:
    // 0x2fb250: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb250u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb254: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb254u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb258:
    // 0x2fb258: 0x65230018  daddiu      $v1, $t1, 0x18
    ctx->pc = 0x2fb258u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)24);
    // 0x2fb25c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2fb25cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2fb260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb264: 0x41ffe  dsrl32      $v1, $a0, 31
    ctx->pc = 0x2fb264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x2fb268: 0x506bffdd  beql        $v1, $t3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2FB268u;
    {
        const bool branch_taken_0x2fb268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x2fb268) {
            ctx->pc = 0x2FB26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB268u;
            // 0x2fb26c: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb1e0;
        }
    }
    ctx->pc = 0x2FB270u;
label_2fb270:
    // 0x2fb270: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB270u;
        // 0x2fb274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB278u;
}
